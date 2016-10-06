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
        'delete_uploaded_file' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
        'encoding' => 'UTF-8',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          3 => 0,
          4 => 0,
          9 => 0,
          8 => 0,
          5 => 0,
          7 => 0,
          6 => 0,
        ),
        'update_existing' => '2',
        'status' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'Status',
            'target' => 'status',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Email',
            'target' => 'mail',
            'unique' => 1,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Email',
            'target' => 'name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'First Name',
            'target' => 'field_first_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Last Name',
            'target' => 'field_last_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Employee ID',
            'target' => 'field_employer_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Learner Group',
            'target' => 'apply_for_role',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Active Learner Groups',
            'target' => 'roles_list',
            'role_search' => 'name',
            'allowed_roles' => array(
              4 => '4',
              9 => '9',
              8 => '8',
              5 => '5',
              7 => '7',
              6 => '6',
              3 => 0,
            ),
            'autocreate' => 0,
            'revoke_roles' => 1,
          ),
          8 => array(
            'source' => 'Account Name',
            'target' => 'field_account_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Door',
            'target' => 'field_door',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'City',
            'target' => 'field_city',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'State',
            'target' => 'field_state',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'Country',
            'target' => 'field_country',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'Region Code',
            'target' => 'field_region_list',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'Market Name',
            'target' => 'og_user_node:label',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'Language',
            'target' => 'language',
            'unique' => FALSE,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'Hire Date',
            'target' => 'field_hire_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          17 => array(
            'source' => 'Counter Manager',
            'target' => 'field_counter_manager',
            'unique' => FALSE,
            'language' => 'und',
          ),
          18 => array(
            'source' => 'Education Manager/Executive',
            'target' => 'field_education_manager_executiv',
            'unique' => FALSE,
            'language' => 'und',
          ),
          19 => array(
            'source' => 'Sales/Sales Education Executive',
            'target' => 'field_account_field_executive',
            'unique' => FALSE,
            'language' => 'und',
          ),
          20 => array(
            'source' => 'Regional Sales/Sales Education Manager',
            'target' => 'field_field_sales_director_regio',
            'unique' => FALSE,
            'language' => 'und',
          ),
          21 => array(
            'source' => 'Regional Vice President',
            'target' => 'field_regional_vice_president',
            'unique' => FALSE,
            'language' => 'und',
          ),
          22 => array(
            'source' => 'General Manager/Brand Manager',
            'target' => 'field_general_manager_brand_mana',
            'unique' => FALSE,
            'language' => 'und',
          ),
          23 => array(
            'source' => 'Market Administrator',
            'target' => 'field_market_administrator',
            'unique' => FALSE,
            'language' => 'und',
          ),
          24 => array(
            'source' => 'Employment Status',
            'target' => 'field_employment_status',
            'unique' => FALSE,
            'language' => 'und',
          ),
          25 => array(
            'source' => 'Last access',
            'target' => 'field_last_access_date',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'defuse_mail' => 0,
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
        'update_non_existent' => 'skip',
        'insert_new' => '1',
        'language' => 'und',
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
