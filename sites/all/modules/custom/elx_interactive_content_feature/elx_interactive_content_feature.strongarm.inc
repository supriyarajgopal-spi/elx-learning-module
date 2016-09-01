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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_h5p_content';
  $strongarm->value = '1';
  $export['i18n_node_extended_h5p_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_h5p_content';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
    2 => 'lock',
  );
  $export['i18n_node_options_h5p_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_h5p_content';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_h5p_content'] = $strongarm;

  return $export;
}
