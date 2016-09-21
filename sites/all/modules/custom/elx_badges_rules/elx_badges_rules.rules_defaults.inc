<?php
/**
 * @file
 * elx_badges_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function elx_badges_rules_default_rules_configuration() {
  $items = array();
  $items['rules_award_badges_when_user_earns_threshold_points'] = entity_import('rules_config', '{ "rules_award_badges_when_user_earns_threshold_points" : {
      "LABEL" : "Award Badges when user earns threshold points",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules_conditional", "flag", "rules", "userpoints_rules" ],
      "ON" : { "userpoints_event_points_awarded_after" : [] },
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : {
                  "data" : [ "userpoints-transaction:points" ],
                  "op" : "\\u003E",
                  "value" : "999"
                }
              },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT flag_flagged_user" : {
                          "flag" : "first_1_000_points_badge",
                          "user" : [ "userpoints-transaction:user" ],
                          "flagging_user" : [ "userpoints-transaction:user" ]
                        }
                      },
                      "DO" : [
                        { "flag_flaguser" : {
                            "flag" : "first_1_000_points_badge",
                            "user" : [ "userpoints-transaction:user" ],
                            "flagging_user" : [ "userpoints-transaction:user" ],
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
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : {
                  "data" : [ "userpoints-transaction:points" ],
                  "op" : "\\u003E",
                  "value" : "4999"
                }
              },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT flag_flagged_user" : {
                          "flag" : "first_5_000_points_badge",
                          "user" : [ "userpoints-transaction:user" ],
                          "flagging_user" : [ "userpoints-transaction:user" ]
                        }
                      },
                      "DO" : [
                        { "flag_flaguser" : {
                            "flag" : "first_5_000_points_badge",
                            "user" : [ "userpoints-transaction:user" ],
                            "flagging_user" : [ "userpoints-transaction:user" ],
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
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : {
                  "data" : [ "userpoints-transaction:points" ],
                  "op" : "\\u003E",
                  "value" : "9999"
                }
              },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT flag_flagged_user" : {
                          "flag" : "first_10000_points_badge",
                          "user" : [ "userpoints-transaction:user" ],
                          "flagging_user" : [ "userpoints-transaction:user" ]
                        }
                      },
                      "DO" : [
                        { "flag_flaguser" : {
                            "flag" : "first_10000_points_badge",
                            "user" : [ "userpoints-transaction:user" ],
                            "flagging_user" : [ "userpoints-transaction:user" ],
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
  $items['rules_badge_award_rules'] = entity_import('rules_config', '{ "rules_badge_award_rules" : {
      "LABEL" : "Badge Award Rules",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "flag" ],
      "ON" : { "flag_flagged_first_viewed_content" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "flagged-node" ],
            "type" : "node",
            "bundle" : { "value" : { "h5p_content" : "h5p_content" } }
          }
        }
      ],
      "DO" : [
        { "component_rules_load_counts_of_nodes_flagged_with_specific_learning_level_" : {
            "USING" : {
              "tid" : [ "flagged-node:field-learning-category:tid" ],
              "user" : [ "site:current-user" ]
            },
            "PROVIDE" : {
              "h5p_tagged_count_action" : { "h5p_tagged_count_action" : "Tagged H5P count" },
              "h5p_tagged_flagged_count_action" : { "h5p_tagged_flagged_count_action" : "Tagged and flagged H5P count" }
            }
          }
        },
        { "SWITCH" : {
            "USING" : { "data" : [ "flagged-node:field-learning-category" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "14097" },
                  "DO" : [
                    { "component_rules_flag_a_user_with_a_specific_flag" : {
                        "flag_to_set" : "gift_genius",
                        "tagged_node_count" : [ "h5p-tagged-count-action" ],
                        "tagged_flagged_node_count" : [ "h5p-tagged-flagged-count-action" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "14098" },
                  "DO" : [
                    { "component_rules_flag_a_user_with_a_specific_flag" : {
                        "flag_to_set" : "perfect_present",
                        "tagged_node_count" : [ "h5p-tagged-count-action" ],
                        "tagged_flagged_node_count" : [ "h5p-tagged-flagged-count-action" ]
                      }
                    }
                  ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_flag_a_user_with_a_specific_flag'] = entity_import('rules_config', '{ "rules_flag_a_user_with_a_specific_flag" : {
      "LABEL" : "Flag a user with a specific flag",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "flag", "rules" ],
      "USES VARIABLES" : {
        "flag_to_set" : { "label" : "User flag to set", "type" : "flag" },
        "tagged_node_count" : { "label" : "Tagged Node Count", "type" : "integer" },
        "tagged_flagged_node_count" : { "label" : "Tagged Node and Flagged Count", "type" : "integer" }
      },
      "IF" : [
        { "NOT flag_flagged_user" : {
            "flag" : [ "flag-to-set" ],
            "user" : [ "site:current-user" ],
            "flagging_user" : [ "site:current-user" ]
          }
        },
        { "component_rules_total_nodes_equal_to_flagged_nodes" : {
            "h5p_tagged_count_condition" : [ "tagged-node-count" ],
            "h5p_tagged_flagged_count_condition" : [ "tagged-flagged-node-count" ]
          }
        }
      ],
      "DO" : [
        { "flag_flaguser" : {
            "flag" : [ "flag-to-set" ],
            "user" : [ "site:current-user" ],
            "flagging_user" : [ "site:current-user" ],
            "permission_check" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_load_counts_of_nodes_flagged_with_specific_learning_level_'] = entity_import('rules_config', '{ "rules_load_counts_of_nodes_flagged_with_specific_learning_level_" : {
      "LABEL" : "Load counts of nodes flagged with specific learning level and as 1st viewed content",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "elx_badges_rules" ],
      "USES VARIABLES" : {
        "tid" : { "label" : "Learning Level", "type" : "integer" },
        "user" : { "label" : "First Viewed Content Flagging user", "type" : "user" },
        "h5p_tagged_count_action" : { "label" : "Tagged H5P count", "type" : "integer", "parameter" : false },
        "h5p_tagged_flagged_count_action" : {
          "label" : "Tagged and flagged H5P count",
          "type" : "integer",
          "parameter" : false
        }
      },
      "ACTION SET" : [
        { "_elx_badge_rules_get_h5p_tagged_count" : {
            "USING" : { "user" : [ "" ], "taxonomy" : [ "tid" ] },
            "PROVIDE" : { "h5p_tagged_count" : { "h5p_tagged_count" : "H5P tagged count" } }
          }
        },
        { "_elx_badge_rules_get_h5p_tagged_count" : {
            "USING" : { "user" : [ "user" ], "taxonomy" : [ "tid" ] },
            "PROVIDE" : { "h5p_tagged_count" : { "h5p_tagged_flagged_count" : "H5P tagged and flagged count" } }
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "h5p_tagged_count_action", "h5p_tagged_flagged_count_action" ]
    }
  }');
  $items['rules_total_nodes_equal_to_flagged_nodes'] = entity_import('rules_config', '{ "rules_total_nodes_equal_to_flagged_nodes" : {
      "LABEL" : "Total Nodes equal to Flagged Nodes",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "h5p_tagged_count_condition" : { "label" : "h5p_tagged_count", "type" : "integer" },
        "h5p_tagged_flagged_count_condition" : { "label" : "h5p_tagged_flagged_count", "type" : "integer" }
      },
      "AND" : [
        { "data_is" : {
            "data" : [ "h5p-tagged-count-condition" ],
            "op" : "\\u003E",
            "value" : "0"
          }
        },
        { "data_is" : {
            "data" : [ "h5p-tagged-count-condition" ],
            "value" : [ "h5p-tagged-flagged-count-condition" ]
          }
        }
      ]
    }
  }');
  return $items;
}
