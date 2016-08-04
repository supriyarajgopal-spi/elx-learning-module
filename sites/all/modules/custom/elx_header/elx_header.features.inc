<?php
/**
 * @file
 * elx_header.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function elx_header_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function elx_header_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
