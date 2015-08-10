<?php
/**
 * @file
 * undp_mail_comment.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function undp_mail_comment_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailcomment_import_filter_mode';
  $strongarm->value = '2';
  $export['mailcomment_import_filter_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailcomment_insert_reply_text';
  $strongarm->value = 1;
  $export['mailcomment_insert_reply_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailcomment_mailbox';
  $strongarm->value = 'test@uberdev.ro';
  $export['mailcomment_mailbox'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailcomment_reply_text';
  $strongarm->value = '((( Reply ABOVE this LINE to POST a COMMENT )))';
  $export['mailcomment_reply_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'messaging_mail_default_from';
  $strongarm->value = 'test@uberdev.ro';
  $export['messaging_mail_default_from'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'messaging_mail_returnpath';
  $strongarm->value = 'test@uberdev.ro';
  $export['messaging_mail_returnpath'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_per_type';
  $strongarm->value = '0';
  $export['notifications_content_per_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type';
  $strongarm->value = array(
    'post' => 'post',
    'article' => 0,
    'page' => 0,
    'event_calendar' => 0,
    'formation' => 0,
    'user_profile_comment' => 0,
  );
  $export['notifications_content_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_option_subscription_types_content_thread';
  $strongarm->value = array(
    'subscriptions_block' => 0,
    'node_links' => 1,
    'teaser_links' => 0,
  );
  $export['notifications_option_subscription_types_content_thread'] = $strongarm;

  return $export;
}
