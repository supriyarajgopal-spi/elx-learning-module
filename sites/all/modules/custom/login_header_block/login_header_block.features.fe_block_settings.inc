<?php
/**
 * @file
 * login_header_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function login_header_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-login_header'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'login_header',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'elx' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'elx',
        'weight' => 0,
      ),
      'elx_front' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'elx_front',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
