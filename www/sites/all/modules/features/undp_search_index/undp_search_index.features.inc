<?php
/**
 * @file
 * undp_search_index.features.inc
 */

/**
 * Implements hook_default_search_api_server().
 */
function undp_search_index_default_search_api_server() {
  $items = array();
  $items['mysql'] = entity_import('search_api_server', '{
    "name" : "Mysql",
    "machine_name" : "mysql",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 0,
      "indexes" : {
        "undp_expert_index" : {
          "uid" : {
            "table" : "search_api_db_undp_expert_index",
            "column" : "uid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "name" : {
            "table" : "search_api_db_undp_expert_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "mail" : {
            "table" : "search_api_db_undp_expert_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "roles" : {
            "table" : "search_api_db_undp_expert_index_roles",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_undp_expert_index",
            "column" : "status",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_user_profile_type" : {
            "table" : "search_api_db_undp_expert_index",
            "column" : "field_user_profile_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_user_email" : {
            "table" : "search_api_db_undp_expert_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_user_name" : {
            "table" : "search_api_db_undp_expert_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_user_expertise" : {
            "table" : "search_api_db_undp_expert_index",
            "column" : "field_user_expertise",
            "type" : "string",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_undp_expert_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          }
        },
        "post_index" : {
          "nid" : {
            "table" : "search_api_db_post_index",
            "column" : "nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_post_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_post_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_post_category" : {
            "table" : "search_api_db_post_index",
            "column" : "field_post_category",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_post_tag" : {
            "table" : "search_api_db_post_index",
            "column" : "field_post_tag",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_post_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_post_image:file" : {
            "table" : "search_api_db_post_index",
            "column" : "field_post_image_file",
            "type" : "integer",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_post_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "body:summary" : {
            "table" : "search_api_db_post_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_post_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
