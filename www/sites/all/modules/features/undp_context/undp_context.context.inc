<?php
/**
 * @file
 * undp_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function undp_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_layout';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'new_event' => 'new_event',
        'new_event:page_1' => 'new_event:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-calendar-block_1' => array(
          'module' => 'views',
          'delta' => 'calendar-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['event_layout'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'expert_layout';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'undp_expert' => 'undp_expert',
        'undp_expert:page' => 'undp_expert:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-e1fkys5tbz0JfSbqTTc7wZlBBU6HP2A1' => array(
          'module' => 'facetapi',
          'delta' => 'e1fkys5tbz0JfSbqTTc7wZlBBU6HP2A1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['expert_layout'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage_layout';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-calendar-block_1' => array(
          'module' => 'views',
          'delta' => 'calendar-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-new_event-block' => array(
          'module' => 'views',
          'delta' => 'new_event-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-undp_tweets-block' => array(
          'module' => 'views',
          'delta' => 'undp_tweets-block',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-discussions-block_1' => array(
          'module' => 'views',
          'delta' => 'discussions-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-discussions-block' => array(
          'module' => 'views',
          'delta' => 'discussions-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-undp_formation-block' => array(
          'module' => 'views',
          'delta' => 'undp_formation-block',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['homepage_layout'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'post_layout';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'all_post_view' => 'all_post_view',
        'all_post_view:page' => 'all_post_view:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-rg1b044KYPl4zQ95sCWU6lTfm2P1PxVn' => array(
          'module' => 'facetapi',
          'delta' => 'rg1b044KYPl4zQ95sCWU6lTfm2P1PxVn',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-DwwDmVccD9fxweRVn00poIX95FBATSUI' => array(
          'module' => 'facetapi',
          'delta' => 'DwwDmVccD9fxweRVn00poIX95FBATSUI',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-discussions-block_3' => array(
          'module' => 'views',
          'delta' => 'discussions-block_3',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['post_layout'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'undp_config-undp_main_menu' => array(
          'module' => 'undp_config',
          'delta' => 'undp_main_menu',
          'region' => 'header',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-9',
        ),
        'on_the_web-0' => array(
          'module' => 'on_the_web',
          'delta' => '0',
          'region' => 'header',
          'weight' => '-8',
        ),
        'undp_config-undp_footer_menu' => array(
          'module' => 'undp_config',
          'delta' => 'undp_footer_menu',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'undp_config-undp_a_propos' => array(
          'module' => 'undp_config',
          'delta' => 'undp_a_propos',
          'region' => 'footer',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['sitewide_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'undp_node_display';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event_calendar' => 'event_calendar',
        'formation' => 'formation',
        'post' => 'post',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'undp_config-undp_social_share' => array(
          'module' => 'undp_config',
          'delta' => 'undp_social_share',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['undp_node_display'] = $context;

  return $export;
}
