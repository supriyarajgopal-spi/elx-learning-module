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
      'access publishing options of badge content' => TRUE,
      'access publishing options of content_object content' => TRUE,
      'access publishing options of disclaimer content' => TRUE,
      'access publishing options of h5p_content content' => TRUE,
      'access publishing options of product_detail content' => TRUE,
      'access publishing options of tools content' => TRUE,
      'add user' => TRUE,
      'administer group' => TRUE,
      'approve and deny subscription' => TRUE,
      'manage members' => TRUE,
      'manage permissions' => TRUE,
      'manage roles' => TRUE,
      'publish any content' => TRUE,
      'publish editable content' => TRUE,
      'unpublish any content' => TRUE,
      'unpublish editable content' => TRUE,
      'update any badge content' => TRUE,
      'update any content_object content' => TRUE,
      'update any disclaimer content' => TRUE,
      'update any h5p_content content' => TRUE,
      'update any product_detail content' => TRUE,
      'update any tools content' => TRUE,
      'update group' => TRUE,
      'view any unpublished badge content' => TRUE,
      'view any unpublished content_object content' => TRUE,
      'view any unpublished disclaimer content' => TRUE,
      'view any unpublished h5p_content content' => TRUE,
      'view any unpublished product_detail content' => TRUE,
      'view any unpublished tools content' => TRUE,
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
    'permissions' => array(
      'create h5p_content content' => TRUE,
      'create product_detail content' => TRUE,
      'create tools content' => TRUE,
      'delete own h5p_content content' => TRUE,
      'delete own product_detail content' => TRUE,
      'delete own tools content' => TRUE,
      'update any h5p_content content' => TRUE,
      'update any product_detail content' => TRUE,
      'update any tools content' => TRUE,
    ),
  );

  return $roles;
}
