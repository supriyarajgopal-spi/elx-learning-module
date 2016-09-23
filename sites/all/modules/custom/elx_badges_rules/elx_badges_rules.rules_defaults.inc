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
                  "USING" : { "value" : "14134" },
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
                  "USING" : { "value" : "14133" },
                  "DO" : [
                    { "component_rules_flag_a_user_with_a_specific_flag" : {
                        "flag_to_set" : "perfect_present",
                        "tagged_node_count" : [ "h5p-tagged-count-action" ],
                        "tagged_flagged_node_count" : [ "h5p-tagged-flagged-count-action" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "252" },
                  "DO" : [
                    { "component_rules_flag_a_user_with_a_specific_flag" : {
                        "flag_to_set" : "little_brown_bottle_badge",
                        "tagged_node_count" : [ "h5p-tagged-count-action" ],
                        "tagged_flagged_node_count" : [ "h5p-tagged-flagged-count-action" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "250" },
                  "DO" : [
                    { "component_rules_flag_a_user_with_a_specific_flag" : {
                        "flag_to_set" : "rare_beauty_badge",
                        "tagged_node_count" : [ "h5p-tagged-count-action" ],
                        "tagged_flagged_node_count" : [ "h5p-tagged-flagged-count-action" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "579" },
                  "DO" : [
                    { "component_rules_flag_a_user_with_a_specific_flag" : {
                        "flag_to_set" : "service_star_badge",
                        "tagged_node_count" : [ "h5p-tagged-count-action" ],
                        "tagged_flagged_node_count" : [ "h5p-tagged-flagged-count-action" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "1299" },
                  "DO" : [
                    { "component_rules_flag_a_user_with_a_specific_flag" : {
                        "flag_to_set" : "sleeping_beauty_badge",
                        "tagged_node_count" : [ "h5p-tagged-count-action" ],
                        "tagged_flagged_node_count" : [ "h5p-tagged-flagged-count-action" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "1301" },
                  "DO" : [
                    { "component_rules_flag_a_user_with_a_specific_flag" : {
                        "flag_to_set" : "new_dimension_badge",
                        "tagged_node_count" : [ "h5p-tagged-count-action" ],
                        "tagged_flagged_node_count" : [ "h5p-tagged-flagged-count-action" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "1300" },
                  "DO" : [
                    { "component_rules_flag_a_user_with_a_specific_flag" : {
                        "flag_to_set" : "beauty_queen_badge",
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
  $items['rules_completed_levels_badges'] = entity_import('rules_config', '{ "rules_completed_levels_badges" : {
      "LABEL" : "Completed Levels Badges",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "elx_badges_rules", "rules_conditional", "flag" ],
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
        { "_elx_get_completed_levels_count" : {
            "USING" : { "user" : [ "site:current-user" ], "taxonomy" : "0" },
            "PROVIDE" : { "completed_level_count" : { "completed_level_count" : "Completed level count" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "completed-level-count" ], "op" : "\\u003E", "value" : "0" } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT flag_flagged_user" : {
                          "flag" : "on_your_way_badge",
                          "user" : [ "site:current-user" ],
                          "flagging_user" : [ "site:current-user" ]
                        }
                      },
                      "DO" : [
                        { "flag_flaguser" : {
                            "flag" : "on_your_way_badge",
                            "user" : [ "site:current-user" ],
                            "flagging_user" : [ "site:current-user" ],
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
              "IF" : { "data_is" : { "data" : [ "completed-level-count" ], "op" : "\\u003E", "value" : "4" } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT flag_flagged_user" : {
                          "flag" : "high_five_badge",
                          "user" : [ "site:current-user" ],
                          "flagging_user" : [ "site:current-user" ]
                        }
                      },
                      "DO" : [
                        { "flag_flaguser" : {
                            "flag" : "high_five_badge",
                            "user" : [ "site:current-user" ],
                            "flagging_user" : [ "site:current-user" ],
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
              "IF" : { "data_is" : { "data" : [ "completed-level-count" ], "op" : "\\u003E", "value" : "9" } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT flag_flagged_user" : {
                          "flag" : "perfect_10_badge",
                          "user" : [ "site:current-user" ],
                          "flagging_user" : [ "site:current-user" ]
                        }
                      },
                      "DO" : [
                        { "flag_flaguser" : {
                            "flag" : "perfect_10_badge",
                            "user" : [ "site:current-user" ],
                            "flagging_user" : [ "site:current-user" ],
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
              "IF" : { "data_is" : { "data" : [ "completed-level-count" ], "op" : "\\u003E", "value" : "2" } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT flag_flagged_user" : {
                          "flag" : "fast_learner_badge",
                          "user" : [ "site:current-user" ],
                          "flagging_user" : [ "site:current-user" ]
                        }
                      },
                      "DO" : [
                        { "data_calc" : {
                            "USING" : {
                              "input_1" : [ "site:current-user:last-access" ],
                              "op" : "-",
                              "input_2" : 2592000
                            },
                            "PROVIDE" : { "result" : { "result" : "Calculation result" } }
                          }
                        },
                        { "CONDITIONAL" : [
                            {
                              "IF" : { "data_is" : {
                                  "data" : [ "result" ],
                                  "op" : "\\u003C",
                                  "value" : [ "site:current-user:created" ]
                                }
                              },
                              "DO" : [
                                { "flag_flaguser" : {
                                    "flag" : "fast_learner_badge",
                                    "user" : [ "site:current-user" ],
                                    "flagging_user" : [ "site:current-user" ],
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
  $items['rules_flag_a_user_with_a_specific_flag'] = entity_import('rules_config', '{ "rules_flag_a_user_with_a_specific_flag" : {
      "LABEL" : "Flag a user with a specific flag if node count equal to flag count",
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
  $items['rules_well_read_badges'] = entity_import('rules_config', '{ "rules_well_read_badges" : {
      "LABEL" : "Well Read Badges",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flag", "elx_badges_rules", "rules_conditional" ],
      "ON" : { "flag_flagged_first_viewed_content" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "flagged-node" ],
            "type" : "node",
            "bundle" : { "value" : {
                "h5p_content" : "h5p_content",
                "product_detail" : "product_detail",
                "story" : "story"
              }
            }
          }
        }
      ],
      "DO" : [
        { "flag_fetch_node_by_user" : {
            "USING" : {
              "flag" : "first_viewed_content",
              "flagging_user" : [ "site:current-user" ]
            },
            "PROVIDE" : { "content_flagged_by_user" : { "content_flagged_by_user" : "Content flagged by user" } }
          }
        },
        { "_elx_get_list_count" : {
            "USING" : { "list" : [ "content-flagged-by-user" ] },
            "PROVIDE" : { "list_length" : { "firstviewed_flag_count" : "List length" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "firstviewed-flag-count" ], "op" : "\\u003E", "value" : "24" } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT flag_flagged_user" : {
                          "flag" : "well_read_25_badge",
                          "user" : [ "site:current-user" ],
                          "flagging_user" : [ "site:current-user" ]
                        }
                      },
                      "DO" : [
                        { "flag_flaguser" : {
                            "flag" : "well_read_25_badge",
                            "user" : [ "site:current-user" ],
                            "flagging_user" : [ "site:current-user" ],
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
              "IF" : { "data_is" : { "data" : [ "firstviewed-flag-count" ], "op" : "\\u003E", "value" : "49" } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT flag_flagged_user" : {
                          "flag" : "well_read_50_badge",
                          "user" : [ "site:current-user" ],
                          "flagging_user" : [ "site:current-user" ]
                        }
                      },
                      "DO" : [
                        { "flag_flaguser" : {
                            "flag" : "well_read_50_badge",
                            "user" : [ "site:current-user" ],
                            "flagging_user" : [ "site:current-user" ],
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
              "IF" : { "data_is" : { "data" : [ "firstviewed-flag-count" ], "op" : "\\u003E", "value" : "74" } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT flag_flagged_user" : {
                          "flag" : "well_read_75_badge",
                          "user" : [ "site:current-user" ],
                          "flagging_user" : [ "site:current-user" ]
                        }
                      },
                      "DO" : [
                        { "flag_flaguser" : {
                            "flag" : "well_read_75_badge",
                            "user" : [ "site:current-user" ],
                            "flagging_user" : [ "site:current-user" ],
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
              "IF" : { "data_is" : { "data" : [ "firstviewed-flag-count" ], "op" : "\\u003E", "value" : "99" } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "NOT flag_flagged_user" : {
                          "flag" : "well_read_100_badge",
                          "user" : [ "site:current-user" ],
                          "flagging_user" : [ "site:current-user" ]
                        }
                      },
                      "DO" : [
                        { "flag_flaguser" : {
                            "flag" : "well_read_100_badge",
                            "user" : [ "site:current-user" ],
                            "flagging_user" : [ "site:current-user" ],
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
  return $items;
}
