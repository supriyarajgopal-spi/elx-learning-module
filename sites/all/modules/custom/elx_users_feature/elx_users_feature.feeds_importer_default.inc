<?php
/**
 * @file
 * elx_users_feature.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function elx_users_feature_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'elx_users';
  $feeds_importer->config = array(
    'name' => 'ELX Users',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => 0,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
        ),
        'update_existing' => '2',
        'status' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'Email',
            'target' => 'mail',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Email',
            'target' => 'name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'First Name',
            'target' => 'field_first_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Last Name',
            'target' => 'field_last_name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Employee ID',
            'target' => 'field_employer_number',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Learner Group',
            'target' => 'roles_list',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Account Name',
            'target' => 'field_account_name',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Door',
            'target' => 'field_door',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'City',
            'target' => 'field_city',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'State',
            'target' => 'field_state',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Country',
            'target' => 'field_country',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Region Code',
            'target' => 'field_region_list',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Market Name',
            'target' => 'field_market_name',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Learner Group',
            'target' => 'roles_list',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Hire Date',
            'target' => 'field_hire_date:start',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Counter Manager',
            'target' => 'field_counter_manager',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Education Manager/Executive',
            'target' => 'field_education_manager_executiv',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Account/Field Executive',
            'target' => 'field_account_field_executive',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Field Sales Director/Regional Education Director',
            'target' => 'field_field_sales_director_regio',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'Regional Vice President',
            'target' => 'field_regional_vice_president',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'General Manager/Brand Manager',
            'target' => 'field_general_manager_brand_mana',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'Market Administrator',
            'target' => 'field_market_administrator',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'Status',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'Status',
            'target' => 'status',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'Language',
            'target' => 'language',
            'unique' => FALSE,
          ),
        ),
        'defuse_mail' => 0,
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
        'user_roles_create' => 0,
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => FALSE,
  );
  $export['elx_users'] = $feeds_importer;

  return $export;
}
