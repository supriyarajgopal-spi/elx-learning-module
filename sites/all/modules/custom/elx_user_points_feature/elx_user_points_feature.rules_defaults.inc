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
  return $items;
}
