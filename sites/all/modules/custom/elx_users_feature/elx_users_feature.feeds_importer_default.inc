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
        ),
        'update_existing' => '2',
        'status' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'name',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'mail',
            'target' => 'mail',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'First name',
            'target' => 'field_first_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Last name',
            'target' => 'field_last_name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'City',
            'target' => 'field_city',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Country',
            'target' => 'field_country',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Region',
            'target' => 'field_region_list',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Employer number',
            'target' => 'field_employer_number',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Job title',
            'target' => 'field_job_title',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Store/Counter name',
            'target' => 'field_store_counter_name',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Subordinates',
            'target' => 'field_subordinates',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Language',
            'target' => 'language',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'created',
            'target' => 'created',
            'unique' => FALSE,
          ),
        ),
        'defuse_mail' => 0,
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
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
