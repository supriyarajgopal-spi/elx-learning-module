<?php

/**
 * @file
 * Feeds API implementations.
 */

/**
 * Implements hook_feeds_processor_targets_alter().
 */
function elx_users_feature_feeds_processor_targets_alter(&$targets, $entity_type, $bundle_name) {
  switch ($entity_type) {
    case 'user':
      if (module_exists('apply_for_role')) {
        // Add apply for role target.
        $targets['apply_for_role'] = array(
          'name' => t('Apply for role'),
          'description' => t('Creates role applications.'),
        );
      }
      break;
  }
}

/**
 * Implements hook_feeds_after_save().
 */
function elx_users_feature_feeds_after_save(FeedsSource $source, $entity, $item, $entity_id) {
  if (module_exists('apply_for_role') && !empty($entity->apply_for_role) && $source->importer()->processor instanceof FeedsUserProcessor && !empty($entity->uid)) {
    foreach (array_filter(array_map('user_role_load_by_name', (array) $entity->apply_for_role)) as $role) {
      apply_for_role_add_apply($entity, $role->rid);
    }
  }
}
