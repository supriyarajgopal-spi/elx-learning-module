<?php
/**
 * @file
 * elx_user_points_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function elx_user_points_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userpoints_category_default_vid';
  $strongarm->value = '13';
  $export['userpoints_category_default_vid'] = $strongarm;
  
  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userpoints_display_message';
  $strongarm->value = '0';
  $export['userpoints_display_message'] = $strongarm;

  return $export;
}
