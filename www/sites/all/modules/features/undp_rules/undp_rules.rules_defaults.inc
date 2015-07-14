<?php
/**
 * @file
 * undp_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function undp_rules_default_rules_configuration() {
  $items = array();
  $items['rules_post_notification'] = entity_import('rules_config', '{ "rules_post_notification" : {
      "LABEL" : "post notification",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "message_notify" ],
      "ON" : { "node_insert--post" : { "bundle" : "post" } },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "post_comment",
              "param_user" : [ "node:author" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "message_notify_process" : { "message" : [ "entity-created" ] } }
      ]
    }
  }');
  return $items;
}
