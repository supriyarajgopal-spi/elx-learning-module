#!/usr/bin/env drush

<?php


function translate_text ($source_language, $translate_language_to, $english_words_to_translate) {
  //spaces cause problems for google translate, so we modify them to '+' to work
  $english_words_to_translate = str_replace(" ", "+", $english_words_to_translate);

  // google translate has a few languages that don't map, zhhans = zh, zhhant = zh-TW, frca = fr , essp = es, so we change them here
  if ($translate_language_to == 'zhhans') {
    $translate_language_to = 'zh';
  } elseif ($translate_language_to == 'zhhant') {
    $translate_language_to = 'zh-TW';
  } elseif ($translate_language_to == 'frca') {
    $translate_language_to = 'fr';
  } elseif ($translate_language_to == 'essp') {
    $translate_language_to = 'es';
  }
  //drush_print("source: {$source_language} to langauge: {$translate_language_to} words: {$english_words_to_translate}");
  $key = 'AIzaSyCUDX3Blsg3SsUOeea_R8hU-LWhE_GlTHc';
  $url = "https://www.googleapis.com/language/translate/v2?key={$key}&source={$source_language}&target={$translate_language_to}&q={$english_words_to_translate}";
  $ch = curl_init();
  curl_setopt($ch, CURLOPT_URL, $url);
  // Set so curl_exec returns the result instead of outputting it.
  curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
  // Get the response and close the channel.
  $response = curl_exec($ch);
  curl_close($ch);
  $obj = json_decode($response);
  $translated_text = $obj->data->translations[0]->translatedText;
  if (strlen($translated_text) > 0) {
    return ($translated_text);
  } else {
    return ("not_translated");
  }
}

//$source_language = 'en';
//$translate_language_to = 'th';
//$english_words_to_translate = 'Service Star';
//$trans = translate_text($source_language, $translate_language_to, $english_words_to_translate);
//drush_print($trans);
//
//return;

function check_badge_manifest($tids_node) {
    $bad_tid_value = false;
    $title = $tids_node->title;
    $english_title = $tids_node->field_original_engbadge_title['und'][0]['value'];
    $language = $tids_node->field_language['und'][0]['value'];
    $earned_description = $tids_node->field_badge_unearned_description['und'][0]['value'];
    $unearned_description = $tids_node->field_badge_unearned_description['und'][0]['value'];
    $weight = $tids_node->field_badge_weight['und'][0]['value'];
    $markets = $tids_node->field_manifest_markets['und'][0]['value'];
    $image = $tids_node->field_badge_image['und'][0]['value'];

    // fix two problems in manifest later, english title and weight (both are inherited from english version)
    if (!strlen($english_title) > 0) {
        drush_print("Check badge: found missing english title, will fix for target node : {$tids_node}");
    }
    if (!strlen($weight) > 0) {
        drush_print("Check badge: found missing weight, will fix for target node : {$tids_node}");
    }
    // can't really fix manifest if the following things are not set, fix in node and reprocess
    if (!strlen($title) > 0) {
        drush_print("Check badge: found bad title for target node : {$tids_node}");
        $bad_tid_value = true;
    }
    if (!strlen($language) > 0) {
        drush_print("Check badge: found missing language for target node : {$tids_node}");
        $bad_tid_value = true;
    }
    if (!strlen($earned_description) > 0) {
        drush_print("Check badge: found missing earned description for target node: {$tids_node}");
        $bad_tid_value = true;
    }
    if (!strlen($unearned_description) > 0) {
        drush_print("Check badge: found missing unearned description for target node: {$tids_node}");
        $bad_tid_value = true;
    }
    if (!strlen($markets) > 0) {
        drush_print("Check badge: found a manifest with no markets set for target node: {$tids_node}");
        $bad_tid_value = true;
    }
    if (!strlen($image) > 0) {
        drush_print("Check badge: found a manifest with no image set for target node: {$tids_node}");
        $bad_tid_value = true;
    }
    if ($bad_tid_value) {
        $bad_manifests[] = $tids_node;
        return false;
    } else {
        return true;
    }
}

//
// here is the start of the code to process badges, and fix things where we find trouble.
//

drush_print('starting badge processing...');
$limit = 1000;
$items = [];
$language = 'en';
$language_neutral = 'und';
$query = db_query_range('select n.nid from {node} n where n.type = :type', 0, $limit, [':type' => 'badge']);
$result = $query->fetchAll();
drush_print('search for badges finished...');
$num_badges = count($result);
drush_print("found {$num_badges} badges in search...");

// for every 'badge' node type we find and for
// every manifest within each node, fix and save a 'badge_manifest'

$num_items_processed = 0;
$num_good_badges = 0;
foreach ($result as $key => $value) {
	$nid = $value->nid;
	$n = node_load($nid);

	$manifests = $n->field_manifest;
  $num_manifests = count($manifests);
  drush_print("found {$num_manifests} manifests in node");

  $markets = $n->field_markets;
  $num_markets = count($markets);

  drush_print("languages:  {$markets})");
  foreach ($markets as $key=>$value) {
    $languages[] = $key;
  }

  // load english first and don't allow repeats
  $english_version = $n->title_field['en'][0]['value'];
  $array_of_titles[] = $english_version;
  //drush_print("0: {$array_of_titles[0]}");
  foreach ($languages as $key=>$value) {
    $current_language_title = $n->title_field[$value][0]['value'];
    drush_print("current language title : {$current_language_title}");
    drush_print("about to translate: from en to {$value} for title {$english_version}");
    $trans = translate_text('en', $value, $english_version);
    drush_print("translated to: {$trans}");
    // if the title is already used, add a language suffix to not collide.
    if (in_array($trans, $array_of_titles)) {
      drush_print("found one already translated, not adding it {$trans}!");
      $trans = $trans . '-' . $value;
      //var_dump($array_of_titles);
      $array_of_titles[] = $trans;
    } else {
      if ($trans != 'not_translated') {
        $array_of_titles[] = $trans;
        drush_print("using the {$trans} title and saving now.");
      }
    }
    $n->title_field[$value][0]['value'] = $trans;
  }
  $num_items_processed = $num_items_processed + 1;
}

drush_print("array of titles :");
var_dump($array_of_titles);

node_save($n);
drush_print("saved node just now...");

drush_print("found and processed {$num_items_processed} badges");

