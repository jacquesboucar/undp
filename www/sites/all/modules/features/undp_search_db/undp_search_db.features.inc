<?php
/**
 * @file
 * undp_search_db.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function undp_search_db_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function undp_search_db_default_search_api_index() {
  $items = array();
  $items['undp_expert_index'] = entity_import('search_api_index', '{
    "name" : "undp expert index",
    "machine_name" : "undp_expert_index",
    "description" : null,
    "server" : "mysql",
    "item_type" : "user",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "field_user_email" : { "type" : "text" },
        "field_user_expertise" : { "type" : "string" },
        "field_user_name" : { "type" : "text" },
        "field_user_profile_type" : { "type" : "string" },
        "mail" : { "type" : "text" },
        "name" : { "type" : "text" },
        "roles" : { "type" : "list\\u003Cinteger\\u003E" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "uid" : { "type" : "integer" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
