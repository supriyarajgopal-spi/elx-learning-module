<?php
/**
 * @file
 * elx_content_tool.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function elx_content_tool_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:market:add user'
  $permissions['node:market:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:market:administer group'
  $permissions['node:market:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:market:approve and deny subscription'
  $permissions['node:market:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:market:create content_object content'
  $permissions['node:market:create content_object content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:market:delete any content_object content'
  $permissions['node:market:delete any content_object content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:market:delete own content_object content'
  $permissions['node:market:delete own content_object content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:market:manage members'
  $permissions['node:market:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:market:manage permissions'
  $permissions['node:market:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:market:manage roles'
  $permissions['node:market:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:market:subscribe'
  $permissions['node:market:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:market:subscribe without approval'
  $permissions['node:market:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:unsubscribe'
  $permissions['node:market:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:market:update any content_object content'
  $permissions['node:market:update any content_object content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:market:update group'
  $permissions['node:market:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:market:update own content_object content'
  $permissions['node:market:update own content_object content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  return $permissions;
}
