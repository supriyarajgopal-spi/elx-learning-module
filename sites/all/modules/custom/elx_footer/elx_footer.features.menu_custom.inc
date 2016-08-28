<?php
/**
 * @file
 * elx_footer.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function elx_footer_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu-.
  $menus['menu-footer-menu-'] = array(
    'menu_name' => 'menu-footer-menu-',
    'title' => 'Footer menu',
    'description' => 'menu links for the footer block: need help email, and log out',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-page-bottom-privacy.
  $menus['menu-page-bottom-privacy'] = array(
    'menu_name' => 'menu-page-bottom-privacy',
    'title' => 'Page bottom privacy',
    'description' => 'A link to PRIVACY POLICY/TERMS & CONDITIONS',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A link to PRIVACY POLICY/TERMS & CONDITIONS');
  t('Footer menu');
  t('Page bottom privacy');
  t('menu links for the footer block: need help email, and log out');

  return $menus;
}
