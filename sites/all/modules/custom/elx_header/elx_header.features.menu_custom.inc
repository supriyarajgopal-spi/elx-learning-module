<?php
/**
 * @file
 * elx_header.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function elx_header_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-header-menu.
  $menus['menu-header-menu'] = array(
    'menu_name' => 'menu-header-menu',
    'title' => 'Header menu',
    'description' => 'Header menus',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-header-user-menu.
  $menus['menu-header-user-menu'] = array(
    'menu_name' => 'menu-header-user-menu',
    'title' => 'Header user menu',
    'description' => 'Header user menu',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-header-user-menu-1.
  $menus['menu-header-user-menu-1'] = array(
    'menu_name' => 'menu-header-user-menu-1',
    'title' => 'Header user menu 1',
    'description' => 'This menu block contains My Dashboard, Leaderboard, Tools, and Badges links.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-header-user-menu-2.
  $menus['menu-header-user-menu-2'] = array(
    'menu_name' => 'menu-header-user-menu-2',
    'title' => 'Header user menu 2',
    'description' => 'This menu block contains Logout link.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Header menu');
  t('Header menus');
  t('Header user menu');
  t('Header user menu 1');
  t('Header user menu 2');
  t('This menu block contains Logout link.');
  t('This menu block contains My Dashboard, Leaderboard, Tools, and Badges links.');


  return $menus;
}
