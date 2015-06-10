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
        'on_the_web-0' => array(
          'module' => 'on_the_web',
          'delta' => '0',
          'region' => 'header',
          'weight' => '-10',
        ),
        'undp_config-undp_footer_menu' => array(
          'module' => 'undp_config',
          'delta' => 'undp_footer_menu',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['sitewide_context'] = $context;

  return $export;
}
