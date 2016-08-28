<?php
/**
 * @file
 * elx_levels.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function elx_levels_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_levels-menu:admin/structure/menu/manage/menu-levels-menu.
  $menu_links['management_levels-menu:admin/structure/menu/manage/menu-levels-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-levels-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Levels menu',
    'options' => array(
      'identifier' => 'management_levels-menu:admin/structure/menu/manage/menu-levels-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Levels menu');

  return $menu_links;
}
