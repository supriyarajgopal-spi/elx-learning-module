<?php
/**
 * @file
 * elx_guest_url.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function elx_guest_url_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function elx_guest_url_node_info() {
  $items = array(
    'guest_accounts' => array(
      'name' => t('Guest Accounts'),
      'base' => 'node_content',
      'description' => t('Guest Account Content Type'),
      'has_title' => '1',
      'title_label' => t('Account Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
