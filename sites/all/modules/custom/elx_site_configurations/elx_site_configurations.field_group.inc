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
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-list-items field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_list_items|paragraphs_item|list_item|form'] = $field_group;

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
    'weight' => '10',
    'children' => array(
      0 => 'field_markets',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Markets',
      'instance_settings' => array(
        'required_fields' => 1,
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
    'weight' => '15',
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
    'weight' => '9',
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
    'weight' => '3',
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
      1 => 'field_question_image',
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
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Reveal group',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-reveal field-group-fieldset',
        'description' => '',
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
    'weight' => '2',
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
