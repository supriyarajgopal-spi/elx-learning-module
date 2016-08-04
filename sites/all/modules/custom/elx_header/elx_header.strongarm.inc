<?php
/**
 * @file
 * elx_header.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function elx_header_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'accountmenu_menu_name';
  $strongarm->value = 'menu-header-user-menu';
  $export['accountmenu_menu_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_pattern';
  $strongarm->value = '[user:field-first-name]';
  $export['realname_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_suppress_user_name_mail_validation';
  $strongarm->value = 0;
  $export['realname_suppress_user_name_mail_validation'] = $strongarm;

  return $export;
}
