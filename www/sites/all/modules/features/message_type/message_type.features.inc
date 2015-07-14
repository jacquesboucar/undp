<?php
/**
 * @file
 * message_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function message_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "mailhandler" && $api == "mailhandler_mailbox") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function message_type_default_message_type() {
  $items = array();
  $items['post_comment'] = entity_import('message_type', '{
    "name" : "post_comment",
    "description" : "post comment",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "fr",
    "arguments" : null,
    "message_text" : { "fr" : [
        {
          "value" : "\\u003Cp\\u003Ereply\\u003C\\/p\\u003E\\r\\n",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003Ereply\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
