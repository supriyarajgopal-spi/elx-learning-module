<?php
/**
 * @file
 * elx_levels.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function elx_levels_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-levels-menu.
  $menus['menu-levels-menu'] = array(
    'menu_name' => 'menu-levels-menu',
    'title' => 'Levels menu',
    'description' => 'Levels pages for All, In Progress, Completed',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Levels menu');
  t('Levels pages for All, In Progress, Completed');

  return $menus;
}
