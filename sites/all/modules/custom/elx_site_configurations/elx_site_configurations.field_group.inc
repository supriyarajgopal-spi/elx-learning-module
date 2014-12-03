<?php
/**
 * @file
 * elx_site_configurations.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function elx_site_configurations_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_answer|paragraphs_item|answers|form';
  $field_group->group_name = 'group_answer';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'answers';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Answer',
    'weight' => '0',
    'children' => array(
      0 => 'field_answer_text',
      1 => 'field_answer_media',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Answer',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-answer field-group-fieldset',
        'description' => 'Enter answer text OR upload image.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_answer|paragraphs_item|answers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_question_video|paragraphs_item|multiple_choice_collection|form';
  $field_group->group_name = 'group_question_video';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'multiple_choice_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_question';
  $field_group->data = array(
    'label' => 'Question video',
    'weight' => '3',
    'children' => array(
      0 => 'field_question_video',
      1 => 'field_video_poster_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Question video',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-question-video field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_question_video|paragraphs_item|multiple_choice_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_question_video|paragraphs_item|questions|form';
  $field_group->group_name = 'group_question_video';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'questions';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_question';
  $field_group->data = array(
    'label' => 'Question video',
    'weight' => '3',
    'children' => array(
      0 => 'field_question_video',
      1 => 'field_video_poster_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Question video',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-question-video field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_question_video|paragraphs_item|questions|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_question|paragraphs_item|multiple_choice_collection|form';
  $field_group->group_name = 'group_question';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'multiple_choice_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Question',
    'weight' => '0',
    'children' => array(
      0 => 'field_question_text',
      1 => 'field_question_media',
      2 => 'group_question_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Question',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-question field-group-fieldset',
        'description' => 'Enter question text, image, or video.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_question|paragraphs_item|multiple_choice_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_question|paragraphs_item|questions|form';
  $field_group->group_name = 'group_question';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'questions';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Question',
    'weight' => '0',
    'children' => array(
      0 => 'field_question_text',
      1 => 'field_question_media',
      2 => 'group_question_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Question',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-question field-group-fieldset',
        'description' => 'Enter question text, image, or video.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_question|paragraphs_item|questions|form'] = $field_group;

  return $export;
}
