<?php
/**
 * @file
 * elx_home_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function elx_home_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
function elx_home_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
