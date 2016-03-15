<?php
/**
 * @file
 * learning_level_import.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function learning_level_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'content_objects-blank_source_2-default_value';
  $feeds_tamper->importer = 'content_objects';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'Learning Content',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Set default value';
  $export['content_objects-blank_source_2-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'content_objects-blank_source_3-copy';
  $feeds_tamper->importer = 'content_objects';
  $feeds_tamper->source = 'Blank source 3';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'from',
    'source' => 'administrative_title',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Copy source value';
  $export['content_objects-blank_source_3-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'content_objects-blank_source_3-php';
  $feeds_tamper->importer = 'content_objects';
  $feeds_tamper->source = 'Blank source 3';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'if ($result = db_query("SELECT DISTINCT f.entity_id FROM feeds_item f INNER JOIN learning_point_csv c ON f.guid = c.administrative_title WHERE f.entity_type = \'node\' AND c.parent_item_administrative_title = :title", array(\':title\' => $field))) {
  return $result->fetchCol();
}',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Execute php code';
  $export['content_objects-blank_source_3-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'content_objects-blank_source_4-convert_boolean';
  $feeds_tamper->importer = 'content_objects';
  $feeds_tamper->source = 'Blank source 4';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => 'trivia',
    'false_value' => '',
    'match_case' => 0,
    'no_match' => 'false',
    'other_text' => '',
    'no_match_value' => FALSE,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Convert to boolean';
  $export['content_objects-blank_source_4-convert_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'content_objects-blank_source_4-copy';
  $feeds_tamper->importer = 'content_objects';
  $feeds_tamper->source = 'Blank source 4';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'from',
    'source' => 'content_object_learning_template',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Copy source value';
  $export['content_objects-blank_source_4-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'content_objects-content_object_markets-explode';
  $feeds_tamper->importer = 'content_objects';
  $feeds_tamper->source = 'content_object_markets';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Explode';
  $export['content_objects-content_object_markets-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'content_objects-content_object_tags_keywords-explode';
  $feeds_tamper->importer = 'content_objects';
  $feeds_tamper->source = 'content_object_tags_keywords';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['content_objects-content_object_tags_keywords-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-administrative_title-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'administrative_title';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '  ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-administrative_title-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-administrative_title-required';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'administrative_title';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Required field';
  $export['data_xls-administrative_title-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-administrative_title-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'administrative_title';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-administrative_title-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-administrative_title-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'administrative_title';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-administrative_title-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_category-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_category';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '  ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-content_object_category-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_category-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_category';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-content_object_category-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_category-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_category';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-content_object_category-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_custom_cta-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_custom_cta';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '  ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-content_object_custom_cta-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_custom_cta-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_custom_cta';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-content_object_custom_cta-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_custom_cta-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_custom_cta';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-content_object_custom_cta-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_exam_pass_content_html-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_exam_pass_content_html';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '  ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-content_object_exam_pass_content_html-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_exam_pass_content_html-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_exam_pass_content_html';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-content_object_exam_pass_content_html-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_exam_pass_feedback_html-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_exam_pass_feedback_html';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '  ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-content_object_exam_pass_feedback_html-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_exam_pass_feedback_html-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_exam_pass_feedback_html';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-content_object_exam_pass_feedback_html-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_exam_perfect_content_html-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_exam_perfect_content_html';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '  ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-content_object_exam_perfect_content_html-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_exam_perfect_content_html-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_exam_perfect_content_html';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-content_object_exam_perfect_content_html-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_headline-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_headline';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '  ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-content_object_headline-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_headline-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_headline';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-content_object_headline-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_headline-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_headline';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-content_object_headline-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_learning_template-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_learning_template';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-content_object_learning_template-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_learning_template-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_learning_template';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-content_object_learning_template-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_markets-array_filter';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_markets';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 12;
  $feeds_tamper->description = 'Filter empty items';
  $export['data_xls-content_object_markets-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_markets-convert_case';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_markets';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '0',
  );
  $feeds_tamper->weight = 9;
  $feeds_tamper->description = 'Convert case';
  $export['data_xls-content_object_markets-convert_case'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_markets-explode';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_markets';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 10;
  $feeds_tamper->description = 'Explode';
  $export['data_xls-content_object_markets-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_markets-implode';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_markets';
  $feeds_tamper->plugin_id = 'implode';
  $feeds_tamper->settings = array(
    'glue' => ',',
    'real_glue' => ',',
  );
  $feeds_tamper->weight = 14;
  $feeds_tamper->description = 'Implode';
  $export['data_xls-content_object_markets-implode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_markets-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_markets';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-content_object_markets-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_markets-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_markets';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 11;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-content_object_markets-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_markets-unique';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_markets';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 13;
  $feeds_tamper->description = 'Unique';
  $export['data_xls-content_object_markets-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_point_value-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_point_value';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-content_object_point_value-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_point_value-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_point_value';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-content_object_point_value-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_tags_keywords-array_filter';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_tags_keywords';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 10;
  $feeds_tamper->description = 'Filter empty items';
  $export['data_xls-content_object_tags_keywords-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_tags_keywords-explode';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_tags_keywords';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'Explode';
  $export['data_xls-content_object_tags_keywords-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_tags_keywords-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_tags_keywords';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '  ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 13;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-content_object_tags_keywords-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_tags_keywords-implode';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_tags_keywords';
  $feeds_tamper->plugin_id = 'implode';
  $feeds_tamper->settings = array(
    'glue' => ',',
    'real_glue' => ',',
  );
  $feeds_tamper->weight = 12;
  $feeds_tamper->description = 'Implode';
  $export['data_xls-content_object_tags_keywords-implode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_tags_keywords-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_tags_keywords';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-content_object_tags_keywords-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_tags_keywords-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_tags_keywords';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 9;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-content_object_tags_keywords-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_object_tags_keywords-unique';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_object_tags_keywords';
  $feeds_tamper->plugin_id = 'unique';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 11;
  $feeds_tamper->description = 'Unique';
  $export['data_xls-content_object_tags_keywords-unique'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_type-required';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_type';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'Required field';
  $export['data_xls-content_type-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_type-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_type';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-content_type-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-content_type-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'content_type';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-content_type-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-create_next-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'create_next';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-create_next-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-create_next-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'create_next';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-create_next-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-create_submit-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'create_submit';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-create_submit-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-create_submit-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'create_submit';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-create_submit-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-guid-hash';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'guid';
  $feeds_tamper->plugin_id = 'hash';
  $feeds_tamper->settings = array(
    'override' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Calculate hash';
  $export['data_xls-guid-hash'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-hero_image-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'hero_image';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'public://elx_bulk/assets/',
    'replace' => '',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^public\\:\\/\\/elx_bulk\\/assets\\/$/u',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-hero_image-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-hero_image-rewrite';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'hero_image';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://elx_bulk/assets/[hero_image]',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Rewrite';
  $export['data_xls-hero_image-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-hero_image-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'hero_image';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-hero_image-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-hot_spot_group_x_cordinate-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'hot_spot_group_x_cordinate';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-hot_spot_group_x_cordinate-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-hot_spot_group_x_cordinate-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'hot_spot_group_x_cordinate';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-hot_spot_group_x_cordinate-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-hot_spot_group_y_cordinate-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'hot_spot_group_y_cordinate';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-hot_spot_group_y_cordinate-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-hot_spot_group_y_cordinate-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'hot_spot_group_y_cordinate';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-hot_spot_group_y_cordinate-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-hot_spot_image-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'hot_spot_image';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'public://elx_bulk/assets/',
    'replace' => '',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^public\\:\\/\\/elx_bulk\\/assets\\/$/u',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-hot_spot_image-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-hot_spot_image-rewrite';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'hot_spot_image';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://elx_bulk/assets/[hot_spot_image]',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Rewrite';
  $export['data_xls-hot_spot_image-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-hot_spot_image-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'hot_spot_image';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-hot_spot_image-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-hot_spot_text_html-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'hot_spot_text_html';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '  ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-hot_spot_text_html-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-hot_spot_text_html-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'hot_spot_text_html';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-hot_spot_text_html-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-hot_spot_weight-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'hot_spot_weight';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-hot_spot_weight-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-hot_spot_weight-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'hot_spot_weight';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-hot_spot_weight-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-intro_html-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'intro_html';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '  ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-intro_html-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-intro_html-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'intro_html';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-intro_html-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-language-convert_case';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'language';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '1',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Convert case';
  $export['data_xls-language-convert_case'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-language-required';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'language';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'Required field';
  $export['data_xls-language-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-language-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'language';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-language-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-language-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'language';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-language-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-learning_object_weight-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'learning_object_weight';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-learning_object_weight-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-learning_object_weight-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'learning_object_weight';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-learning_object_weight-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-list_item_group_image-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'list_item_group_image';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'public://elx_bulk/assets/',
    'replace' => '',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^public\\:\\/\\/elx_bulk\\/assets\\/$/u',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-list_item_group_image-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-list_item_group_image-rewrite';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'list_item_group_image';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://elx_bulk/assets/[list_item_group_image]',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Rewrite';
  $export['data_xls-list_item_group_image-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-list_item_group_image-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'list_item_group_image';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-list_item_group_image-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-list_item_group_text_html-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'list_item_group_text_html';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '  ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-list_item_group_text_html-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-list_item_group_text_html-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'list_item_group_text_html';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-list_item_group_text_html-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-list_item_group_video-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'list_item_group_video';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'public://elx_bulk/assets/',
    'replace' => '',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^public\\:\\/\\/elx_bulk\\/assets\\/$/u',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-list_item_group_video-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-list_item_group_video-rewrite';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'list_item_group_video';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://elx_bulk/assets/[list_item_group_video]',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Rewrite';
  $export['data_xls-list_item_group_video-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-list_item_group_video-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'list_item_group_video';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-list_item_group_video-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-list_item_group_weight-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'list_item_group_weight';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-list_item_group_weight-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-list_item_group_weight-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'list_item_group_weight';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-list_item_group_weight-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-parent_item_administrative_title-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'parent_item_administrative_title';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '  ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-parent_item_administrative_title-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-parent_item_administrative_title-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'parent_item_administrative_title';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-parent_item_administrative_title-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-parent_item_administrative_title-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'parent_item_administrative_title';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-parent_item_administrative_title-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_completion_text-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_completion_text';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '  ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-qa_completion_text-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_completion_text-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_completion_text';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-qa_completion_text-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_completion_text-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_completion_text';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-qa_completion_text-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_answers_array-explode_left_square_bracket';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_answers_array';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '[',
    'limit' => '',
    'real_separator' => '[',
  );
  $feeds_tamper->weight = 21;
  $feeds_tamper->description = 'Explode [';
  $export['data_xls-qa_group_question_answers_array-explode_left_square_bracket'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_answers_array-explode_right_square_bracket';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_answers_array';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ']',
    'limit' => '',
    'real_separator' => ']',
  );
  $feeds_tamper->weight = 27;
  $feeds_tamper->description = 'Explode ]';
  $export['data_xls-qa_group_question_answers_array-explode_right_square_bracket'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_answers_array-explode_square_brackets';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_answers_array';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '][',
    'limit' => '',
    'real_separator' => '][',
  );
  $feeds_tamper->weight = 30;
  $feeds_tamper->description = 'Explode ][';
  $export['data_xls-qa_group_question_answers_array-explode_square_brackets'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_answers_array-explode_vertical_dash';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_answers_array';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 24;
  $feeds_tamper->description = 'Explode |';
  $export['data_xls-qa_group_question_answers_array-explode_vertical_dash'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_answers_array-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_answers_array';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '  ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 32;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-qa_group_question_answers_array-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_answers_array-implode_left_square_bracket';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_answers_array';
  $feeds_tamper->plugin_id = 'implode';
  $feeds_tamper->settings = array(
    'glue' => '[',
    'real_glue' => '[',
  );
  $feeds_tamper->weight = 23;
  $feeds_tamper->description = 'Implode [';
  $export['data_xls-qa_group_question_answers_array-implode_left_square_bracket'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_answers_array-implode_right_square_bracket';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_answers_array';
  $feeds_tamper->plugin_id = 'implode';
  $feeds_tamper->settings = array(
    'glue' => ']',
    'real_glue' => ']',
  );
  $feeds_tamper->weight = 29;
  $feeds_tamper->description = 'Implode ]';
  $export['data_xls-qa_group_question_answers_array-implode_right_square_bracket'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_answers_array-implode_square_brackets';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_answers_array';
  $feeds_tamper->plugin_id = 'implode';
  $feeds_tamper->settings = array(
    'glue' => ']%n[',
    'real_glue' => ']
[',
  );
  $feeds_tamper->weight = 31;
  $feeds_tamper->description = 'Implode ][';
  $export['data_xls-qa_group_question_answers_array-implode_square_brackets'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_answers_array-implode_vertical_dash';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_answers_array';
  $feeds_tamper->plugin_id = 'implode';
  $feeds_tamper->settings = array(
    'glue' => '%s|%s',
    'real_glue' => ' | ',
  );
  $feeds_tamper->weight = 26;
  $feeds_tamper->description = 'Implode |';
  $export['data_xls-qa_group_question_answers_array-implode_vertical_dash'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_answers_array-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_answers_array';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 20;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-qa_group_question_answers_array-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_answers_array-trim_left_square_bracket';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_answers_array';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 22;
  $feeds_tamper->description = 'Trim [';
  $export['data_xls-qa_group_question_answers_array-trim_left_square_bracket'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_answers_array-trim_right_square_bracket';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_answers_array';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 28;
  $feeds_tamper->description = 'Trim ]';
  $export['data_xls-qa_group_question_answers_array-trim_right_square_bracket'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_answers_array-trim_vertical_dash';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_answers_array';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 25;
  $feeds_tamper->description = 'Trim |';
  $export['data_xls-qa_group_question_answers_array-trim_vertical_dash'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_image-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_image';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'public://elx_bulk/assets/',
    'replace' => '',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^public\\:\\/\\/elx_bulk\\/assets\\/$/u',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-qa_group_question_image-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_image-rewrite';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_image';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://elx_bulk/assets/[qa_group_question_image]',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Rewrite';
  $export['data_xls-qa_group_question_image-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_image-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_image';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-qa_group_question_image-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_text-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_text';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '  ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-qa_group_question_text-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_text-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_text';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-qa_group_question_text-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_text-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_text';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-qa_group_question_text-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_video-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_video';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'public://elx_bulk/assets/',
    'replace' => '',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^public\\:\\/\\/elx_bulk\\/assets\\/$/u',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-qa_group_question_video-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_video-rewrite';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_video';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://elx_bulk/assets/[qa_group_question_video]',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Rewrite';
  $export['data_xls-qa_group_question_video-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_group_question_video-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_group_question_video';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-qa_group_question_video-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_is_final-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_is_final';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-qa_is_final-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_is_final-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_is_final';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-qa_is_final-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_is_required-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_is_required';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-qa_is_required-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_is_required-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_is_required';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-qa_is_required-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_question_type-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_question_type';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-qa_question_type-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_question_type-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_question_type';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-qa_question_type-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_question_weight-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_question_weight';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-qa_question_weight-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-qa_question_weight-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'qa_question_weight';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-qa_question_weight-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-reveal_group_hero_image-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'reveal_group_hero_image';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'public://elx_bulk/assets/',
    'replace' => '',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^public\\:\\/\\/elx_bulk\\/assets\\/$/u',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-reveal_group_hero_image-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-reveal_group_hero_image-rewrite';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'reveal_group_hero_image';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://elx_bulk/assets/[reveal_group_hero_image]',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Rewrite';
  $export['data_xls-reveal_group_hero_image-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-reveal_group_hero_image-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'reveal_group_hero_image';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-reveal_group_hero_image-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-reveal_group_text_html-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'reveal_group_text_html';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '  ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-reveal_group_text_html-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-reveal_group_text_html-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'reveal_group_text_html';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-reveal_group_text_html-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-reveal_group_thumbnail-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'reveal_group_thumbnail';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'public://elx_bulk/assets/',
    'replace' => '',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^public\\:\\/\\/elx_bulk\\/assets\\/$/u',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-reveal_group_thumbnail-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-reveal_group_thumbnail-rewrite';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'reveal_group_thumbnail';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://elx_bulk/assets/[reveal_group_thumbnail]',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Rewrite';
  $export['data_xls-reveal_group_thumbnail-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-reveal_group_thumbnail-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'reveal_group_thumbnail';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-reveal_group_thumbnail-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-reveal_group_video-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'reveal_group_video';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'public://elx_bulk/assets/',
    'replace' => '',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^public\\:\\/\\/elx_bulk\\/assets\\/$/u',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-reveal_group_video-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-reveal_group_video-rewrite';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'reveal_group_video';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://elx_bulk/assets/[reveal_group_video]',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Rewrite';
  $export['data_xls-reveal_group_video-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-reveal_group_video-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'reveal_group_video';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-reveal_group_video-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-reveal_group_weight-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'reveal_group_weight';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-reveal_group_weight-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-reveal_group_weight-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'reveal_group_weight';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-reveal_group_weight-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-subtitle-find_replace';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'subtitle';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '  ',
    'replace' => ' ',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['data_xls-subtitle-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-subtitle-strip_tags';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'subtitle';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['data_xls-subtitle-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'data_xls-subtitle-trim';
  $feeds_tamper->importer = 'data_xls';
  $feeds_tamper->source = 'subtitle';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Trim';
  $export['data_xls-subtitle-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'hot_spot_collection-hot_spot_group_x_cordinate-rewrite';
  $feeds_tamper->importer = 'hot_spot_collection';
  $feeds_tamper->source = 'hot_spot_group_x_cordinate';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'pos[hot_spot_group_x_cordinate]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['hot_spot_collection-hot_spot_group_x_cordinate-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'hot_spot_collection-hot_spot_group_y_cordinate-rewrite';
  $feeds_tamper->importer = 'hot_spot_collection';
  $feeds_tamper->source = 'hot_spot_group_y_cordinate';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'pos[hot_spot_group_y_cordinate]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['hot_spot_collection-hot_spot_group_y_cordinate-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'list_item_collection-blank_source_1-hash';
  $feeds_tamper->importer = 'list_item_collection';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'hash';
  $feeds_tamper->settings = array(
    'override' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Calculate hash';
  $export['list_item_collection-blank_source_1-hash'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'list_item_node-blank_source_1-default_value';
  $feeds_tamper->importer = 'list_item_node';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '1',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['list_item_node-blank_source_1-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qa_answers-blank_source_1-copy';
  $feeds_tamper->importer = 'qa_answers';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'from',
    'source' => 'qa_group_question_answer',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Copy source value';
  $export['qa_answers-blank_source_1-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qa_answers-blank_source_1-php';
  $feeds_tamper->importer = 'qa_answers';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'return $field[1];',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Execute php code';
  $export['qa_answers-blank_source_1-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qa_answers-blank_source_2-copy';
  $feeds_tamper->importer = 'qa_answers';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'from',
    'source' => 'qa_group_question_answer',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Copy source value';
  $export['qa_answers-blank_source_2-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qa_answers-blank_source_2-php';
  $feeds_tamper->importer = 'qa_answers';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'return $field[0];',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Execute php code';
  $export['qa_answers-blank_source_2-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qa_answers-blank_source_3-convert_boolean';
  $feeds_tamper->importer = 'qa_answers';
  $feeds_tamper->source = 'Blank source 3';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => 'correct',
    'false_value' => 'incorrect',
    'match_case' => 0,
    'no_match' => 'null',
    'other_text' => '',
    'no_match_value' => NULL,
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Convert to boolean';
  $export['qa_answers-blank_source_3-convert_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qa_answers-blank_source_3-copy';
  $feeds_tamper->importer = 'qa_answers';
  $feeds_tamper->source = 'Blank source 3';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'from',
    'source' => 'qa_group_question_answer',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Copy source value';
  $export['qa_answers-blank_source_3-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qa_answers-blank_source_3-php';
  $feeds_tamper->importer = 'qa_answers';
  $feeds_tamper->source = 'Blank source 3';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'return $field[2];',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Execute php code';
  $export['qa_answers-blank_source_3-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qa_answers-blank_source_4-hash';
  $feeds_tamper->importer = 'qa_answers';
  $feeds_tamper->source = 'Blank source 4';
  $feeds_tamper->plugin_id = 'hash';
  $feeds_tamper->settings = array(
    'override' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Calculate hash';
  $export['qa_answers-blank_source_4-hash'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qa_answers-blank_source_5-default_value';
  $feeds_tamper->importer = 'qa_answers';
  $feeds_tamper->source = 'Blank source 5';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'und',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['qa_answers-blank_source_5-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qa_answers-qa_group_question_answer-explode';
  $feeds_tamper->importer = 'qa_answers';
  $feeds_tamper->source = 'qa_group_question_answer';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '%s|%s',
    'limit' => '',
    'real_separator' => ' | ',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['qa_answers-qa_group_question_answer-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'qa_paragraphs-qa_group_question_answers_array-php';
  $feeds_tamper->importer = 'qa_paragraphs';
  $feeds_tamper->source = 'qa_group_question_answers_array';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'db_delete(\'learning_point_answers\')
  ->condition(\'csvid\', $item[\'csvid\'])
  ->execute();
foreach (explode("]\\n[", trim($field, \'[]\')) as $answer) {
  db_insert(\'learning_point_answers\')
    ->fields(array(
      \'csvid\' => $item[\'csvid\'],
      \'qa_group_question_answer\' => $answer,
    ))
    ->execute();
}',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Execute php code';
  $export['qa_paragraphs-qa_group_question_answers_array-php'] = $feeds_tamper;

  return $export;
}
