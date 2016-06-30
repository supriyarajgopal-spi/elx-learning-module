<?php
/**
 * @file
 * elx_site_configurations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function elx_site_configurations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "oauth_common" && $api == "oauth") {
    return array("version" => "1");
  }
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function elx_site_configurations_node_info() {
  $items = array(
    'badge' => array(
      'name' => t('Badge'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'content_object' => array(
      'name' => t('Content Object'),
      'base' => 'node_content',
      'description' => t('Wrapper for learning objects.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'diary' => array(
      'name' => t('Diary'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'disclaimer' => array(
      'name' => t('Disclaimer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'drag_match' => array(
      'name' => t('Drag Match'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'drag_priorities' => array(
      'name' => t('Drag Priorities'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'drag_select' => array(
      'name' => t('Drag Select'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'flash_cards' => array(
      'name' => t('Flash Cards'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'guest_accounts' => array(
      'name' => t('Guest Accounts'),
      'base' => 'node_content',
      'description' => t('Guest Account Content Type'),
      'has_title' => '1',
      'title_label' => t('Account Name'),
      'help' => '',
    ),
    'hot_spots' => array(
      'name' => t('Hot Spots'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'list' => array(
      'name' => t('List'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Subtitle'),
      'help' => '',
    ),
    'matching_game' => array(
      'name' => t('Matching Game'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Subtitle'),
      'help' => '',
    ),
    'product_detail' => array(
      'name' => t('Product Detail'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'question_and_answer' => array(
      'name' => t('Question and Answer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Subtitle'),
      'help' => '',
    ),
    'reveal' => array(
      'name' => t('Reveal'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Subtitle'),
      'help' => '',
    ),
    'story' => array(
      'name' => t('Story'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tools' => array(
      'name' => t('Tools'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'trivia' => array(
      'name' => t('Trivia'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Subtitle'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function elx_site_configurations_paragraphs_info() {
  $items = array(
    'answers' => array(
      'name' => 'Answers',
      'bundle' => 'answers',
      'locked' => '1',
    ),
    'drag_match' => array(
      'name' => 'Drag Match',
      'bundle' => 'drag_match',
      'locked' => '1',
    ),
    'drag_priority' => array(
      'name' => 'Drag priority',
      'bundle' => 'drag_priority',
      'locked' => '1',
    ),
    'drag_select' => array(
      'name' => 'Drag select',
      'bundle' => 'drag_select',
      'locked' => '1',
    ),
    'flash_card_collection' => array(
      'name' => 'Flash card collection',
      'bundle' => 'flash_card_collection',
      'locked' => '1',
    ),
    'hot_spot' => array(
      'name' => 'Hot spot',
      'bundle' => 'hot_spot',
      'locked' => '1',
    ),
    'list_item' => array(
      'name' => 'List item collection',
      'bundle' => 'list_item',
      'locked' => '1',
    ),
    'match_game_collection' => array(
      'name' => 'Match game collection',
      'bundle' => 'match_game_collection',
      'locked' => '1',
    ),
    'multiple_choice_collection' => array(
      'name' => 'Multiple choice collection',
      'bundle' => 'multiple_choice_collection',
      'locked' => '1',
    ),
    'questions' => array(
      'name' => 'Questions',
      'bundle' => 'questions',
      'locked' => '1',
    ),
    'reveal_collection' => array(
      'name' => 'Reveal collection',
      'bundle' => 'reveal_collection',
      'locked' => '1',
    ),
  );
  return $items;
}
