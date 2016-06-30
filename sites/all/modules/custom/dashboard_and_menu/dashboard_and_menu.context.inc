<?php
/**
 * @file
 * dashboard_and_menu.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function dashboard_and_menu_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'menu';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'dashboard' => 'dashboard',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'elx_dashboard-elx_dashboard_nav' => array(
          'module' => 'elx_dashboard',
          'delta' => 'elx_dashboard_nav',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'elx_menu-elx_menu' => array(
          'module' => 'elx_menu',
          'delta' => 'elx_menu',
          'region' => 'navigation',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['menu'] = $context;

  return $export;
}
