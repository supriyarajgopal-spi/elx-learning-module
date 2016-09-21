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
      "REQUIRES" : [ "rules", "php", "flag" ],
      "ON" : {
        "flag_flagged_beautiful_start" : [],
        "flag_flagged_one_hundred_percent_club_badge" : [],
        "flag_flagged_three_minute_beauty_badge" : [],
        "flag_flagged_beauty_queen_badge" : [],
        "flag_flagged_early_bird_badge" : [],
        "flag_flagged_fast_learner_badge" : [],
        "flag_flagged_first_1_000_points_badge" : [],
        "flag_flagged_first_10000_points_badge" : [],
        "flag_flagged_sleeping_beauty_badge" : [],
        "flag_flagged_well_read_75_badge" : [],
        "flag_flagged_perfect_10_badge" : [],
        "flag_flagged_on_your_way_badge" : [],
        "flag_flagged_service_star_badge" : [],
        "flag_flagged_we_heart_you_badge" : [],
        "flag_flagged_product_pro_badge" : [],
        "flag_flagged_welcome_badge" : [],
        "flag_flagged_well_read_50_badge" : [],
        "flag_flagged_first_5_000_points_badge" : [],
        "flag_flagged_high_five_badge" : [],
        "flag_flagged_little_brown_bottle_badge" : [],
        "flag_flagged_new_dimension_badge" : [],
        "flag_flagged_rare_beauty_badge" : [],
        "flag_flagged_we_heard_you_badge" : [],
        "flag_flagged_well_read_25_badge" : [],
        "flag_flagged_well_read_100_badge" : [],
        "flag_flagged_gift_genius" : [],
        "flag_flagged_perfect_present" : []
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
            "data" : [ "message-created:arguments:badge-name" ],
            "value" : "[flag:title]"
          }
        },
        { "data_set" : {
            "data" : [ "message-created:arguments:badge-awarded-by" ],
            "value" : " \\u003C?php\\r\\n\\/**\\r\\n * Show \\u0027The \\u003Cbadge\\u003E has been awarded by \\u003Cflagging user\\u003E\\u0027 only if flagging user is not the same as flagged user\\r\\n * The flagging and flagged users will be same for system generated badges\\r\\n *\\/\\r\\n$awardedBy = \\u0027\\u0027;\\r\\nif($flagged_user-\\u003Euid != $flagging_user-\\u003Euid)\\r\\n{\\r\\n  $field_firstname = !empty($flagging_user-\\u003Efield_first_name)?$flagging_user-\\u003Efield_first_name[LANGUAGE_NONE][0][\\u0027value\\u0027] : \\u0027\\u0027;\\r\\n  $field_lastname = !empty($flagging_user-\\u003Efield_last_name)?$flagging_user-\\u003Efield_last_name[LANGUAGE_NONE][0][\\u0027value\\u0027] : \\u0027\\u0027;\\r\\n  $awardedBy = \\u0027 by \\u0027 . $field_firstname . \\u0027 \\u0027 . $field_lastname;\\r\\n}\\r\\necho t(\\u0022@awardedBy\\u0022,array(\\u0027@awardedBy\\u0027 =\\u003E $awardedBy));\\r\\n?\\u003E"
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