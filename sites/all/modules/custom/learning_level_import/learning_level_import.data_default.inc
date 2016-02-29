<?php
/**
 * @file
 * learning_level_import.data_default.inc
 */

/**
 * Implements hook_data_default().
 */
function learning_level_import_data_default() {
  $export = array();

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Learning Point Answers';
  $data_table->name = 'learning_point_answers';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'csvid' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
        'unsigned' => 1,
      ),
      'qa_group_question_answer' => array(
        'type' => 'text',
        'size' => 'normal',
      ),
    ),
    'name' => 'learning_point_answers',
    'indexes' => array(
      'csvid' => array(
        0 => 'csvid',
      ),
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'csvid' => array(
        'label' => 'csvid',
      ),
      'qa_group_question_answer' => array(
        'label' => 'qa_group_question_answer',
      ),
    ),
    'join' => array(
      'learning_point_csv' => array(
        'left_field' => 'csvid',
        'field' => 'csvid',
        'inner_join' => '1',
      ),
    ),
  );
  $export['learning_point_answers'] = $data_table;

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Learning point csv';
  $data_table->name = 'learning_point_csv';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'parent_item_administrative_title' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'content_type' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'language' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'administrative_title' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'subtitle' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'intro_html' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'create_next' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'create_submit' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'hero_image' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'learning_object_weight' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'content_object_point_value' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'content_object_tags_keywords' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'content_object_exam_pass_feedback_html' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'content_object_exam_pass_content_html' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'content_object_exam_perfect_content_html' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'content_object_markets' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'content_object_headline' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'content_object_custom_cta' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'reveal_group_thumbnail' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'reveal_group_hero_image' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'reveal_group_video' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'reveal_group_text_html' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'reveal_group_weight' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '3',
        'not null' => FALSE,
        'description' => '',
      ),
      'list_item_group_image' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'list_item_group_video' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'list_item_group_text_html' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'list_item_group_weight' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '3',
        'not null' => FALSE,
        'description' => '',
      ),
      'qa_question_type' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'qa_group_question_text' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'qa_group_question_image' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'qa_group_question_video' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'qa_group_question_answers_array' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'qa_is_required' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'qa_is_final' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'qa_completion_text' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'qa_question_weight' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'hot_spot_image' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'hot_spot_group_x_cordinate' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'hot_spot_group_y_cordinate' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'hot_spot_text_html' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'hot_spot_weight' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '2',
        'not null' => FALSE,
        'description' => '',
      ),
      'csvid' => array(
        'type' => 'serial',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'description' => '',
      ),
      'content_object_category' => array(
        'type' => 'varchar',
        'length' => 255,
      ),
      'content_object_learning_template' => array(
        'type' => 'varchar',
        'length' => 255,
      ),
    ),
    'name' => 'learning_point_csv',
    'indexes' => array(
      'csvid' => array(
        0 => 'csvid',
      ),
    ),
    'primary key' => array(
      0 => 'csvid',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'original_administrative_title' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => '',
      ),
      'parent_item_administrative_title' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'parent_item_administrative_title',
      ),
      'content_type' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'content_type',
      ),
      'language' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'language',
      ),
      'administrative_title' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'administrative_title',
      ),
      'subtitle' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'subtitle',
      ),
      'intro_html' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'intro_html',
      ),
      'create_next' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'create_next',
      ),
      'create_submit' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'create_submit',
      ),
      'hero_image' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'hero_image',
      ),
      'learning_object_weight' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'learning_object_weight',
      ),
      'content_object_point_value' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'content_object_point_value',
      ),
      'content_object_tags_keywords' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'content_object_tags_keywords',
      ),
      'content_object_exam_pass_feedback_html' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'content_object_exam_pass_feedback_html',
      ),
      'content_object_exam_pass_content_html' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'content_object_exam_pass_content_html',
      ),
      'content_object_exam_perfect_content_html' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'content_object_exam_perfect_content_html',
      ),
      'content_object_markets' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'content_object_markets',
      ),
      'content_object_headline' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'content_object_headline',
      ),
      'content_object_custom_cta' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'content_object_custom_cta',
      ),
      'reveal_group_thumbnail' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'reveal_group_thumbnail',
      ),
      'reveal_group_hero_image' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'reveal_group_hero_image',
      ),
      'reveal_group_video' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'reveal_group_video',
      ),
      'reveal_group_text_html' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'reveal_group_text_html',
      ),
      'reveal_group_weight' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'reveal_group_weight',
      ),
      'list_item_group_image' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'list_item_group_image',
      ),
      'list_item_group_video' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'list_item_group_video',
      ),
      'list_item_group_text_html' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'list_item_group_text_html',
      ),
      'list_item_group_weight' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'list_item_group_weight',
      ),
      'qa_question_type' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'qa_question_type',
      ),
      'qa_group_question_text' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'qa_group_question_text',
      ),
      'qa_group_question_image' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'qa_group_question_image',
      ),
      'qa_group_question_video' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'qa_group_question_video',
      ),
      'qa_group_question_answers_array' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'qa_group_question_answers_array',
      ),
      'qa_is_required' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'qa_is_required',
      ),
      'qa_is_final' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'qa_is_final',
      ),
      'qa_completion_text' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'qa_completion_text',
      ),
      'qa_question_weight' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'qa_question_weight',
      ),
      'hot_spot_image' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'hot_spot_image',
      ),
      'hot_spot_group_x_cordinate' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'hot_spot_group_x_cordinate',
      ),
      'hot_spot_group_y_cordinate' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'hot_spot_group_y_cordinate',
      ),
      'hot_spot_text_html' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'hot_spot_text_html',
      ),
      'hot_spot_weight' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'hot_spot_weight',
      ),
      'csvid' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'label' => 'csvid',
      ),
      'content_object_type' => array(
        'label' => '',
        'locked' => FALSE,
        'required' => FALSE,
      ),
      'content_object_category' => array(
        'label' => 'content_object_category',
        'locked' => FALSE,
        'required' => FALSE,
      ),
      'content_object_learning_template' => array(
        'label' => 'content_object_learning_template',
      ),
    ),
    'label_field' => '',
    'is_entity_type' => 1,
    'entity_id' => 'csvid',
  );
  $export['learning_point_csv'] = $data_table;

  return $export;
}
