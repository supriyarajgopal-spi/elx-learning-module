<?php
/**
 * @file
 * elx_flags.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function elx_flags_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favorites".
  $flags['favorites'] = array(
    'entity_type' => 'node',
    'title' => 'Favorites',
    'global' => 0,
    'types' => array(
      0 => 'h5p_content',
      1 => 'product_detail',
      2 => 'tools',
    ),
    'flag_short' => '<span>[node:flag-favorites-count]</span></a>',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => '<span>[node:flag-favorites-count]</span></a>',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'badge_description' => '',
    'badge_unearned_description' => '',
    'badge_image' => NULL,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'modal' => 'modal',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'elx_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
