<?php
/**
 * @file
 * elx_header.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function elx_header_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-page-bottom-privacy'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-page-bottom-privacy',
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
        'weight' => -23,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-page_bottom'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'page_bottom',
    'module' => 'panels_mini',
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
        'region' => 'bottom',
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