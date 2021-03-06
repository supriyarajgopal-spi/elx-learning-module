<?php

/**
 * @file
 * Provides support for the Views module.
 * Created by SUPRIYA RAJGOPAL on 3Aug16 to expose Badge Details added in Flag to Views and to add classes to rewritten output field here instead of in 'Link class' in 'Rewrite Results'
 */

/**
 * Implements hook_views_data().
 */
function elx_badge_flags_views_data() {
  $data = array();
  
  $data['flag']['table']['group'] = t('Flag');
  $data['flag']['table']['base'] = array(
    'title' => t('Flag'),
    'help' => t('Contains records of Flag module to be exposed to Views.'),
  );
  
  //Expose Badge Description field to Views by exposing the entire 'options' serialized column in 'flag' table
  $data['flag']['options'] = array(
    'title' => t('Flag Options'),
    'help' => t('Displays Flag settings.'),
    'field' => array(
      'handler' => 'views_handler_field_serialized',
    ),
  );
  
  /* //Expose Badge Image field to Views by exposing the entire 'options' serialized column in 'flag' table
  $data['flag']['options'] = array(
    'title' => t('Flag Badge Image'),
    'help' => t('Displays Badge Image associated with a flag.'),
    'field' => array(
      'handler' => 'elx_badge_flags_handler_field_badge_image', //Custom field handler to display Badge Image
    ),
  ); */
  
  /*Inform Views that the 'fid' column of 'flagging' table is the foreign key of 'fid' in 'flag' table so that Flag Options field can be inserted in Badge Views*/
  $data['flag']['table']['join'] = array(
	'flagging' => array(
		'left_field' => 'fid',
		'field' => 'fid',
	),
  );

  return $data;
}

/**
 * Implements hook_views_handlers().
 */
/* function elx_badge_flags_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'elx_badge_flags').'/views',
    ),
    'handlers' => array(
      'elx_badge_flags_handler_field_badge_image' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );
} */

/**
 * Implements hook_views_pre_render().
 * Created by SUPRIYA RAJGOPAL on 17Aug16 to add classes here instead of in 'Link class' in 'Rewrite Results' to rewritten output field
 */
function elx_badge_flags_views_pre_render(&$view)
{
  switch($view->name)
  {
    case 'badges':
		//Add classes to each Views field separately..
		//$view->field['flagged']->options['alter']['link_class'] = t('use-ajax hello');
		
		//..or add the same classes to all Views fields at oncce
		foreach($view->field as $field)
			$field->options['alter']['link_class'] = 'use-ajax'; //Separate each class name with a space. 'use-ajax' is mandatory
		break;
  }
}