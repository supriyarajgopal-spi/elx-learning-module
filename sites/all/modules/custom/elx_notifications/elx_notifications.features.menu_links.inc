<?php
/**
 * @file
 * elx_notifications.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function elx_notifications_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-header-menu_messages:notifications.
  $menu_links['menu-header-menu_messages:notifications'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'notifications',
    'router_path' => 'notifications',
    'link_title' => '✉',
    'options' => array(
      'link_badge' => array(
        'callback' => 'menu_badges_execute_view',
        'arguments' => array(
          'view_name' => 'notifications',
          'view_display_id' => 'menu_badge_1',
        ),
        'key' => 'views_notifications_menu_badge_1',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-header-menu_messages:notifications',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Messages');

  return $menu_links;
}
