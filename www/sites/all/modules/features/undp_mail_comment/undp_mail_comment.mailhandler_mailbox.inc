<?php
/**
 * @file
 * undp_mail_comment.mailhandler_mailbox.inc
 */

/**
 * Implements hook_default_mailhandler_mailbox().
 */
function undp_mail_comment_default_mailhandler_mailbox() {
  $export = array();

  $mailbox = new stdClass();
  $mailbox->disabled = FALSE; /* Edit this to true to make a default mailbox disabled initially */
  $mailbox->api_version = 2;
  $mailbox->mail = 'test_mailbox';
  $mailbox->admin_title = 'test mailbox';
  $mailbox->settings = array(
    'type' => 'imap',
    'folder' => 'INBOX',
    'domain' => 'imap.gmail.com',
    'port' => '993',
    'insecure' => 0,
    'name' => 'test@uberdev.ro',
    'pass' => 'FPnXOYwzq78S',
    'extraimap' => '/ssl',
    'limit' => '0',
    'encoding' => 'UTF-8',
    'flag_after_read' => 1,
    'delete_after_read' => 0,
    'fromheader' => 'From',
    'security' => '0',
    'replies' => '0',
    'retrieve' => 'MailhandlerPhpImapRetrieve',
    'readonly' => 0,
  );
  $export['test_mailbox'] = $mailbox;

  return $export;
}
