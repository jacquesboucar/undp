<?php

/**
 * @file
 * template.php
 */


function undp_preprocess_html($vars){
//  drupal_add_js('misc/form.js');
//  drupal_add_js('misc/collapse.js');
}


function undp_preprocess_page(&$vars) {
  if (drupal_is_front_page()) {
    $vars['title'] = "";
    unset($vars['page']['content']['system_main']['default_message']);
  }
}

/**
 * Implements hook_css_alter().
 */
function undp_css_alter(&$css) {
  $theme_path = drupal_get_path('theme', 'undp');
  $style = $theme_path . '/css/style.css';
  $css[$style] = array(
    'data' => $style,
    'type' => 'file',
    'every_page' => TRUE,
    'media' => 'all',
    'preprocess' => TRUE,
    'group' => CSS_THEME,
    'browsers' => array('IE' => TRUE, '!IE' => TRUE),
    'weight' => -1,
  );
}