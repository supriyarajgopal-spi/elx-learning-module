<?php
/**
 * @file
 * elx_organic_groups_and_permissions.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function elx_organic_groups_and_permissions_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:market:create badge content'
  $permissions['node:market:create badge content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:create disclaimer content'
  $permissions['node:market:create disclaimer content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:create h5p_content content'
  $permissions['node:market:create h5p_content content'] = array(
    'roles' => array(
      'translator' => 'translator',
    ),
  );

  // Exported og permission: 'node:market:create product_detail content'
  $permissions['node:market:create product_detail content'] = array(
    'roles' => array(
      'translator' => 'translator',
    ),
  );

  // Exported og permission: 'node:market:create tools content'
  $permissions['node:market:create tools content'] = array(
    'roles' => array(
      'translator' => 'translator',
    ),
  );

  // Exported og permission: 'node:market:delete any badge content'
  $permissions['node:market:delete any badge content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:delete any disclaimer content'
  $permissions['node:market:delete any disclaimer content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:delete any h5p_content content'
  $permissions['node:market:delete any h5p_content content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:delete any product_detail content'
  $permissions['node:market:delete any product_detail content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:delete any tools content'
  $permissions['node:market:delete any tools content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:delete own badge content'
  $permissions['node:market:delete own badge content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:delete own disclaimer content'
  $permissions['node:market:delete own disclaimer content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:delete own h5p_content content'
  $permissions['node:market:delete own h5p_content content'] = array(
    'roles' => array(
      'translator' => 'translator',
    ),
  );

  // Exported og permission: 'node:market:delete own product_detail content'
  $permissions['node:market:delete own product_detail content'] = array(
    'roles' => array(
      'translator' => 'translator',
    ),
  );

  // Exported og permission: 'node:market:delete own tools content'
  $permissions['node:market:delete own tools content'] = array(
    'roles' => array(
      'translator' => 'translator',
    ),
  );

  // Exported og permission: 'node:market:publish any content'
  $permissions['node:market:publish any content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:market:publish editable content'
  $permissions['node:market:publish editable content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:market:unpublish any content'
  $permissions['node:market:unpublish any content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:market:unpublish editable content'
  $permissions['node:market:unpublish editable content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:market:update any badge content'
  $permissions['node:market:update any badge content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:market:update any disclaimer content'
  $permissions['node:market:update any disclaimer content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:market:update any h5p_content content'
  $permissions['node:market:update any h5p_content content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'translator' => 'translator',
    ),
  );

  // Exported og permission: 'node:market:update any product_detail content'
  $permissions['node:market:update any product_detail content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'translator' => 'translator',
    ),
  );

  // Exported og permission: 'node:market:update any tools content'
  $permissions['node:market:update any tools content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'translator' => 'translator',
    ),
  );

  // Exported og permission: 'node:market:update own badge content'
  $permissions['node:market:update own badge content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:update own disclaimer content'
  $permissions['node:market:update own disclaimer content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:update own h5p_content content'
  $permissions['node:market:update own h5p_content content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:update own product_detail content'
  $permissions['node:market:update own product_detail content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:update own tools content'
  $permissions['node:market:update own tools content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
