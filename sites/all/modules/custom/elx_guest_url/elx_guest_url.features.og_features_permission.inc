<?php
/**
 * @file
 * elx_guest_url.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function elx_guest_url_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:market:access authoring options of guest_accounts content'
  $permissions['node:market:access authoring options of guest_accounts content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:access publishing options of guest_accounts content'
  $permissions['node:market:access publishing options of guest_accounts content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:access revisions options of guest_accounts content'
  $permissions['node:market:access revisions options of guest_accounts content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:create guest_accounts content'
  $permissions['node:market:create guest_accounts content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:delete any guest_accounts content'
  $permissions['node:market:delete any guest_accounts content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:delete own guest_accounts content'
  $permissions['node:market:delete own guest_accounts content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:update any guest_accounts content'
  $permissions['node:market:update any guest_accounts content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:update own guest_accounts content'
  $permissions['node:market:update own guest_accounts content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:market:view any unpublished guest_accounts content'
  $permissions['node:market:view any unpublished guest_accounts content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
