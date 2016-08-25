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

  $export['blockify-blockify-logo'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'blockify-logo',
    'module' => 'blockify',
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
        'region' => 'header',
        'status' => 1,
        'theme' => 'elx_front',
        'weight' => -29,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-header-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-header-menu',
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
        'region' => 'header',
        'status' => 1,
        'theme' => 'elx_front',
        'weight' => -28,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-header-user-menu-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-header-user-menu-1',
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
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-header-user-menu-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-header-user-menu-2',
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
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-header_user_menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'header_user_menu',
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
        'region' => '',
        'status' => 0,
        'theme' => 'elx_front',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'elx' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'elx',
        'weight' => 0,
      ),
      'elx_front' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'elx_front',
        'weight' => -27,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
