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
      1 => 'field_answer_image',
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
  $field_group->identifier = 'group_bottom|paragraphs_item|match_game_collection|form';
  $field_group->group_name = 'group_bottom';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'match_game_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bottom',
    'weight' => '2',
    'children' => array(
      0 => 'field_bottom_match_text',
      1 => 'field_bottom_match_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bottom',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-bottom field-group-fieldset',
        'description' => 'Enter either text OR image.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_bottom|paragraphs_item|match_game_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_drag_match_left|paragraphs_item|drag_match|form';
  $field_group->group_name = 'group_drag_match_left';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'drag_match';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Drag match left',
    'weight' => '0',
    'children' => array(
      0 => 'field_left_drag_image',
      1 => 'field_left_drag_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-drag-match-left field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_drag_match_left|paragraphs_item|drag_match|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_drag_match_right|paragraphs_item|drag_match|form';
  $field_group->group_name = 'group_drag_match_right';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'drag_match';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Drag match right',
    'weight' => '1',
    'children' => array(
      0 => 'field_right_drag_image',
      1 => 'field_right_drag_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-drag-match-right field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_drag_match_right|paragraphs_item|drag_match|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_drag_select|paragraphs_item|drag_select|form';
  $field_group->group_name = 'group_drag_select';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'drag_select';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Drag select',
    'weight' => '0',
    'children' => array(
      0 => 'field_drag_select_image',
      1 => 'field_drag_select_text',
      2 => 'field_correct_answer',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Drag select',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-drag-select field-group-fieldset',
        'description' => 'Upload EITHER image OR enter answer text.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_drag_select|paragraphs_item|drag_select|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_first_last_questions|node|trivia|form';
  $field_group->group_name = 'group_first_last_questions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'trivia';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'First/last questions',
    'weight' => '8',
    'children' => array(
      0 => 'field_first_question_in_quiz',
      1 => 'field_intro',
      2 => 'field_last_question_in_quiz',
      3 => 'field_completion_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'First/last questions',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-first-last-questions field-group-fieldset',
        'description' => '<p>If this question is the first or last question in a quiz, check the appropriate box and enter the intro text or completion screen text.</p>',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_first_last_questions|node|trivia|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flash|paragraphs_item|flash_card_collection|form';
  $field_group->group_name = 'group_flash';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'flash_card_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Flash card',
    'weight' => '0',
    'children' => array(
      0 => 'field_back_card',
      1 => 'field_front_card',
      2 => 'field_front_card_image',
      3 => 'field_back_card_image',
      4 => 'field_front_card_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-flash field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_flash|paragraphs_item|flash_card_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hotspot|paragraphs_item|hot_spot|form';
  $field_group->group_name = 'group_hotspot';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'hot_spot';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hot spot group',
    'weight' => '0',
    'children' => array(
      0 => 'field_hot_spot_x_cordinate',
      1 => 'field_hot_spot_y_cordinate',
      2 => 'field_hot_spot_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Hot spot group',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-hotspot field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_hotspot|paragraphs_item|hot_spot|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hotspot|paragraphs_item|new_spot|form';
  $field_group->group_name = 'group_hotspot';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'new_spot';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hot Spot',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-hotspot field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_hotspot|paragraphs_item|new_spot|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_items|paragraphs_item|list_item|form';
  $field_group->group_name = 'group_list_items';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'list_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'List group',
    'weight' => '0',
    'children' => array(
      0 => 'field_list_image',
      1 => 'field_list_text',
      2 => 'field_list_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'List group',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-list-items field-group-fieldset',
        'description' => 'Upload EITHER a video OR an image.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_list_items|paragraphs_item|list_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_markets|node|badge|form';
  $field_group->group_name = 'group_markets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'badge';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Markets',
    'weight' => '3',
    'children' => array(
      0 => 'field_markets',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Markets',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-markets field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_markets|node|badge|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_markets|node|diary|form';
  $field_group->group_name = 'group_markets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'diary';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Markets',
    'weight' => '2',
    'children' => array(
      0 => 'field_markets',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Markets',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-markets field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_markets|node|diary|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_markets|node|disclaimer|form';
  $field_group->group_name = 'group_markets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'disclaimer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Markets',
    'weight' => '3',
    'children' => array(
      0 => 'field_markets',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Markets',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-markets field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_markets|node|disclaimer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_market|node|content_object|form';
  $field_group->group_name = 'group_market';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'content_object';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Markets',
    'weight' => '17',
    'children' => array(
      0 => 'field_markets',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Markets',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-market field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_market|node|content_object|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_middle|paragraphs_item|match_game_collection|form';
  $field_group->group_name = 'group_middle';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'match_game_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Middle',
    'weight' => '1',
    'children' => array(
      0 => 'field_middle_match_text',
      1 => 'field_middle_match_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Middle',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-middle field-group-fieldset',
        'description' => 'Enter either text OR image.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_middle|paragraphs_item|match_game_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_partners|node|product_detail|form';
  $field_group->group_name = 'group_partners';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Perfect partners',
    'weight' => '16',
    'children' => array(
      0 => 'field_perfect_partners',
      1 => 'field_perfect_partners_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-partners field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_partners|node|product_detail|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_priority|paragraphs_item|drag_priority|form';
  $field_group->group_name = 'group_priority';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'drag_priority';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Priority group',
    'weight' => '0',
    'children' => array(
      0 => 'field_priority_image',
      1 => 'field_priority_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-priority field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_priority|paragraphs_item|drag_priority|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_markets|node|product_detail|form';
  $field_group->group_name = 'group_product_markets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Markets',
    'weight' => '10',
    'children' => array(
      0 => 'field_markets',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Markets',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-product-markets field-group-fieldset',
        'description' => 'Select Markets to restrict where content is displayed, if all are unselected content will display to all Markets.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_product_markets|node|product_detail|form'] = $field_group;

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
    'weight' => '14',
    'children' => array(
      0 => 'field_question_video_file',
      1 => 'field_video_poster_img',
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
  $field_group->identifier = 'group_questions|node|question_and_answer|form';
  $field_group->group_name = 'group_questions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'question_and_answer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Last question',
    'weight' => '11',
    'children' => array(
      0 => 'field_completion_text',
      1 => 'field_last_question_in_quiz',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Last question',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-questions field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_questions|node|question_and_answer|form'] = $field_group;

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
      0 => 'field_question_image',
      1 => 'field_question_text',
      2 => 'field_question_label',
      3 => 'group_question_video',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reveal|paragraphs_item|reveal_collection|form';
  $field_group->group_name = 'group_reveal';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'reveal_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Reveal group',
    'weight' => '0',
    'children' => array(
      0 => 'field_reveal_thumbnail',
      1 => 'field_reveal_hero',
      2 => 'field_reveal_text',
      3 => 'field_reveal_hero_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Reveal group',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-reveal field-group-fieldset',
        'description' => 'Upload EITHER hero image OR hero video.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_reveal|paragraphs_item|reveal_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tools_markets|node|tools|form';
  $field_group->group_name = 'group_tools_markets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tools';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Markets',
    'weight' => '4',
    'children' => array(
      0 => 'field_markets',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Markets',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-tools-markets field-group-fieldset',
        'description' => 'Select Markets to restrict where content is displayed, if all are unselected content will display to all Markets.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_tools_markets|node|tools|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top|paragraphs_item|match_game_collection|form';
  $field_group->group_name = 'group_top';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'match_game_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top',
    'weight' => '0',
    'children' => array(
      0 => 'field_top_match_text',
      1 => 'field_top_match_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Top',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-top field-group-fieldset',
        'description' => 'Enter either text OR image.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_top|paragraphs_item|match_game_collection|form'] = $field_group;

  return $export;
}
