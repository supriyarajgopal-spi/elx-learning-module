<?php
/**
 * @file
 * elx_guest_url.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function elx_guest_url_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_invite-types:admin/structure/invite-types
  $menu_links['management_invite-types:admin/structure/invite-types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/invite-types',
    'router_path' => 'admin/structure/invite-types',
    'link_title' => 'Invite Types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Invite types.',
      ),
      'identifier' => 'management_invite-types:admin/structure/invite-types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_invite:admin/config/people/invite
  $menu_links['management_invite:admin/config/people/invite'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/invite',
    'router_path' => 'admin/config/people/invite',
    'link_title' => 'Invite',
    'options' => array(
      'attributes' => array(
        'title' => 'Modify invitation settings.',
      ),
      'identifier' => 'management_invite:admin/config/people/invite',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_referrals-summary:admin/reports/referral
  $menu_links['management_referrals-summary:admin/reports/referral'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/referral',
    'router_path' => 'admin/reports/referral',
    'link_title' => 'Referrals summary',
    'options' => array(
      'attributes' => array(
        'title' => 'Admin reports for the User Referral module.',
      ),
      'identifier' => 'management_referrals-summary:admin/reports/referral',
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
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_user-referral:admin/config/people/referral
  $menu_links['management_user-referral:admin/config/people/referral'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/referral',
    'router_path' => 'admin/config/people/referral',
    'link_title' => 'User Referral',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for the User Referral module.',
      ),
      'identifier' => 'management_user-referral:admin/config/people/referral',
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
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: navigation_your-referrals:referral/view
  $menu_links['navigation_your-referrals:referral/view'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'referral/view',
    'router_path' => 'referral/view',
    'link_title' => 'Your Referrals',
    'options' => array(
      'identifier' => 'navigation_your-referrals:referral/view',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Invite');
  t('Invite Types');
  t('Referrals summary');
  t('User Referral');
  t('Your Referrals');


  return $menu_links;
}
