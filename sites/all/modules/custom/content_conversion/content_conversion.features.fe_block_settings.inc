<?php
/**
 * @file
 * content_conversion.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function content_conversion_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-f6a1bb878868ebbc2dd60b1e565df1bd'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'f6a1bb878868ebbc2dd60b1e565df1bd',
    'module' => 'views',
    'node_types' => array(
      0 => 'h5p_content',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'elx' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'elx',
        'weight' => 0,
      ),
      'elx_front' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'elx_front',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
