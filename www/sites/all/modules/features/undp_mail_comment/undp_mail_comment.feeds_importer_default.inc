<?php
/**
 * @file
 * undp_mail_comment.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function undp_mail_comment_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'comment';
  $feeds_importer->config = array(
    'name' => 'comment',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'MailhandlerFetcher',
      'config' => array(
        'filter' => 'MailhandlerFiltersComments',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'MailhandlerParser',
      'config' => array(
        'available_commands' => 'status',
        'authenticate_plugin' => 'MailcommentAuthenticate',
        'extended_headers' => NULL,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsCommentProcessor',
      'config' => array(
        'mappings' => array(
          0 => array(
            'source' => 'parent_nid',
            'target' => 'nid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'parent_cid',
            'target' => 'pid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'subject',
            'target' => 'subject',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'body_text',
            'target' => 'comment',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'authenticated_uid',
            'target' => 'uid',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'message_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          6 => array(
            'source' => 'status',
            'target' => 'status',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => FALSE,
        'bundle' => NULL,
        'expire' => '-1',
        'author' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['comment'] = $feeds_importer;

  return $export;
}
