<?php
/**
 * @file
 * elx_levels.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function elx_levels_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_minipanels_levels-menu_enabled';
  $strongarm->value = FALSE;
  $export['menu_minipanels_levels-menu_enabled'] = $strongarm;

  return $export;
}
