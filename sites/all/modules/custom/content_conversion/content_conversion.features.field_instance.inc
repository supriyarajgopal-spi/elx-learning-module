<?php
/**
 * @file
 * content_conversion.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_conversion_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-content_object-field_h5p_node'.
  $field_instances['node-content_object-field_h5p_node'] = array(
    'bundle' => 'content_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'An interactive content node that contains this content in H5P format.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 26,
      ),
      'modal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_h5p_node',
    'is_property' => 1,
    'label' => 'H5P node',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 27,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('An interactive content node that contains this content in H5P format.');
  t('H5P node');

  return $field_instances;
}
