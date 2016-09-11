<?php
/**
 * @file
 * elx_guest_url.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function elx_guest_url_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_invite_type().
 */
function elx_guest_url_default_invite_type() {
  $items = array();
  $items['guest_url'] = entity_import('invite_type', '{
    "type" : "guest_url",
    "label" : "Guest URL",
    "weight" : 0,
    "argument_keys" : [],
    "argument" : [],
    "invite_sending_controller" : { "invite_by_email" : "invite_by_email" },
    "description" : "Invite guests by sending the registration URL to their e-mails",
    "data" : { "invite_by_email" : { "use_default" : 1, "message_editable" : 0, "replace_tokens" : 1 } },
    "rdf_mapping" : []
  }');
  $items['invite_by_email'] = entity_import('invite_type', '{
    "type" : "invite_by_email",
    "label" : "Invite by e-mail",
    "weight" : 0,
    "argument_keys" : [],
    "argument" : [],
    "invite_sending_controller" : { "invite_by_email" : "invite_by_email" },
    "description" : "Invitation by e-mail.",
    "data" : { "invite_by_email" : {
        "use_default" : true,
        "message_editable" : false,
        "replace_tokens" : false
      }
    },
    "rdf_mapping" : []
  }');
  return $items;
}
