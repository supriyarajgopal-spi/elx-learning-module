<?php
/**
 * @file
 * elx_users_feature.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function elx_users_feature_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-status-find_replace';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Status';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Inactive',
    'replace' => '0',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace Inactive = 0';
  $export['elx_users-status-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'elx_users-status-find_replace_active';
  $feeds_tamper->importer = 'elx_users';
  $feeds_tamper->source = 'Status';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Active',
    'replace' => '1',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace Active = 1';
  $export['elx_users-status-find_replace_active'] = $feeds_tamper;

  return $export;
}
