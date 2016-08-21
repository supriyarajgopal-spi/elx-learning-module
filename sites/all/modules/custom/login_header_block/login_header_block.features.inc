<?php
/**
 * @file
 * login_header_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function login_header_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
