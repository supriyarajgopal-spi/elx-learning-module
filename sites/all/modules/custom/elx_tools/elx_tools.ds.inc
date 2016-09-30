<?php
/**
 * @file
 * elx_tools.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function elx_tools_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|tools|modal';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'tools';
  $ds_layout->view_mode = 'modal';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_display_title',
        1 => 'field_tool_description',
        2 => 'field_tool_pdf',
      ),
    ),
    'fields' => array(
      'field_display_title' => 'ds_content',
      'field_tool_description' => 'ds_content',
      'field_tool_pdf' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|tools|modal'] = $ds_layout;

  return $export;
}
