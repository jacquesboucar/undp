<?php
/**
 * @file
 * undp_social_login.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function undp_social_login_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
