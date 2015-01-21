<?php
/**
 * @file
 * elx_site_configurations.oauth.inc
 */

/**
 * Implements hook_default_oauth_common_context().
 */
function elx_site_configurations_default_oauth_common_context() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 1;
  $context->name = 'drupal';
  $context->title = 'drupal';
  $context->authorization_options = array(
    'access_token_lifetime' => NULL,
    'page_title' => 'auth',
    'message' => 'Click \'Login\'',
    'warning' => NULL,
    'deny_access_title' => 'Deny',
    'grant_access_title' => 'Login',
    'disable_auth_level_selection' => 1,
    'signature_methods' => array(
      0 => 'HMAC-SHA1',
    ),
    'default_authorization_levels' => array(
      0 => 'authorization',
    ),
  );
  $context->authorization_levels = array(
    'authorization' => array(
      'name' => 'authorization',
      'title' => 'authorization',
      'default' => 1,
      'delete' => 0,
      'description' => '',
    ),
  );
  $export['drupal'] = $context;

  return $export;
}
