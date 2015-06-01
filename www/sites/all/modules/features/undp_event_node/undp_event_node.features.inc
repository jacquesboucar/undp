<?php
/**
 * @file
 * undp_event_node.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function undp_event_node_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function undp_event_node_flag_default_flags() {
  $flags = array();
  // Exported flag: "attend".
  $flags['attend'] = array(
    'entity_type' => 'node',
    'title' => 'attend',
    'global' => 0,
    'types' => array(
      0 => 'event_calendar',
    ),
    'flag_short' => 'Je participe',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Je ne participe plus',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'undp_event_node',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Like".
  $flags['like'] = array(
    'entity_type' => 'node',
    'title' => 'Like',
    'global' => 0,
    'types' => array(
      0 => 'event_calendar',
    ),
    'flag_short' => 'J\'aime',
    'flag_long' => '',
    'flag_message' => 'Vous avez aimé cet évènement',
    'unflag_short' => 'Je n\'aime plus',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'undp_event_node',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "recommend".
  $flags['recommend'] = array(
    'entity_type' => 'node',
    'title' => 'recommend',
    'global' => 0,
    'types' => array(
      0 => 'event_calendar',
    ),
    'flag_short' => 'Je recommande',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Je ne recommande plus',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'undp_event_node',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function undp_event_node_node_info() {
  $items = array(
    'event_calendar' => array(
      'name' => t('Event Calendar'),
      'base' => 'node_content',
      'description' => t('A content type to create events for calendar.'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
