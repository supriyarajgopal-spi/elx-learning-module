<?php
/**
 * @file
 * elx_interactive_content_feature.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function elx_interactive_content_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|h5p_content|modal';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'h5p_content';
  $ds_layout->view_mode = 'modal';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_learning_category',
        1 => 'field_headline',
        2 => 'field_intro',
        3 => 'field_spin_the_wheel',
        4 => 'h5p',
      ),
    ),
    'fields' => array(
      'field_learning_category' => 'ds_content',
      'field_headline' => 'ds_content',
      'field_intro' => 'ds_content',
      'field_spin_the_wheel' => 'ds_content',
      'h5p' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|h5p_content|modal'] = $ds_layout;

  return $export;
}
