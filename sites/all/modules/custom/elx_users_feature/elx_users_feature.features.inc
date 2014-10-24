<?php
/**
 * @file
 * elx_users_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function elx_users_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
