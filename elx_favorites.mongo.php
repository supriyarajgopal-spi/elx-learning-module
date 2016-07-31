<?php
/**
 * Root directory of Drupal installation.
 */
define('DRUPAL_ROOT', getcwd());

include_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
drupal_set_time_limit(240);
require '/usr/local/Cellar/composer/1.1.2/libexec/vendor/autoload.php';

$mongo = new MongoDB\Client();
$collection = $mongo->selectCollection('mean-prod', 'favorites');
$collection = $collection->find();
$col_count = 0;
foreach($collection as $obj) {
  $col_count = $col_count + 1;
  $mongo_userid = $obj->userid;
  $mongo_fav_name = $obj->favoritename;
  $user_favs[] = array($mongo_userid, $mongo_fav_name);

}

$result = db_select('flag', 'f')
  ->fields('f', array('fid'))
  ->condition('name', 'favorites', '=')
  ->execute()
  ->fetchCol();
if (!empty($result[0])) {
  $flag_id = $result[0];	
}

$count = 0;
// Insert mongo user badges into new elx badges schema
foreach($user_favs as $fav) {
  $count = $count + 1;
  $fav_nid = 0;
  $user_uid = $fav[0];
  $fav_name_orig = $fav[1];
  $fav_name = $fav[1];
  $fav_name = str_replace('’', "'", $fav_name);
  $fav_name = str_replace('&', '', $fav_name);
  $fav_name = str_replace('â€™', "'", $fav_name);
  $fav_name = str_replace('Ã©', 'é', $fav_name);

  if ($fav_name == 'Product-Manifest-DayWear-Advanced-Multi-Protection-Anti-Oxidant-&-UV-Defense') {
  	$fav_name = 'Product-Manifest-DayWear-Advanced-Multi-Protection-Anti-Oxidant--UV-Defense';
  }
  elseif ($fav_name == 'Product-Manifest-Double-Wear-Light-Stay-in-Place-Makeup') {
  	$fav_name = 'Product-Manifest-Double-Wear-Light-Stay-in-Place-Makeup-es';
  }
  elseif ($fav_name == "--Beth's-Blog:-Welcome-to-the-All-New-Estée-Lauder-Experience") {
  	$fav_name = "--Beth’s-Blog:-Welcome-to-the-All-New-Estée-Lauder-Experience";
  } 
  elseif ($fav_name == "Product-Manifest-SuperNoir-Shadow-and-Liner" || $fav_name == "Product-Manifest--SuperNoir-Shadow-and-Liner---EN" || $fav_name == "Product-Manifest-SuperNoir-Shadow-Liner") {
	$fav_nid = 26669;
  }
  elseif ($fav_name == "Learning-Content-Re-Nutriv-3.6-Transformative-Energy-Creme:-Demo") {
  	$fav_name = "Learning-Content-Re-Nutriv-3.6-Transformative-Energy-Creme-Demo";
  }
  elseif ($fav_name == "Learning-Content-New-Dimension-5.0-Think-You're-Ready-for-New-Dimension") {
  	$fav_name = "Learning-Content-New-Dimension-5.0-Think-You’re-Ready-for-New-Dimension";
  }
  elseif ($fav_name == "Product-Manifest-Perfectionist-Youth-Infusing-Makeup-SPF-25-(UK)") {
  	$fav_name = "Product-Manifest-Perfectionist-Youth-Infusing-Makeup-SPF-25-UK";
  }
  elseif ($fav_name == "Product-Manifest-Sumptuous-Knockout-Defining-Lift-and-Fan-Mascara") {
  	$fav_name = "Product-Manifest-Sumptuous-Knockout--Defining-Lift-and-Fan-Mascara---EN";
  }
  elseif ($fav_name == "Product-Manifest-AERIN-Rose-Collection") {
  	$fav_name = "Product-Manifest-Aerin-Rose-Collection---en---US";
  }
  elseif ($fav_name == "Learning-Content-Re-Nutriv-3.4-Dual-Infusion:-Demo") {
  	$fav_name = "Learning-Content-Re-Nutriv-3.4-Dual-Infusion-Demo";
  }
  elseif ($fav_name == "Product-Manifest-Clear-Difference-Oil-Control-Mattifying-Hydrating-Gel") {
  	$fav_name = "Product-Manifest-Clear-Difference-Oil-Control-Mattifying-Hydrating-Gel---HK-ENG-Only";
  }
  elseif ($fav_name == "Product-Manifest-Revitalizing-Supreme-Global-Anti-Aging-Eye-Balm") {
  	$fav_name = "Product-Manifest-Revitalizing-Supreme-Global-Anti-Aging-Eye-Balm---EMEA-Only";
  }
  elseif ($fav_name == "Learning-Content-New-Dimension-2.0-Now-Every-Angle-Becomes-Your-Best-Angle") {
  	$fav_name = "Learning-Content-New-Dimension-2.0-Now-Every-Angle-Becomes-Your-Best-Angle-";
  }
  elseif ($fav_name == "Product-Manifest-Pure-Color-Envy-Sculpting-Gloss---EN" || $fav_name == "Product-Manifest-Pure-Color-Envy-Sculpting-Gloss") {
	$fav_nid = 26660;
  }
  elseif ($fav_name == "Learning-Content-Re-Nutriv-3.3-Ultimate-Diamond:-Dual-Infusion") {
  	$fav_name = "Learning-Content-Re-Nutriv-3.3-Ultimate-Diamond-Dual-Infusion";
  }
  elseif ($fav_name == "Product-Manifest-AERIN-Waterlily-Sun") {
  	$fav_name = "Product-Manifest-Aerin-Waterlily-Sun----en---US";
  }
  elseif ($fav_name == "Product-Manifest-Crescent-White-Collection-(Singapore)") {
  	$fav_name = "Product-Manifest-Crescent-White-Collection-Singapore---Korea-TR-Korea";
  }
  elseif ($fav_name == "--National-Relaxation-Day-Story") {
  	$fav_name = "--Quickstrike-Beauty-National-Relaxation-Day-Story";
  }
  elseif ($fav_name == "Product-Manifest-Double-Wear-Stay-in-Place-Makeup-SPF-10") {
  	$fav_name = "Product-Manifest-Double-Wear-Stay-in-Place-Makeup-SPF-10---EMEA-Only";
  }
  elseif ($fav_name == "Product-Manifest-AERIN-Rose-de-Grasse") {
  	$fav_name = "Product-Manifest-Aerin-Rose-de-Grasse----en---US";
  }
  elseif ($fav_name == "Learning-Content-Re-Nutriv-6.2:-Re-Nutriv-Bare-Skin-Experience") {
  	$fav_name = "Learning-Content-Re-Nutriv-6.2-Re-Nutriv-Bare-Skin-Experience";
  }
  elseif ($fav_name == "--Lets-Get-Hydrated-Story") {
  	$fav_name = "--Quickstrike-Beauty-Lets-Get-Hydrated-Story";
  }
  elseif ($fav_name == "Learning-Content-Re-Nutriv-5.1-Re-Nutriv-Specialists:-Matching") {
  	$fav_name = "Learning-Content-Re-Nutriv-5.1-Re-Nutriv-Specialists-Matching";
  }
  elseif ($fav_name == "Product-Manifest-AERIN-Iris-Meadow") {
  	$fav_name = "Product-Manifest-Aerin-Iris-Meadow---en---US";
  }
  elseif ($fav_name == "Learning-Content-Re-Nutriv-3.0-Our-Newest-Collection:-Ultimate-Diamond") {
  	$fav_name = "Learning-Content-Re-Nutriv-3.0-Our-Newest-Collection-Ultimate-Diamond";
  }
  elseif ($fav_name == "Product-Manifest-Double-Wear-Stay-in-Place-Makeup") {
  	$fav_name = "Product-Manifest-Double-Wear-Stay-in-Place-Makeup---NOAM-Only";
  }
  elseif ($fav_name == "Product-Manifest-AERIN-Amber-Musk") {
  	$fav_name = "Product-Manifest-Aerin-Amber-Musk----en---US";
  }
  elseif ($fav_name == "Product-Manifest-Revitalizing-Supreme-Global-Anti-Aging-Creme") {
  	$fav_name = "Product-Manifest-Revitalizing-Supreme-Global-Anti-Aging-Creme-Global-ex-EMEA";
  }
  elseif ($fav_name == "Story-Stay-Well-While-You-Sell!-Want-to-wake-up-feeling-more-rested?-Do-this.") {
  	$fav_name = "Story-Stay-Well-While-You-Sell-Want-to-wake-up-feeling-more-rested-Do-this.";
  }
  elseif ($fav_name == "Story-Best-of-the-Best-Tips-to-Try:-The-1-trick-to-make-every-customer-love-you") {
  	$fav_name = "Story-Best-of-the-Best-Tips-to-Try-The-1-trick-to-make-every-customer-love-you";
  }
  elseif ($fav_name == "--Stay-Well-While-You-Sell!-Cranky?-Add-this-to-your-diet.") {
  	$fav_name = "--Stay-Well-While-You-Sell-Cranky-Add-this-to-your-diet.";
  }
  elseif ($fav_name == "Product-Manifest-AERIN-Gardenia-Rattan") {
  	$fav_name = "Product-Manifest-Aerin-Gardenia-Rattan---en---US";
  }
  elseif ($fav_name == "Product-Manifest-Resilience-Lift-Firming-Sculpting-Eye-Creme") {
  	$fav_name = "Product-Manifest-Resilience-Lift-FirmingSculpting-Eye-Creme";
  }
  elseif ($fav_name == "Product-Manifest-Re-Nutriv-Ultimate-Diamond-Revitalizing-Mask-Noir") {
	$fav_nid = 26667;
  }
  elseif ($fav_name == "Product-Manifest-Advanced-Night-Repair-Concentrated-Recovery-PowerFoil-Mask") {
  	$fav_nid = 26411;
  }
  elseif ($fav_name == "Story-Best-of-the-Best-Tips-to-Try:-Work-3-Minute-Beauty-into-any-conversation") {
  	$fav_name = "Story-Best-of-the-Best-Tips-to-Try-Work-3-Minute-Beauty-into-any-conversation";
  }
  elseif ($fav_name == "Story-Best-of-the-Best-Tips-to-Try:--Recruiting-tricks-that-really-work") {
  	$fav_name = "Story-Best-of-the-Best-Tips-to-Try--Recruiting-tricks-that-really-work";
  }
  elseif ($fav_name == "Product-Manifest-AERIN-Mediterranean-Honeysuckle") {
  	$fav_name = "Product-Manifest-Aerin--Mediterranean-Honeysuckle---en---US";
  }
  elseif ($fav_name == "Story-The-6-tips-you-need-to-get-out-of-a-fragrance-rut.") {
  	$fav_name = "Story-The-6-tips-you-need-to-get-out-of-a-fragrance-rut";
  }
  elseif ($fav_name == "Story-Best-of-the-Best-Tips-to-Try-The-secret-to-building-your-clientele-") {
  	$fav_name = "Story-Best-of-the-Best-Tips-to-Try:-The-secret-to-building-your-clientele";
  }
  elseif ($fav_name == "--Ask-Ella-Why-you-should-always-remove-your-makeup-before-bed") {
  	$fav_name = "--Story---Ask-Ella---Why-you-should-always-remove-your-makeup-before-bed";
  }
  elseif ($fav_name == "Product-Manifest-Crescent-White-Brightening-Powder-Makeup-SPF-25PA-Singapore") {
  	$fav_name = "Product-Manifest-Crescent-White-Brightening-Powder-Makeup-SPF-25PA";
  }
  elseif ($fav_name == "--5-Genius-Serum-Hacks-Every-Woman-Should-Know") {
  	$fav_name = "Story-5-Genius-Serum-Hacks-Every-Woman-Should-Know";
  }
  elseif ($fav_name == "Story-National-Relaxation-Day") {
  	$fav_name = "Story-Quickstrike-Beauty---National-Relaxation-Day";
  }
  elseif ($fav_name == "Story-Best-of-the-Best-Tips-to-Try:--The-#1-way-to-introduce-our-#1-product") {
  	$fav_name = "Story-Best-of-the-Best-Tips-to-Try--The-1-way-to-introduce-our-1-product";
  }
  elseif ($fav_name == "Learning-Content-Now-Every-Angle-Becomes-Your-Best-Angle™-") {
  	$fav_name = "Learning-Content-New-Dimension-2.0-Now-Every-Angle-Becomes-Your-Best-Angle-";
  }
  elseif ($fav_name == "Story-Quickstrike-Beauty---Estee-Edit-Anniversary-") {
  	$fav_name = "--Quickstrike-Beauty---Estee-Edit-Anniversary-Story";
  }
  elseif ($fav_name == "--Quickstrike-Beauty---Internatonal-Lipstick-Day-Story") {
  	$fav_name = "--Quickstrike-Beauty---International-Lipstick-Day-Story";
  }
  elseif ($fav_name == "Story-Quick-Strike-Beauty-Summer-Solstice") {
  	$fav_name = "Story-QuickStrike-Beauty-Summer-Solstice";
  }
  elseif ($fav_name == "Story-The-One-Phrase-You-Should-Never-Say-to-a-Customer") {
  	$fav_name = "Story-The-One-Phrase-You-Should-Never-Say-to-a-Customer-";
  }
  elseif ($fav_name == "Product-Manifest-Double-Wear-Waterproof-All-Day-Extreme-Wear-Concealer") {
  	$fav_name = "Product-Manifest-Double-Wear-Waterproof-All-Day-Extreme-Wear-Concealer---EN---US";
  }
  elseif ($fav_name == "Product-Manifest-Crescent-White-Collection") {
  	$fav_name = "Product-Manifest-Crescent-White-Collection---Global-Ex-Asia";
  }
  elseif ($fav_name == "Story-Lets-Get-Hydrated") {
  	$fav_name = "Story-Quickstrike-Beauty---Lets-Get-Hydrated";
  }
  elseif ($fav_name == "Product-Manifest-AERIN-Lilac-Path") {
  	$fav_name = "Product-Manifest-Aerin--Lilac-Path---en---US";
  }
  elseif ($fav_name == "--Aerin-Wraps-the-Perfect-Holiday-Gift") {
  	$fav_name = "Story-Aerin-Wraps-the-Perfect-Holiday-Gift";
  }
  elseif ($fav_name == "Story-Ask-Ella-Why-you-should-always-remove-your-makeup-before-bed") {
  	$fav_name = "--Story---Ask-Ella---Why-you-should-always-remove-your-makeup-before-bed";
  }
  elseif ($fav_name == "--The-6-tips-you-need-to-get-out-of-a-fragrance-rut---frca") {
  	$fav_name = "--The-6-tips-you-need-to-get-out-of-a-fragrance-rut";
  }
  elseif ($fav_name == "Product-Manifest-AERIN-Ikat-Jasmine") {
  	$fav_name = "Product-Manifest-Aerin-Ikat-Jasmine---en---US";
  }
  elseif ($fav_name == "Story-Night-Done-Right---Learn-why-working-up-a-sweat-can-lead-to-better-sleep.") {
  	$fav_name = "Story-Night-Done-Right---Learn-why-working-up-a-sweat-can-lead-to-better-sleep";
  }
  elseif ($fav_name == "--Beth's-Blog-Welcome-to-the-All-New-Estée-Lauder-Experience-pp") {
  	$fav_name = "--Beth’s-Blog:-Welcome-to-the-All-New-Estée-Lauder-Experience";
  }
  elseif ($fav_name == "--Stay-Well-While-You-Sell-The-life-changing-trick-to-relieve-aches-and-pains-after-a-day-on-your-feet.---Korea --") {
  	$fav_name = "--Stay-Well-While-You-Sell-The-life-changing-trick-to-relieve-aches-and-pains-after-a-day-on-your-feet.---Korea-TR-Korea";
  }
  elseif ($fav_name == "Product-Manifest-Advanced-Night-Repair-Synchronized-Recovery-Complex-II---Taiwan-TR-Hong-Kong-Macau-Taiwan") {
  	$fav_name = "Product-Manifest-Advanced-Night-Repair-Synchronized-Recovery-Complex-II";
  }
  elseif ($fav_name == "Product-Manifest-Idealist-Cooling-Eye-Illuminator---KR-TR-KR") {
  	$fav_name = "Product-Manifest-Idealist-Cooling-Eye-Illuminator---KR-TRAPAC-KR";
  }
  elseif ($fav_name == "Product-Manifest-Revitalizing-Supreme-Global-Anti-Aging-Creme---Hong-Kong") {
  	$fav_name = "Product-Manifest-Revitalizing-Supreme-Global-Anti-Aging-Creme---Taiwan-TR-Hong-Kong-Macau-Taiwan";
  }
  elseif ($fav_name == "Product-Manifest-Crescent-White-Brightening-Powder-Makeup-SPF-25PA-Singapore---Korea-TR-Korea") {
  	$fav_name = "Product-Manifest-Crescent-White-Brightening-Powder-Makeup-SPF-25PA---Korea-TR-Korea";
  }
  
  if ($fav_nid == 0) {
    $fav_nid = get_nid_for_fav($fav_name);
  }
  if ($fav_nid == FALSE) {
  	$fav_name = str_replace("'", "’", $fav_name);
	$fav_nid = get_nid_for_fav($fav_name);
  }
  if ($fav_nid == FALSE) {
  	$fav_not_saved[] = array($user_uid, $fav_name);
  }

  // Check for already inserted favorite
  $flagging_id = get_flaggingid_for_fav($fav_nid, $user_uid);
 
  if ($fav_nid != FALSE && $flagging_id == FALSE) {
    
    // Insert mongo user favorites into flagging and flag count
    $flagging_id = db_insert('flagging')
      ->fields(array(
        'fid'         => $flag_id,
        'entity_type' => 'node',
        'entity_id'   => $fav_nid,
        'uid'         => $user_uid,
        'sid'         => 0,
        'timestamp'   => REQUEST_TIME,
    ))
    ->execute();
	$count = get_flagcount_for_fav($flag_id, $fav_nid);
	if ($count != FALSE) {
	  $count = $count++;
      $fid = db_update('flag_counts')
        ->fields(array(
          'count'        => $count,
          'last_updated' => REQUEST_TIME,
      ))
	  ->condition('fid', $flag_id, '=')
	  ->condition('entity_id', $fav_nid, '=')
      ->execute();
	}
	else {
	  $flagging_id = db_insert('flag_counts')
      ->fields(array(
        'fid'         => $flag_id,
        'entity_type' => 'node',
        'entity_id'   => $fav_nid,
        'count'         => 1,
        'last_updated'   => REQUEST_TIME,
    ))
    ->execute();
	}
    if (empty($flagging_id) || $flagging_id == FALSE) {
      $error[$user_uid]['error'] = $flag_id . ':' . $user_uid;
    }
  }
}

