<?php
/**
 * @file
 * elx_organic_groups_and_permissions.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function elx_organic_groups_and_permissions_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:market:translator'.
  $roles['node:market:translator'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'market',
    'name' => 'translator',
  );

  return $roles;
}
