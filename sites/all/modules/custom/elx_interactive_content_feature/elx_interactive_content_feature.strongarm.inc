<?php
/**
 * @file
 * elx_interactive_content_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function elx_interactive_content_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dev_timer';
  $strongarm->value = 0;
  $export['dev_timer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'h5p_save_content_state';
  $strongarm->value = 1;
  $export['h5p_save_content_state'] = $strongarm;

  return $export;
}
