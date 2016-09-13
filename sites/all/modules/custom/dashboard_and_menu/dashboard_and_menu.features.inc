<?php
/**
 * @file
 * dashboard_and_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dashboard_and_menu_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dashboard_and_menu_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
