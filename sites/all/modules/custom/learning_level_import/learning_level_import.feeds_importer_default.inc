<?php
/**
 * @file
 * learning_level_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function learning_level_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'content_objects';
  $feeds_importer->config = array(
    'name' => 'Content Objects',
    'description' => 'LL import 11',
    'fetcher' => array(
      'plugin_key' => 'FeedsSQLFetcher',
      'config' => array(
        'databases' => array(
          0 => 'default',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSQLParser',
      'config' => array(
        'query' => 'SELECT DISTINCT c.administrative_title, c.language, c.content_object_markets, c.hero_image, c.content_object_headline, c.intro_html, c.content_object_point_value, c.content_object_custom_cta, c.content_object_exam_pass_content_html, c.content_object_exam_pass_feedback_html, c.content_object_exam_perfect_content_html, c.content_object_tags_keywords, c.learning_object_weight, c.content_object_category, c.content_object_learning_template, c.csvid FROM learning_point_csv c INNER JOIN learning_point_csv cc ON c.administrative_title = cc.parent_item_administrative_title INNER JOIN feeds_item f ON cc.administrative_title = f.guid WHERE c.content_type = \'Content_Object\'',
        'database' => 'default',
        'mapping' => array(
          'administrative_title' => 'administrative_title',
          'content_object_category' => 'content_object_category',
          'content_object_custom_cta' => 'content_object_custom_cta',
          'content_object_exam_pass_content_html' => 'content_object_exam_pass_content_html',
          'content_object_exam_pass_feedback_html' => 'content_object_exam_pass_feedback_html',
          'content_object_exam_perfect_content_html' => 'content_object_exam_perfect_content_html',
          'content_object_headline' => 'content_object_headline',
          'content_object_learning_template' => 'content_object_learning_template',
          'content_object_markets' => 'content_object_markets',
          'content_object_point_value' => 'content_object_point_value',
          'content_object_tags_keywords' => 'content_object_tags_keywords',
          'csvid' => 'csvid',
          'hero_image' => 'hero_image',
          'intro_html' => 'intro_html',
          'language' => 'language',
          'learning_object_weight' => 'learning_object_weight',
        ),
        'results' => '',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'content_object_custom_cta',
            'target' => 'field_custom_cta',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'content_object_exam_pass_content_html',
            'target' => 'field_exam_pass_content',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'content_object_exam_pass_feedback_html',
            'target' => 'field_exam_pass_feedback',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'content_object_exam_perfect_content_html',
            'target' => 'field_exam_perfect_content',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'content_object_headline',
            'target' => 'field_headline',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'content_object_markets',
            'target' => 'field_markets',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'content_object_point_value',
            'target' => 'field_point_value',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'content_object_tags_keywords',
            'target' => 'field_tags_keywords',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'language',
            'target' => 'language',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'intro_html',
            'target' => 'field_intro',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'hero_image',
            'target' => 'field_hero_image:uri',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'learning_object_weight',
            'target' => 'field_order_weight',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Blank source 2',
            'target' => 'field_content_object_type',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          13 => array(
            'source' => 'content_object_category',
            'target' => 'field_learning_category',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'administrative_title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'administrative_title',
            'target' => 'title_field',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'csvid',
            'target' => 'guid',
            'unique' => 1,
          ),
          17 => array(
            'source' => 'Blank source 3',
            'target' => 'field_learning_objects:etid',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'content_object_learning_template',
            'target' => 'field_learning_template',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'Blank source 4',
            'target' => 'field_final_exam',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'content_object',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['content_objects'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'data_xls';
  $feeds_importer->config = array(
    'name' => 'data xls',
    'description' => 'LL import 1',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml xlsx xls',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExcelParser',
      'config' => array(
        'all_worksheets' => 0,
        'max_rows' => 65535,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsEntityProcessorData_learning_point_csv',
      'config' => array(
        'mappings' => array(
          0 => array(
            'source' => 'parent_item_administrative_title',
            'target' => 'parent_item_administrative_title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'content_type',
            'target' => 'content_type',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'language',
            'target' => 'language',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'administrative_title',
            'target' => 'administrative_title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'subtitle',
            'target' => 'subtitle',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'intro_html',
            'target' => 'intro_html',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'create_next',
            'target' => 'create_next',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'create_submit',
            'target' => 'create_submit',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'hero_image',
            'target' => 'hero_image',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'learning_object_weight',
            'target' => 'learning_object_weight',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'content_object_category',
            'target' => 'content_object_category',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'content_object_point_value',
            'target' => 'content_object_point_value',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'content_object_tags_keywords',
            'target' => 'content_object_tags_keywords',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'content_object_exam_pass_feedback_html',
            'target' => 'content_object_exam_pass_feedback_html',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'content_object_exam_pass_content_html',
            'target' => 'content_object_exam_pass_content_html',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'content_object_exam_perfect_content_html',
            'target' => 'content_object_exam_perfect_content_html',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'content_object_markets',
            'target' => 'content_object_markets',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'content_object_headline',
            'target' => 'content_object_headline',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'content_object_custom_cta',
            'target' => 'content_object_custom_cta',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'content_object_learning_template',
            'target' => 'content_object_learning_template',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'reveal_group_thumbnail',
            'target' => 'reveal_group_thumbnail',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'reveal_group_hero_image',
            'target' => 'reveal_group_hero_image',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'reveal_group_video',
            'target' => 'reveal_group_video',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'reveal_group_text_html',
            'target' => 'reveal_group_text_html',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'reveal_group_weight',
            'target' => 'reveal_group_weight',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'list_item_group_image',
            'target' => 'list_item_group_image',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'list_item_group_video',
            'target' => 'list_item_group_video',
            'unique' => FALSE,
          ),
          27 => array(
            'source' => 'list_item_group_text_html',
            'target' => 'list_item_group_text_html',
            'unique' => FALSE,
          ),
          28 => array(
            'source' => 'list_item_group_weight',
            'target' => 'list_item_group_weight',
            'unique' => FALSE,
          ),
          29 => array(
            'source' => 'qa_question_type',
            'target' => 'qa_question_type',
            'unique' => FALSE,
          ),
          30 => array(
            'source' => 'qa_is_required',
            'target' => 'qa_is_required',
            'unique' => FALSE,
          ),
          31 => array(
            'source' => 'qa_is_final',
            'target' => 'qa_is_final',
            'unique' => FALSE,
          ),
          32 => array(
            'source' => 'qa_group_question_text',
            'target' => 'qa_group_question_text',
            'unique' => FALSE,
          ),
          33 => array(
            'source' => 'qa_completion_text',
            'target' => 'qa_completion_text',
            'unique' => FALSE,
          ),
          34 => array(
            'source' => 'qa_group_question_image',
            'target' => 'qa_group_question_image',
            'unique' => FALSE,
          ),
          35 => array(
            'source' => 'qa_group_question_video',
            'target' => 'qa_group_question_video',
            'unique' => FALSE,
          ),
          36 => array(
            'source' => 'qa_group_question_answers_array',
            'target' => 'qa_group_question_answers_array',
            'unique' => FALSE,
          ),
          37 => array(
            'source' => 'qa_question_weight',
            'target' => 'qa_question_weight',
            'unique' => FALSE,
          ),
          38 => array(
            'source' => 'hot_spot_image',
            'target' => 'hot_spot_image',
            'unique' => FALSE,
          ),
          39 => array(
            'source' => 'hot_spot_group_x_cordinate',
            'target' => 'hot_spot_group_x_cordinate',
            'unique' => FALSE,
          ),
          40 => array(
            'source' => 'hot_spot_group_y_cordinate',
            'target' => 'hot_spot_group_y_cordinate',
            'unique' => FALSE,
          ),
          41 => array(
            'source' => 'hot_spot_text_html',
            'target' => 'hot_spot_text_html',
            'unique' => FALSE,
          ),
          42 => array(
            'source' => 'hot_spot_weight',
            'target' => 'hot_spot_weight',
            'unique' => FALSE,
          ),
          43 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'data_learning_point_csv',
        'values' => array(
          'parent_item_administrative_title' => '',
          'content_type' => '',
          'language' => '',
          'administrative_title' => '',
          'subtitle' => '',
          'intro_html' => '',
          'create_next' => '',
          'create_submit' => '',
          'hero_image' => '',
          'learning_object_weight' => '',
          'content_object_point_value' => '',
          'content_object_tags_keywords' => '',
          'content_object_exam_pass_feedback_html' => '',
          'content_object_exam_pass_content_html' => '',
          'content_object_exam_perfect_content_html' => '',
          'content_object_markets' => '',
          'content_object_headline' => '',
          'content_object_custom_cta' => '',
          'reveal_group_thumbnail' => '',
          'reveal_group_hero_image' => '',
          'reveal_group_video' => '',
          'reveal_group_text_html' => '',
          'reveal_group_weight' => '',
          'list_item_group_image' => '',
          'list_item_group_video' => '',
          'list_item_group_text_html' => '',
          'list_item_group_weight' => '',
          'qa_question_type' => '',
          'qa_group_question_text' => '',
          'qa_group_question_image' => '',
          'qa_group_question_video' => '',
          'qa_group_question_answers_array' => '',
          'qa_is_required' => '',
          'qa_is_final' => '',
          'qa_completion_text' => '',
          'qa_question_weight' => '',
          'hot_spot_image' => '',
          'hot_spot_group_x_cordinate' => '',
          'hot_spot_group_y_cordinate' => '',
          'hot_spot_text_html' => '',
          'hot_spot_weight' => '',
          'csvid' => '',
          'content_object_category' => '',
        ),
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['data_xls'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'hot_spot';
  $feeds_importer->config = array(
    'name' => 'Hot Spot',
    'description' => 'LL import 2',
    'fetcher' => array(
      'plugin_key' => 'FeedsSQLFetcher',
      'config' => array(
        'databases' => array(
          'default' => 'default',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSQLParser',
      'config' => array(
        'query' => 'SELECT DISTINCT administrative_title, language, intro_html, hot_spot_image, create_next FROM learning_point_csv WHERE content_type = \'Hot_Spot\'',
        'database' => 'default',
        'mapping' => array(
          'administrative_title' => 'administrative_title',
          'create_next' => 'create_next',
          'hot_spot_image' => 'hot_spot_image',
          'intro_html' => 'intro_html',
          'language' => 'language',
        ),
        'results' => '',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsEntityProcessorNode',
      'config' => array(
        'mappings' => array(
          0 => array(
            'source' => 'administrative_title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'administrative_title',
            'target' => 'title_field',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'intro_html',
            'target' => 'field_intro',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'language',
            'target' => 'language',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'create_next',
            'target' => 'field_next_button',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'hot_spot_image',
            'target' => 'field_hot_spot_image:uri',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'administrative_title',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'hot_spots',
        'values' => array(
          'language' => 'und',
          'status' => '1',
          'promote' => 0,
          'sticky' => 0,
          'author' => 0,
          'log' => '',
          'revision' => 0,
          'comment' => '',
        ),
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['hot_spot'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'hot_spot_collection';
  $feeds_importer->config = array(
    'name' => 'Hot Spot Collection',
    'description' => 'LL import 3',
    'fetcher' => array(
      'plugin_key' => 'FeedsSQLFetcher',
      'config' => array(
        'databases' => array(
          0 => 'default',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSQLParser',
      'config' => array(
        'query' => 'SELECT DISTINCT c.administrative_title, c.language, c.hot_spot_text_html, c.hot_spot_group_x_cordinate, c.hot_spot_group_y_cordinate, c.csvid FROM learning_point_csv c INNER JOIN feeds_item f ON c.administrative_title = f.guid WHERE f.id = \'hot_spot\'',
        'database' => 'default',
        'mapping' => array(
          'administrative_title' => 'administrative_title',
          'csvid' => 'csvid',
          'hot_spot_group_x_cordinate' => 'hot_spot_group_x_cordinate',
          'hot_spot_group_y_cordinate' => 'hot_spot_group_y_cordinate',
          'hot_spot_text_html' => 'hot_spot_text_html',
          'language' => 'language',
        ),
        'results' => '',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsFieldCollectionProcessor',
      'config' => array(
        'field_name' => 'field_hot_spot_collection',
        'host_entity_type' => 'node',
        'host_entity_bundle' => 'hot_spots',
        'is_field' => 1,
        'guid_field_name' => 'title_field',
        'identifier_field_name' => 'field_hot_spot_collection',
        'mappings' => array(
          0 => array(
            'source' => 'hot_spot_group_x_cordinate',
            'target' => 'field_hot_spot_x_cordinate',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'hot_spot_group_y_cordinate',
            'target' => 'field_hot_spot_y_cordinate',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'hot_spot_text_html',
            'target' => 'field_hot_spot_text',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'csvid',
            'target' => 'guid',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'language',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'administrative_title',
            'target' => 'host_entity_guid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'hot_spot',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['hot_spot_collection'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'list_item_collection';
  $feeds_importer->config = array(
    'name' => 'List Item Collection',
    'description' => 'LL import 5',
    'fetcher' => array(
      'plugin_key' => 'FeedsSQLFetcher',
      'config' => array(
        'databases' => array(
          0 => 'default',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSQLParser',
      'config' => array(
        'query' => 'SELECT DISTINCT c.administrative_title, c.language, c.list_item_group_image, c.list_item_group_video, c.list_item_group_text_html, c.csvid FROM learning_point_csv c INNER JOIN feeds_item f ON c.administrative_title = f.guid WHERE f.id = \'list_item_node\'',
        'database' => 'default',
        'mapping' => array(
          'administrative_title' => 'administrative_title',
          'csvid' => 'csvid',
          'language' => 'language',
          'list_item_group_image' => 'list_item_group_image',
          'list_item_group_text_html' => 'list_item_group_text_html',
          'list_item_group_video' => 'list_item_group_video',
        ),
        'results' => '',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsFieldCollectionProcessor',
      'config' => array(
        'field_name' => 'field_list_item',
        'host_entity_type' => 'node',
        'host_entity_bundle' => 'list',
        'is_field' => 1,
        'guid_field_name' => 'title_field',
        'identifier_field_name' => 'field_list_item',
        'mappings' => array(
          0 => array(
            'source' => 'list_item_group_image',
            'target' => 'field_list_image:uri',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'list_item_group_video',
            'target' => 'field_list_video:uri',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'list_item_group_text_html',
            'target' => 'field_list_text',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'csvid',
            'target' => 'guid',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'language',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'administrative_title',
            'target' => 'host_entity_guid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'list_item',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['list_item_collection'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'list_item_node';
  $feeds_importer->config = array(
    'name' => 'List Item Node',
    'description' => 'LL import 4',
    'fetcher' => array(
      'plugin_key' => 'FeedsSQLFetcher',
      'config' => array(
        'databases' => array(
          0 => 'default',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSQLParser',
      'config' => array(
        'query' => 'SELECT DISTINCT administrative_title, language, subtitle, intro_html, create_next FROM learning_point_csv WHERE content_type = \'List_Item\'',
        'database' => 'default',
        'mapping' => array(
          'administrative_title' => 'administrative_title',
          'create_next' => 'create_next',
          'intro_html' => 'intro_html',
          'language' => 'language',
          'subtitle' => 'subtitle',
        ),
        'results' => '',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsEntityProcessorNode',
      'config' => array(
        'mappings' => array(
          0 => array(
            'source' => 'administrative_title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'administrative_title',
            'target' => 'title_field',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'subtitle',
            'target' => 'field_subtitle',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'language',
            'target' => 'language',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'create_next',
            'target' => 'field_next_button',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'intro_html',
            'target' => 'field_intro',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Blank source 1',
            'target' => 'field_layout',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'administrative_title',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'list',
        'values' => array(
          'language' => 'und',
          'status' => '1',
          'promote' => 0,
          'sticky' => 0,
          'author' => 0,
          'log' => '',
          'revision' => 0,
          'comment' => '',
        ),
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['list_item_node'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'qa_answers';
  $feeds_importer->config = array(
    'name' => 'QA Answers',
    'description' => 'LL import 8',
    'fetcher' => array(
      'plugin_key' => 'FeedsSQLFetcher',
      'config' => array(
        'databases' => array(
          0 => 'default',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSQLParser',
      'config' => array(
        'query' => 'SELECT DISTINCT f.entity_id, a.qa_group_question_answer FROM learning_point_answers a INNER JOIN feeds_item f ON a.csvid = f.guid WHERE f.id = \'qa_paragraphs\'',
        'database' => 'default',
        'mapping' => array(
          'entity_id' => 'entity_id',
          'qa_group_question_answer' => 'qa_group_question_answer',
        ),
        'results' => '',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsFieldCollectionProcessor',
      'config' => array(
        'field_name' => 'field_paragraph_answer',
        'host_entity_type' => 'paragraphs_item',
        'host_entity_bundle' => 'multiple_choice_collection',
        'is_field' => 0,
        'guid_field_name' => 'item_id',
        'identifier_field_name' => 'field_paragraph_answer',
        'mappings' => array(
          0 => array(
            'source' => 'qa_group_question_answer',
            'target' => 'Temporary target 2',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'entity_id',
            'target' => 'host_entity_id',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Blank source 1',
            'target' => 'field_answer_feedback',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Blank source 2',
            'target' => 'field_answer_text',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Blank source 3',
            'target' => 'field_correct_answer',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Blank source 4',
            'target' => 'guid',
            'unique' => 1,
          ),
          6 => array(
            'source' => 'Blank source 5',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'entity_id',
            'target' => 'host_entity_guid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'answers',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['qa_answers'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'qa_node';
  $feeds_importer->config = array(
    'name' => 'QA Node',
    'description' => 'LL import 6',
    'fetcher' => array(
      'plugin_key' => 'FeedsSQLFetcher',
      'config' => array(
        'databases' => array(
          'default' => 'default',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSQLParser',
      'config' => array(
        'query' => 'SELECT DISTINCT administrative_title, language, subtitle, intro_html, qa_question_type, qa_is_final, qa_is_required, qa_completion_text, create_next, create_submit FROM learning_point_csv WHERE content_type = \'Question_Answer\'',
        'database' => 'default',
        'mapping' => array(
          'administrative_title' => 'administrative_title',
          'create_next' => 'create_next',
          'create_submit' => 'create_submit',
          'intro_html' => 'intro_html',
          'language' => 'language',
          'qa_completion_text' => 'qa_completion_text',
          'qa_is_final' => 'qa_is_final',
          'qa_is_required' => 'qa_is_required',
          'qa_question_type' => 'qa_question_type',
          'subtitle' => 'subtitle',
        ),
        'results' => '',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsEntityProcessorNode',
      'config' => array(
        'mappings' => array(
          0 => array(
            'source' => 'administrative_title',
            'target' => 'title_field',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'administrative_title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'language',
            'target' => 'language',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'qa_completion_text',
            'target' => 'field_completion_text',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'create_next',
            'target' => 'field_next_button',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'create_submit',
            'target' => 'field_create_submit_button',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'intro_html',
            'target' => 'field_intro',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'qa_is_required',
            'target' => 'field_is_required',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'qa_is_final',
            'target' => 'field_last_question_in_quiz',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'qa_question_type',
            'target' => 'field_question_type',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'subtitle',
            'target' => 'field_subtitle',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'language',
            'target' => 'language',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'administrative_title',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'question_and_answer',
        'values' => array(
          'language' => 'en',
          'status' => '1',
          'promote' => 0,
          'sticky' => 0,
          'author' => 0,
          'log' => '',
          'revision' => 0,
          'comment' => '',
        ),
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['qa_node'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'qa_paragraphs';
  $feeds_importer->config = array(
    'name' => 'QA Paragraphs',
    'description' => 'LL import 7',
    'fetcher' => array(
      'plugin_key' => 'FeedsSQLFetcher',
      'config' => array(
        'databases' => array(
          0 => 'default',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSQLParser',
      'config' => array(
        'query' => 'SELECT DISTINCT c.administrative_title, c.language, c.qa_group_question_image, c.qa_group_question_video, c.qa_group_question_text, c.qa_group_question_answers_array, c.csvid FROM learning_point_csv c INNER JOIN feeds_item f ON c.administrative_title = f.guid WHERE f.id = \'qa_node\'',
        'database' => 'default',
        'mapping' => array(
          'administrative_title' => 'administrative_title',
          'csvid' => 'csvid',
          'language' => 'language',
          'qa_group_question_answers_array' => 'qa_group_question_answers_array',
          'qa_group_question_image' => 'qa_group_question_image',
          'qa_group_question_text' => 'qa_group_question_text',
          'qa_group_question_video' => 'qa_group_question_video',
        ),
        'results' => '',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsFieldCollectionProcessor',
      'config' => array(
        'field_name' => 'field_paragraph_multiple_choice',
        'host_entity_type' => 'node',
        'host_entity_bundle' => 'question_and_answer',
        'is_field' => 1,
        'guid_field_name' => 'title_field',
        'identifier_field_name' => 'field_paragraph_multiple_choice',
        'mappings' => array(
          0 => array(
            'source' => 'qa_group_question_image',
            'target' => 'field_question_image:uri',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'qa_group_question_video',
            'target' => 'field_question_video_file:uri',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'qa_group_question_text',
            'target' => 'field_question_text',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'qa_group_question_answers_array',
            'target' => 'Temporary target 2',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'csvid',
            'target' => 'guid',
            'unique' => 1,
          ),
          5 => array(
            'source' => 'language',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'administrative_title',
            'target' => 'host_entity_guid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'multiple_choice_collection',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['qa_paragraphs'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'reveal_collection';
  $feeds_importer->config = array(
    'name' => 'Reveal Collection',
    'description' => 'LL import 10',
    'fetcher' => array(
      'plugin_key' => 'FeedsSQLFetcher',
      'config' => array(
        'databases' => array(
          0 => 'default',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSQLParser',
      'config' => array(
        'query' => 'SELECT DISTINCT c.administrative_title, c.language, c.reveal_group_thumbnail, c.reveal_group_hero_image, c.reveal_group_video, c.reveal_group_text_html, c.csvid FROM learning_point_csv c INNER JOIN feeds_item f ON c.administrative_title = f.guid WHERE f.id = \'reveal_node\'',
        'database' => 'default',
        'mapping' => array(
          'administrative_title' => 'administrative_title',
          'csvid' => 'csvid',
          'language' => 'language',
          'reveal_group_hero_image' => 'reveal_group_hero_image',
          'reveal_group_text_html' => 'reveal_group_text_html',
          'reveal_group_thumbnail' => 'reveal_group_thumbnail',
          'reveal_group_video' => 'reveal_group_video',
        ),
        'results' => '',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsFieldCollectionProcessor',
      'config' => array(
        'field_name' => 'field_reveal_collection',
        'host_entity_type' => 'node',
        'host_entity_bundle' => 'reveal',
        'is_field' => 1,
        'guid_field_name' => 'title_field',
        'identifier_field_name' => 'field_reveal_collection',
        'mappings' => array(
          0 => array(
            'source' => 'reveal_group_thumbnail',
            'target' => 'field_reveal_thumbnail:uri',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'reveal_group_hero_image',
            'target' => 'field_reveal_hero:uri',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'reveal_group_video',
            'target' => 'field_reveal_hero_video:uri',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'reveal_group_text_html',
            'target' => 'field_reveal_text',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'csvid',
            'target' => 'guid',
            'unique' => 1,
          ),
          5 => array(
            'source' => 'language',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'administrative_title',
            'target' => 'host_entity_guid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'reveal_collection',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['reveal_collection'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'reveal_node';
  $feeds_importer->config = array(
    'name' => 'Reveal Node',
    'description' => 'LL import 9',
    'fetcher' => array(
      'plugin_key' => 'FeedsSQLFetcher',
      'config' => array(
        'databases' => array(
          0 => 'default',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSQLParser',
      'config' => array(
        'query' => 'SELECT DISTINCT administrative_title, subtitle, language, create_next, intro_html FROM learning_point_csv WHERE content_type = \'Click_Reveal\'',
        'database' => 'default',
        'mapping' => array(
          'administrative_title' => 'administrative_title',
          'create_next' => 'create_next',
          'intro_html' => 'intro_html',
          'language' => 'language',
          'subtitle' => 'subtitle',
        ),
        'results' => '',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsEntityProcessorNode',
      'config' => array(
        'mappings' => array(
          0 => array(
            'source' => 'administrative_title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'administrative_title',
            'target' => 'title_field',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'subtitle',
            'target' => 'field_subtitle',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'language',
            'target' => 'language',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'create_next',
            'target' => 'field_next_button',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'intro_html',
            'target' => 'field_intro',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'administrative_title',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'reveal',
        'values' => array(
          'language' => 'und',
          'status' => '1',
          'promote' => 0,
          'sticky' => 0,
          'author' => 0,
          'log' => '',
          'revision' => 0,
          'comment' => '',
        ),
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['reveal_node'] = $feeds_importer;

  return $export;
}
