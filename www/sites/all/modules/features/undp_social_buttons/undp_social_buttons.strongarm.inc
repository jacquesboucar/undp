<?php
/**
 * @file
 * undp_social_buttons.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function undp_social_buttons_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_delicious_page';
  $strongarm->value = '';
  $export['on_the_web_delicious_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_delicious_weight';
  $strongarm->value = '0';
  $export['on_the_web_delicious_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_facebook_page';
  $strongarm->value = 'facebook.com';
  $export['on_the_web_facebook_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_facebook_weight';
  $strongarm->value = '0';
  $export['on_the_web_facebook_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_flickr_page';
  $strongarm->value = '';
  $export['on_the_web_flickr_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_flickr_weight';
  $strongarm->value = '0';
  $export['on_the_web_flickr_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_friendfeed_page';
  $strongarm->value = '';
  $export['on_the_web_friendfeed_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_friendfeed_weight';
  $strongarm->value = '0';
  $export['on_the_web_friendfeed_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_google_page';
  $strongarm->value = '';
  $export['on_the_web_google_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_google_weight';
  $strongarm->value = '0';
  $export['on_the_web_google_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_instagram_page';
  $strongarm->value = '';
  $export['on_the_web_instagram_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_instagram_weight';
  $strongarm->value = '0';
  $export['on_the_web_instagram_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_itunes_page';
  $strongarm->value = '';
  $export['on_the_web_itunes_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_itunes_weight';
  $strongarm->value = '0';
  $export['on_the_web_itunes_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_linkedin_page';
  $strongarm->value = 'linkedin.com';
  $export['on_the_web_linkedin_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_linkedin_weight';
  $strongarm->value = '0';
  $export['on_the_web_linkedin_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_myspace_page';
  $strongarm->value = '';
  $export['on_the_web_myspace_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_myspace_weight';
  $strongarm->value = '0';
  $export['on_the_web_myspace_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_pinterest_page';
  $strongarm->value = '';
  $export['on_the_web_pinterest_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_pinterest_weight';
  $strongarm->value = '0';
  $export['on_the_web_pinterest_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_rss_page';
  $strongarm->value = '';
  $export['on_the_web_rss_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_rss_weight';
  $strongarm->value = '0';
  $export['on_the_web_rss_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_sitename';
  $strongarm->value = 1;
  $export['on_the_web_sitename'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_size';
  $strongarm->value = 'sm';
  $export['on_the_web_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_soundcloud_page';
  $strongarm->value = '';
  $export['on_the_web_soundcloud_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_soundcloud_weight';
  $strongarm->value = '0';
  $export['on_the_web_soundcloud_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_target';
  $strongarm->value = 1;
  $export['on_the_web_target'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_twitter_page';
  $strongarm->value = 'twitter.com';
  $export['on_the_web_twitter_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_twitter_weight';
  $strongarm->value = '0';
  $export['on_the_web_twitter_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_youtube_page';
  $strongarm->value = '';
  $export['on_the_web_youtube_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_youtube_weight';
  $strongarm->value = '0';
  $export['on_the_web_youtube_weight'] = $strongarm;

  return $export;
}
