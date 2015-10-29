<?php
/**
 * @file
 * elx_users_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function elx_users_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'aes_convert';
  $strongarm->value = TRUE;
  $export['aes_convert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'aes_implementation';
  $strongarm->value = 'phpseclib';
  $export['aes_implementation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'aes_key';
  $strongarm->value = 'jcGZoops4q5xC2zPVfsmYcxAFkjbjYZt';
  $export['aes_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'aes_viewing_method';
  $strongarm->value = 'page';
  $export['aes_viewing_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mail_system';
  $strongarm->value = array(
    'default-system' => 'MandrillMailSystem',
    'mandrill_test' => 'MandrillMailSystem',
    'mimemail' => 'MandrillMailSystem',
  );
  $export['mail_system'] = $strongarm;

  return $export;
}
