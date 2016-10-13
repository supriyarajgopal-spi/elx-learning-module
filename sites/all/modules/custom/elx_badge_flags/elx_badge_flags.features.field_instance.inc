<?php
/**
 * @file
 * elx_badge_flags.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function elx_badge_flags_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-learning_category-field_user_points'.
  $field_instances['taxonomy_term-learning_category-field_user_points'] = array(
    'bundle' => 'learning_category',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_user_points',
    'is_property' => FALSE,
    'label' => 'User Points',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('User Points');

  return $field_instances;
}
