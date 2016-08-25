<?php
/**
 * @file
 * elx_user_points_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function elx_user_points_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function elx_user_points_feature_flag_default_flags() {
  $flags = array();
  // Exported flag: "First Viewed Content".
  $flags['first_viewed_content'] = array(
    'entity_type' => 'node',
    'title' => 'First Viewed Content',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Viewed first',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unflagged',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'badge_description' => '',
    'badge_image' => '',
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'diff_standard' => 0,
      'modal' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'elx_user_points_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
