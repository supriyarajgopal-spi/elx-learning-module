<?php
/**
 * @file
 * elx_product_library.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function elx_product_library_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_detail|modal';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_detail';
  $ds_layout->view_mode = 'modal';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_display_title',
        1 => 'field_subtitle',
        2 => 'field_product_image',
        3 => 'field_why_there_s_only_one',
        4 => 'field_demonstration',
        5 => 'field_benefits',
        6 => 'field_if_she_asks_share',
        7 => 'field_perfect_partners',
        8 => 'field_perfect_partners_text',
        9 => 'group_partners',
        10 => 'field_story',
        11 => 'field_customer_questions',
        12 => 'field_fun_fact_sheet',
        13 => 'field_related_products',
        14 => 'field_just_for_you',
      ),
    ),
    'fields' => array(
      'field_display_title' => 'ds_content',
      'field_subtitle' => 'ds_content',
      'field_product_image' => 'ds_content',
      'field_why_there_s_only_one' => 'ds_content',
      'field_demonstration' => 'ds_content',
      'field_benefits' => 'ds_content',
      'field_if_she_asks_share' => 'ds_content',
      'field_perfect_partners' => 'ds_content',
      'field_perfect_partners_text' => 'ds_content',
      'group_partners' => 'ds_content',
      'field_story' => 'ds_content',
      'field_customer_questions' => 'ds_content',
      'field_fun_fact_sheet' => 'ds_content',
      'field_related_products' => 'ds_content',
      'field_just_for_you' => 'ds_content',
    ),
    'classes' => array(),
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
  $export['node|product_detail|modal'] = $ds_layout;

  return $export;
}
