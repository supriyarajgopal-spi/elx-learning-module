<?php
/**
 * @file
 * elx_header.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function elx_header_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-header-menu_levels:levels_all.
  $menu_links['menu-header-menu_levels:levels_all'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'levels_all',
    'router_path' => 'levels_all',
    'link_title' => 'Levels',
    'options' => array(
      'attributes' => array(
        'title' => 'Your progress',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-header-menu_levels:levels_all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-header-menu_product-library:product-library.
  $menu_links['menu-header-menu_product-library:product-library'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'product-library',
    'router_path' => 'product-library',
    'link_title' => 'Product Library',
    'options' => array(
      'attributes' => array(
        'title' => 'Library of Products',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-header-menu_product-library:product-library',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-header-user-menu-1_badges:badges.
  $menu_links['menu-header-user-menu-1_badges:badges'] = array(
    'menu_name' => 'menu-header-user-menu-1',
    'link_path' => 'badges',
    'router_path' => 'badges',
    'link_title' => 'BADGES',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-header-user-menu-1_badges:badges',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-header-user-menu-1_leaderboard:leaderboard.
  $menu_links['menu-header-user-menu-1_leaderboard:leaderboard'] = array(
    'menu_name' => 'menu-header-user-menu-1',
    'link_path' => 'leaderboard',
    'router_path' => 'leaderboard',
    'link_title' => 'LEADERBOARD',
    'options' => array(
      'attributes' => array(
        'title' => 'The leaders',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-header-user-menu-1_leaderboard:leaderboard',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-header-user-menu-1_my-dashboard:user.
  $menu_links['menu-header-user-menu-1_my-dashboard:user'] = array(
    'menu_name' => 'menu-header-user-menu-1',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'MY DASHBOARD',
    'options' => array(
      'attributes' => array(
        'title' => 'Your dashboard',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-header-user-menu-1_my-dashboard:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-header-user-menu-1_tools:tools.
  $menu_links['menu-header-user-menu-1_tools:tools'] = array(
    'menu_name' => 'menu-header-user-menu-1',
    'link_path' => 'tools',
    'router_path' => 'tools',
    'link_title' => 'TOOLS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-header-user-menu-1_tools:tools',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-header-user-menu-2_log-out:user/logout.
  $menu_links['menu-header-user-menu-2_log-out:user/logout'] = array(
    'menu_name' => 'menu-header-user-menu-2',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'LOG OUT',
    'options' => array(
      'attributes' => array(
        'title' => 'Log out of my ELX',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-header-user-menu-2_log-out:user/logout',
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
  // Exported menu link: menu-header-user-menu_realname:user/self.
  $menu_links['menu-header-user-menu_realname:user/self'] = array(
    'menu_name' => 'menu-header-user-menu',
    'link_path' => 'user/self',
    'router_path' => 'user/self',
    'link_title' => '@realname',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => 'View/edit user account.',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-header-user-menu_realname:user/self',
    ),
    'module' => 'accountmenu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-header-user-menu_trigger-link-menu:<front>.
  $menu_links['menu-header-user-menu_trigger-link-menu:<front>'] = array(
    'menu_name' => 'menu-header-user-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Trigger Link Menu',
    'options' => array(
      'minipanel' => 'header_user_menu',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'custom',
          'target_custom' => '#block-menu-menu-header-user-menu',
          'type' => 'absolute',
          'container' => '',
          'corner' => array(
            'target' => 'bottomRight',
            'tooltip' => 'topRight',
          ),
          'adjust' => array(
            'x' => 0,
            'y' => 0,
          ),
        ),
        'show' => array(
          'delay' => 0,
          'when' => array(
            'event' => 'click',
          ),
          'effect' => array(
            'type' => 'slide',
            'length' => 100,
          ),
        ),
        'hide' => array(
          'delay' => 0,
          'effect' => array(
            'type' => 'slide',
            'length' => 100,
          ),
        ),
        'style' => array(
          'tip' => 'none',
          'name' => 'light',
          'width' => array(
            'min' => 320,
            'max' => 320,
          ),
          'border' => array(
            'width' => 0,
            'color' => '',
            'radius' => 0,
          ),
        ),
        'mlid' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-header-user-menu_trigger-link-menu:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('@realname');
  t('BADGES');
  t('LEADERBOARD');
  t('LOG OUT');
  t('Levels');
  t('MY DASHBOARD');
  t('Product Library');
  t('TOOLS');
  t('Trigger Link Menu');

  return $menu_links;
}
