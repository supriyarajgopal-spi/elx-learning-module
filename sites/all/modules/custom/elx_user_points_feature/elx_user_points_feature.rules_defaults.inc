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
  $items['rules_award_default_points_for_first_time_view'] = entity_import('rules_config', '{ "rules_award_default_points_for_first_time_view" : {
      "LABEL" : "Award default points for first time view",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "ELX" ],
      "REQUIRES" : [ "rules", "userpoints_rules" ],
      "USES VARIABLES" : { "node" : { "label" : "Node", "type" : "node" } },
      "IF" : [
        { "OR" : [
            { "node_is_of_type" : {
                "node" : [ "node" ],
                "type" : { "value" : { "product_detail" : "product_detail" } }
              }
            },
            { "AND" : [
                { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_content_object_type" } },
                { "data_is" : { "data" : [ "node:field-content-object-type:name" ], "value" : "Story" } }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "site:current-user" ],
            "points" : "25",
            "tid" : "0",
            "entity" : [ "node" ],
            "description" : "Viewed [node:title] for the first time",
            "operation" : "Insert",
            "reference" : [ "node:nid" ],
            "display" : "1",
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_award_points_when_user_logs_in_first_time'] = entity_import('rules_config', '{ "rules_award_points_when_user_logs_in_first_time" : {
    "LABEL" : "Award points when user logs in first time",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "REQUIRES" : [ "rules", "userpoints_rules", "flag" ],
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
      },
      { "flag_flaguser" : {
          "flag" : "welcome_badge",
          "user" : [ "account" ],
          "flagging_user" : [ "account" ],
          "permission_check" : "1"
        }
      }
    ]
   }
  }');
  $items['rules_award_points_when_user_passes_quiz_first_time'] = entity_import('rules_config', '{ "rules_award_points_when_user_passes_quiz_first_time" : {
    "LABEL" : "Award points when user passes quiz first time",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "REQUIRES" : [
      "rules",
      "elx_quiz_rule_trigger",
      "userpoints_rules",
      "elx_badges_rules",
      "rules_conditional",
      "flag"
    ],
    "ON" : { "user_passed_h5p_quiz" : [] },
    "IF" : [
      { "entity_is_of_bundle" : {
          "entity" : [ "quiz" ],
          "type" : "node",
          "bundle" : { "value" : { "h5p_content" : "h5p_content" } }
        }
      },
      { "NOT user_has_taken_quiz_before" : { "user" : [ "user" ], "quiz" : [ "quiz" ] } }
    ],
    "DO" : [
      { "userpoints_action_grant_points" : {
          "user" : [ "user" ],
          "points" : "400",
          "tid" : "14096",
          "entity" : [ "quiz" ],
          "description" : "For passing the quiz for the first time",
          "operation" : "Insert",
          "reference" : [ "quiz:nid" ],
          "display" : "1",
          "moderate" : "default"
        }
      },
      { "_elx_badge_rules_get_h5p_max_points" : {
          "USING" : { "node" : [ "quiz" ] },
          "PROVIDE" : { "loaded_h5p_max_points" : { "loaded_h5p_max_points" : "Maximum H5P points" } }
        }
      },
      { "_elx_badge_rules_get_h5p_user_points" : {
          "USING" : { "user" : [ "user" ], "node" : [ "quiz" ] },
          "PROVIDE" : { "loaded_h5p_user_points" : { "loaded_h5p_user_points" : "H5P user points" } }
        }
      },
      { "CONDITIONAL" : [
          {
            "IF" : { "NOT data_is" : { "data" : [ "loaded-h5p-max-points" ], "value" : "-1" } },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "NOT data_is" : { "data" : [ "loaded-h5p-user-points" ], "value" : "-1" } },
                    "DO" : [
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "data_is" : {
                                "data" : [ "loaded-h5p-user-points" ],
                                "value" : [ "loaded-h5p-max-points" ]
                              }
                            },
                            "DO" : [
                              { "flag_flaguser" : {
                                  "flag" : "one_hundred_percent_club_badge",
                                  "user" : [ "user" ],
                                  "flagging_user" : [ "user" ],
                                  "permission_check" : "1"
                                }
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            ]
          }
        ]
      }
    ]
   }
  }');
  $items['rules_set_flag_when_content_object_viewed_for_first_time'] = entity_import('rules_config', '{ "rules_set_flag_when_content_object_viewed_for_first_time" : {
      "LABEL" : "Set flag when content is viewed for first time",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "flag", "rules", "rules_conditional", "userpoints_rules" ],
      "ON" : { "node_view" : [] },
      "IF" : [
        { "NOT flag_flagged_node" : {
            "flag" : "first_viewed_content",
            "node" : [ "node" ],
            "flagging_user" : [ "site:current-user" ]
          }
        },
        { "OR" : [
            { "data_is" : { "data" : [ "view-mode" ], "value" : "full" } },
            { "data_is" : { "data" : [ "view-mode" ], "value" : "modal" } }
          ]
        }
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
              "IF" : { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_point_value" } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "data_is_empty" : { "data" : [ "node:field-point-value" ] } },
                      "DO" : [
                        { "component_rules_award_default_points_for_first_time_view" : { "node" : [ "node" ] } }
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
            },
            { "ELSE" : [
                { "component_rules_award_default_points_for_first_time_view" : { "node" : [ "node" ] } }
              ]
            }
          ]
        }
      ]
    }
  }');
  return $items;
}
