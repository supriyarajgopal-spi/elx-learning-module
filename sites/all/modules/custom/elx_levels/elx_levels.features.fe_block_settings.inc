<?php
/**
 * @file
 * elx_levels.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function elx_levels_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-levels_page_introduction'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'levels_page_introduction',
    'module' => 'block',
    'node_types' => array(),
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
        'region' => '',
        'status' => 0,
        'theme' => 'elx_front',
        'weight' => -16,
      ),
    ),
    'title' => 'Levels',
    'visibility' => 0,
  );

  $export['menu-menu-levels-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-levels-menu',
    'module' => 'menu',
    'node_types' => array(),
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
        'region' => '',
        'status' => 0,
        'theme' => 'elx_front',
        'weight' => -17,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
