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

  // Exported menu link: navigation_notifications-modal:notifications_popup
  $menu_links['navigation_notifications-modal:notifications_popup'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'notifications_popup',
    'router_path' => 'notifications_popup',
    'link_title' => 'Notifications Modal',
    'options' => array(
      'identifier' => 'navigation_notifications-modal:notifications_popup',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: user-menu_notifications:notifications
  $menu_links['user-menu_notifications:notifications'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'notifications',
    'router_path' => 'notifications',
    'link_title' => 'Notifications',
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
      'identifier' => 'user-menu_notifications:notifications',
    ),
    'module' => 'menu',
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
  t('Notifications');
  t('Notifications Modal');


  return $menu_links;
}