function get_nid_for_fav($name) {
  $result = db_select('node', 'n')
    ->fields('n', array('nid'))
    ->condition('title', $name, '=')
    ->execute()
    ->fetchCol();
	if (!empty($result[0])) {
	  $man_nid = $result[0];
      $result2 = db_select('field_revision_field_manifest', 'frfm')
        ->fields('frfm', array('entity_id'))
        ->condition('field_manifest_target_id', $man_nid, '=')
        ->execute()
        ->fetchCol();
	  if (!empty($result2[0])) {
	    $nid = $result2[0];
	    return $nid;
	  }
	}
	else {
	  return FALSE;
	}
}

function get_flaggingid_for_fav($entity_id, $user_id) {
  $result = db_select('flagging', 'f')
    ->fields('f', array('flagging_id'))
    ->condition('entity_id', $entity_id, '=')
	->condition('uid', $user_id, '=')
    ->execute()
    ->fetchCol();
	if (!empty($result[0])) {
	  $flagging_id = $result[0];
      return $flagging_id;
	}
	else {
	  return FALSE;
	}
}

function get_flagcount_for_fav($fid, $entity_id) {
  $result = db_select('flag_counts', 'f')
    ->fields('f', array('count'))
    ->condition('entity_id', $entity_id, '=')
	->condition('fid', $fid, '=')
    ->execute()
    ->fetchCol();
	if (!empty($result[0])) {
	  $count = $result[0];
      return $count;
	}
	else {
	  return FALSE;
	}
}
