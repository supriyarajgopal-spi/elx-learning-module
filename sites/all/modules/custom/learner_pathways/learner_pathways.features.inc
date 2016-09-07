<?php
/**
 * @file
 * learner_pathways.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function learner_pathways_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function learner_pathways_flag_default_flags() {
  $flags = array();
  // Exported flag: "Beautiful Start".
  $flags['beautiful_start'] = array(
    'entity_type' => 'user',
    'title' => 'Beautiful Start',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Award this badge',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Withdraw this badge',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'badge_description' => '',
    'badge_image' => '',
    'show_in_links' => array(
      'full' => 'full',
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'module' => 'learner_pathways',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
