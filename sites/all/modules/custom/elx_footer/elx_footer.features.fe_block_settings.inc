<?php
/**
 * @file
 * elx_footer.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function elx_footer_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-copyright_notice'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'copyright_notice',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'elx' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'elx',
        'weight' => 0,
      ),
      'elx_front' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'elx_front',
        'weight' => 0,
      ),
    ),
    'title' => 'Copyright Notice',
    'visibility' => 0,
  );

  return $export;
}
