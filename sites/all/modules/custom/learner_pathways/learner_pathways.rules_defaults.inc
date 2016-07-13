<?php
/**
 * @file
 * learner_pathways.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function learner_pathways_default_rules_configuration() {
  $items = array();
  $items['rules_beautiful_start'] = entity_import('rules_config', '{ "rules_beautiful_start" : {
      "LABEL" : "Beautiful Start",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "apply_for_role_rules", "flag" ],
      "ON" : { "flag_flagged_beautiful_start" : [] },
      "DO" : [
        { "user_approve_role" : {
            "account" : [ "flagged-user" ],
            "roles" : { "value" : { "4" : "4", "9" : "9", "8" : "8" } }
          }
        }
      ]
    }
  }');
  return $items;
}
