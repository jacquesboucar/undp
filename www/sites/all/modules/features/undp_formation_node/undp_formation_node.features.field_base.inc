<?php
/**
 * @file
 * undp_formation_node.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function undp_formation_node_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_formation_image'
  $field_bases['field_formation_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_formation_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_formation_video'
  $field_bases['field_formation_video'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_formation_video',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'video_id' => array(
        0 => 'video_id',
      ),
    ),
    'locked' => 0,
    'module' => 'youtube',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'youtube',
  );

  return $field_bases;
}
