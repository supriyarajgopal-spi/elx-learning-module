<?php
/**
 * @file
 * login_header_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function login_header_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Login Page Header';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'login_header';
  $fe_block_boxes->body = '<div class="logo"><img src="/sites/all/themes/elx_front/images/ELX-logo.svg"/></div><div class="logo-sub"><img src="/sites/all/themes/elx_front/images/estee-lauder-experience-logo-white.svg"/></div>';

  $export['login_header'] = $fe_block_boxes;

  return $export;
}
