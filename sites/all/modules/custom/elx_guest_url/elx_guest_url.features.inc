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
