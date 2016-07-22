<?php
/**
 * @file
 * elx_user_points_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function elx_user_points_feature_default_rules_configuration() {
  $items = array();
  $items['rules_award_points_when_user_logs_in_first_time'] = entity_import('rules_config', '{ "rules_award_points_when_user_logs_in_first_time" : {
      "LABEL" : "Award points when user logs in first time",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "userpoints_rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [ { "data_is_empty" : { "data" : [ "account:last-access" ] } } ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "account" ],
            "points" : "500",
            "tid" : "14095",
            "entity" : [ "account" ],
            "description" : "First time a user logged in",
            "operation" : "Insert",
            "reference" : [ "account:uid" ],
            "display" : "1",
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_content_object_story'] = entity_import('rules_config', '{ "rules_content_object_story" : {
      "LABEL" : "Content Object tagged as Story",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "content_object" : "content_object" } }
          }
        },
        { "data_is" : { "data" : [ "node:field-content-object-type" ], "value" : "249" } }
      ]
    }
  }');
  $items['rules_content_product_detail_or_content_object'] = entity_import('rules_config', '{ "rules_content_product_detail_or_content_object" : {
      "LABEL" : "Content is product detail or content object",
      "PLUGIN" : "or",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "OR" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "product_detail" : "product_detail" } }
          }
        },
        { "OR" : [] },
        { "component_rules_content_object_story" : { "node" : [ "node" ] } }
      ]
    }
  }');
  $items['rules_set_flag_when_content_object_viewed_for_first_time'] = entity_import('rules_config', '{ "rules_set_flag_when_content_object_viewed_for_first_time" : {
      "LABEL" : "Set flag when Content Object viewed for first time",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flag", "rules_conditional", "userpoints_rules" ],
      "ON" : { "node_view" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "view-mode" ], "value" : "full" } },
        { "NOT flag_flagged_node" : {
            "flag" : "first_viewed_content",
            "node" : [ "node" ],
            "flagging_user" : [ "site:current-user" ]
          }
        },
        { "component_rules_content_product_detail_or_content_object" : { "node" : [ "node" ] } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_point_value" } }
      ],
      "DO" : [
        { "flag_flagnode" : {
            "flag" : "first_viewed_content",
            "node" : [ "node" ],
            "flagging_user" : [ "site:current-user" ],
            "permission_check" : "1"
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is_empty" : { "data" : [ "node:field-point-value" ] } },
              "DO" : [
                { "userpoints_action_grant_points" : {
                    "user" : [ "site:current-user" ],
                    "points" : "25",
                    "tid" : "14094",
                    "entity" : [ "node" ],
                    "description" : "For viewing a content object for the first time",
                    "operation" : "Insert",
                    "reference" : [ "node:nid" ],
                    "display" : "1",
                    "moderate" : "default"
                  }
                }
              ]
            },
            { "ELSE" : [
                { "data_convert" : {
                    "USING" : { "type" : "integer", "value" : [ "node:field-point-value" ] },
                    "PROVIDE" : { "conversion_result" : { "int_point_value" : "Integer Point Value" } }
                  }
                },
                { "userpoints_action_grant_points" : {
                    "user" : [ "site:current-user" ],
                    "points" : [ "int-point-value" ],
                    "tid" : "14094",
                    "entity" : [ "node" ],
                    "description" : "For viewing a content object for the first time",
                    "operation" : "Insert",
                    "reference" : [ "node:nid" ],
                    "display" : "1",
                    "moderate" : "default"
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  return $items;
}
