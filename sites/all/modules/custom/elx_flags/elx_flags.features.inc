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
      0 => 'content_object',
      1 => 'product_detail',
      2 => 'tools',
    ),
    'flag_short' => 'Favorite This [node:flag-favorites-count]',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unfavorite this item',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'elx_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
