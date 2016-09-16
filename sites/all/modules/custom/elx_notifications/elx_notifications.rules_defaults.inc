<?php
/**
 * @file
 * elx_notifications.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function elx_notifications_default_rules_configuration() {
  $items = array();
  $items['rules_badge_award_notification'] = entity_import('rules_config', '{ "rules_badge_award_notification" : {
      "LABEL" : "Badge Award Notification",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : {
        "flag_flagged_beautiful_start" : [],
        "flag_flagged_one_hundred_percent_club_badge" : [],
        "flag_flagged_three_minute_beauty_badge" : [],
        "flag_flagged_beauty_queen_badge" : [],
        "flag_flagged_early_bird_badge" : [],
        "flag_flagged_fast_learner_badge" : [],
        "flag_flagged_first_1_000_points_badge" : [],
        "flag_flagged_first_10000_points_badge" : [],
        "flag_unflagged_first_5_000_points_badge" : [],
        "flag_unflagged_high_five_badge" : [],
        "flag_unflagged_little_brown_bottle_badge" : [],
        "flag_unflagged_new_dimension_badge" : [],
        "flag_flagged_sleeping_beauty_badge" : [],
        "flag_flagged_well_read_75_badge" : []
      },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "badge_award_notifications",
              "param_user" : [ "flagged-user" ]
            },
            "PROVIDE" : { "entity_created" : { "message_created" : "Created message" } }
          }
        },
        { "data_set" : {
            "data" : [ "message-created:arguments:badge-description" ],
            "value" : "[flag:badge_description]"
          }
        }
      ]
    }
  }');
  $items['rules_set_flag_when_message_viewed'] = entity_import('rules_config', '{ "rules_set_flag_when_message_viewed" : {
      "LABEL" : "Set flag when message viewed",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flag", "message" ],
      "ON" : { "message_view" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "message:user:uid" ], "value" : [ "site:current-user:uid" ] } }
      ],
      "DO" : [
        { "flag_flagmessage" : {
            "flag" : "message_seen_unseen",
            "message" : [ "message" ],
            "flagging_user" : [ "message:user" ],
            "permission_check" : "1"
          }
        }
      ]
    }
  }');
  return $items;
}
