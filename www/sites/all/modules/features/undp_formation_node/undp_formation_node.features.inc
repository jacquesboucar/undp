<?php
/**
 * @file
 * undp_formation_node.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function undp_formation_node_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function undp_formation_node_node_info() {
  $items = array(
    'formation' => array(
      'name' => t('Formation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
