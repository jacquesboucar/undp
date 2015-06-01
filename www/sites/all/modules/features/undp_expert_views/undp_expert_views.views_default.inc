<?php
/**
 * @file
 * undp_expert_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function undp_expert_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'undp_expert';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_undp_expert_index';
  $view->human_name = 'undp expert';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Experts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed User: Nom et Prénom */
  $handler->display->display_options['fields']['field_user_name']['id'] = 'field_user_name';
  $handler->display->display_options['fields']['field_user_name']['table'] = 'search_api_index_undp_expert_index';
  $handler->display->display_options['fields']['field_user_name']['field'] = 'field_user_name';
  $handler->display->display_options['fields']['field_user_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_name']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Domaines d'expertises */
  $handler->display->display_options['fields']['field_user_expertise']['id'] = 'field_user_expertise';
  $handler->display->display_options['fields']['field_user_expertise']['table'] = 'search_api_index_undp_expert_index';
  $handler->display->display_options['fields']['field_user_expertise']['field'] = 'field_user_expertise';
  /* Filter criterion: Indexed User: Type de profile */
  $handler->display->display_options['filters']['field_user_profile_type']['id'] = 'field_user_profile_type';
  $handler->display->display_options['filters']['field_user_profile_type']['table'] = 'search_api_index_undp_expert_index';
  $handler->display->display_options['filters']['field_user_profile_type']['field'] = 'field_user_profile_type';
  $handler->display->display_options['filters']['field_user_profile_type']['value'] = array(
    'expert ' => 'expert ',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_undp_expert_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Rechercher un expert';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'field_user_email' => 'field_user_email',
    'field_user_name' => 'field_user_name',
    'mail' => 'mail',
    'name' => 'name',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'experts';
  $export['undp_expert'] = $view;

  return $export;
}
