<?php

/**
 * @file
 * Provides support for the Views module.
 * Created by SUPRIYA RAJGOPAL on 3Aug16 to expose Badge Details added in Flag to Views
 */

/**
 * Implements hook_views_data().
 */
function elx_utility_views_data() {
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
      'handler' => 'views_handler_field_serialized', //Custom field handler to display Badge Description
    ),
  );
  
  /*Inform Views that the 'fid' column of 'flagging' table is the foreign key of 'fid' in 'flag' table so that Flag Options field can be inserted in Badge Views*/
  $data['flag']['table']['join'] = array(
	'flagging' => array(
		'left_field' => 'fid',
		'field' => 'fid',
	),
  );

  return $data;
}