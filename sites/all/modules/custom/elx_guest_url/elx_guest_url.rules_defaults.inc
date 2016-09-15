<?php
/**
 * @file
 * elx_guest_url.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function elx_guest_url_default_rules_configuration() {
  $items = array();
  $items['rules_show_message_after_registering_through_guest_url'] = entity_import('rules_config', '{ "rules_show_message_after_registering_through_guest_url" : {
      "LABEL" : "Actions after registering through guest URL",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules" ],
      "ON" : { "user_presave" : [] },
      "IF" : [
        { "NOT php_eval" : { "code" : "\\/\\/Returns true if all the mentioned parameters exist in the query string\\r\\n$params = array(\\u0027account\\u0027,\\u0027door\\u0027,\\u0027country\\u0027,\\u0027region\\u0027,\\u0027market\\u0027);\\r\\nreturn count(array_diff($params, array_keys(drupal_get_query_parameters())));" } }
      ],
      "DO" : [
        { "user_unblock" : { "account" : [ "account" ] } },
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "8" : "8" } } } },
        { "redirect" : { "url" : "user\\/login" } },
        { "drupal_message" : { "message" : "Thank you for completing the self-registration form as a Multi-Brand Sales Associate requesting access to ELX, the Est\\u00e9e Lauder Experience. The next step is to activate your account. A welcome email will be sent within the next 24\\u201348 hours to the email address you provided. If you do not receive the welcome email in your Inbox, please be sure to check your spam folder. To activate your account, please read the instructions in the email carefully before attempting to log into myelx.com." } }
      ]
    }
  }');
  return $items;
}
