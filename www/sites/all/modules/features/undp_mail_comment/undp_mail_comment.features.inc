<?php
/**
 * @file
 * undp_mail_comment.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function undp_mail_comment_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "mailhandler" && $api == "mailhandler_mailbox") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
