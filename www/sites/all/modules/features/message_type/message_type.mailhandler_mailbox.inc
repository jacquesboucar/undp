<?php
/**
 * @file
 * message_type.mailhandler_mailbox.inc
 */

/**
 * Implements hook_default_mailhandler_mailbox().
 */
function message_type_default_mailhandler_mailbox() {
  $export = array();

  $mailbox = new stdClass();
  $mailbox->disabled = FALSE; /* Edit this to true to make a default mailbox disabled initially */
  $mailbox->api_version = 2;
  $mailbox->mail = 'comment_by_email';
  $mailbox->admin_title = 'comment by email';
  $mailbox->settings = array(
    'type' => 'pop3',
    'folder' => 'INBOX',
    'domain' => 'undp.local',
    'port' => '995',
    'insecure' => 1,
    'name' => 'jacques',
    'pass' => '',
    'extraimap' => '',
    'limit' => '0',
    'encoding' => 'UTF-8',
    'flag_after_read' => 1,
    'delete_after_read' => 0,
    'fromheader' => 'From',
    'security' => '0',
    'replies' => '0',
    'retrieve' => 'MailhandlerRetrieveDummy',
    'readonly' => 0,
  );
  $export['comment_by_email'] = $mailbox;

  return $export;
}
