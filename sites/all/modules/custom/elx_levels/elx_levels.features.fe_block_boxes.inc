<?php
/**
 * @file
 * elx_levels.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function elx_levels_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Levels page introduction';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'levels_page_introduction';
  $fe_block_boxes->body = 'Each of these Levels was created for you—to make you better at what you do. You decide how to experience them and how you want to Level Up.';

  $export['levels_page_introduction'] = $fe_block_boxes;

  return $export;
}
