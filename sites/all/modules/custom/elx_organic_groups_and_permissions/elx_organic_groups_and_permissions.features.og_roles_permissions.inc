<?php
/**
 * @file
 * elx_organic_groups_and_permissions.features.og_roles_permissions.inc
 */

/**
 * Implements hook_default_og_roles_permissions().
 */
function elx_organic_groups_and_permissions_default_og_roles_permissions() {
  $roles = array();

  // Exported role: node:market:administrator member.
  $roles['node:market:administrator member'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'market',
    'name' => 'administrator member',
    'permissions' => array(
      'add user' => TRUE,
      'administer group' => TRUE,
      'approve and deny subscription' => TRUE,
      'manage members' => TRUE,
      'manage permissions' => TRUE,
      'manage roles' => TRUE,
      'update group' => TRUE,
    ),
  );

  // Exported role: node:market:member.
  $roles['node:market:member'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'market',
    'name' => 'member',
    'permissions' => array(),
  );

  // Exported role: node:market:non-member.
  $roles['node:market:non-member'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'market',
    'name' => 'non-member',
    'permissions' => array(),
  );

  // Exported role: node:market:translator.
  $roles['node:market:translator'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'market',
    'name' => 'translator',
    'permissions' => array(),
  );

  return $roles;
}
