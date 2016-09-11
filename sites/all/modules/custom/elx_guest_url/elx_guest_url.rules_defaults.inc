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
      "LABEL" : "Show message after registering through guest URL",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "8" : "8" } } } },
        { "redirect" : { "url" : "user\\/login" } },
        { "drupal_message" : { "message" : "Thank you for completing the self-registration form as a Multi-Brand Sales Associate requesting access to ELX, the Est\\u00e9e Lauder Experience. The next step is to activate your account. A welcome email will be sent within the next 24\\u201348 hours to the email address you provided. If you do not receive the welcome email in your Inbox, please be sure to check your spam folder. To activate your account, please read the instructions in the email carefully before attempting to log into myelx.com." } }
      ]
    }
  }');
  return $items;
}
