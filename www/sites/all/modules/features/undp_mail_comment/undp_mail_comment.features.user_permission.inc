<?php
/**
 * @file
 * undp_mail_comment.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function undp_mail_comment_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create subscriptions'.
  $permissions['create subscriptions'] = array(
    'name' => 'create subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'notifications',
  );

  // Exported permission: 'maintain own subscriptions'.
  $permissions['maintain own subscriptions'] = array(
    'name' => 'maintain own subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'notifications',
  );

  // Exported permission: 'manage all subscriptions'.
  $permissions['manage all subscriptions'] = array(
    'name' => 'manage all subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'notifications',
  );

  // Exported permission: 'manage own subscriptions'.
  $permissions['manage own subscriptions'] = array(
    'name' => 'manage own subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'notifications_account',
  );

  // Exported permission: 'subscribe to content'.
  $permissions['subscribe to content'] = array(
    'name' => 'subscribe to content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'notifications_content',
  );

  return $permissions;
}
