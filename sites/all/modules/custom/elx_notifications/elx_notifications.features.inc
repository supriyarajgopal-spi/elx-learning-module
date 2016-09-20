<?php
/**
 * @file
 * elx_notifications.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function elx_notifications_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function elx_notifications_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function elx_notifications_flag_default_flags() {
  $flags = array();
  // Exported flag: "Message Seen / Unseen".
  $flags['message_seen_unseen'] = array(
    'entity_type' => 'message',
    'title' => 'Message Seen / Unseen',
    'global' => 1,
    'types' => array(
      0 => 'badge_award_notifications',
    ),
    'flag_short' => 'Seen',
    'flag_long' => '',
    'flag_message' => 'Seen',
    'unflag_short' => 'seen',
    'unflag_long' => '',
    'unflag_message' => 'new',
    'unflag_denied_text' => 'seen',
    'link_type' => 'toggle',
    'weight' => 0,
    'badge_description' => '',
    'badge_unearned_description' => '',
    'badge_image' => NULL,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'elx_notifications',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_default_message_type().
 */
function elx_notifications_default_message_type() {
  $items = array();
  $items['badge_award_notifications'] = entity_import('message_type', '{
    "name" : "badge_award_notifications",
    "description" : "Badge Award Notifications",
    "argument_keys" : [ "!badge_name", "!badge_awarded_by" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : {
      "en" : [
        {
          "value" : "\\u003Cp\\u003EThe !badge_name\\u0026nbsp;badge has been awarded to you!badge_awarded_by.\\u003C\\/p\\u003E",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003EThe !badge_name\\u00a0badge has been awarded to you!badge_awarded_by.\\u003C\\/p\\u003E\\n"
        }
      ],
      "und" : [
        {
          "value" : "Congratulations! You have been awarded a badge.",
          "format" : "filtered_html"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
