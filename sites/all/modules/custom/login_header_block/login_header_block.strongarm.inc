<?php
/**
 * @file
 * login_header_block.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function login_header_block_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'r4032login_display_denied_message';
  $strongarm->value = 0;
  $export['r4032login_display_denied_message'] = $strongarm;

  return $export;
}
