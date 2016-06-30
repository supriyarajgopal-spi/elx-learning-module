<?php
/**
 * @file
 * elx_content_tool.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function elx_content_tool_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function elx_content_tool_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function elx_content_tool_node_info() {
  $items = array(
    'market' => array(
      'name' => t('Market'),
      'base' => 'node_content',
      'description' => t('A group to assign content and users to.'),
      'has_title' => '1',
      'title_label' => t('Market name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
