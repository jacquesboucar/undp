<?php
/**
 * @file
 * undp_twitter_views.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function undp_twitter_views_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_api';
  $strongarm->value = 'https://api.twitter.com';
  $export['twitter_api'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_consumer_key';
  $strongarm->value = 'cGPj0Gyc9J8TY8g2EIW7RRXRz';
  $export['twitter_consumer_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_consumer_secret';
  $strongarm->value = 'GMeINLqUEZOpje39CvmNmBXKEejAtfGfczJcS8hn0Sbym5qPJW';
  $export['twitter_consumer_secret'] = $strongarm;

  return $export;
}
