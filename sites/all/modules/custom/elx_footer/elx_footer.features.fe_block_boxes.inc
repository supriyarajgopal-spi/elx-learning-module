<?php
/**
 * @file
 * elx_footer.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function elx_footer_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'copyright notice';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'copyright_notice';
  $fe_block_boxes->body = '<p>&copy; Estée Lauder Inc. All worldwide rights reserved.</p>';

  $export['copyright_notice'] = $fe_block_boxes;

  return $export;
}
