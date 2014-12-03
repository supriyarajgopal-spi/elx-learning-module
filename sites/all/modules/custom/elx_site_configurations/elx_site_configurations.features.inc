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
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function elx_site_configurations_node_info() {
  $items = array(
    'list' => array(
      'name' => t('List'),
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
      'title_label' => t('Title'),
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
  );
  return $items;
}
