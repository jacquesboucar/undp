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
        'views-discussions-block' => array(
          'module' => 'views',
          'delta' => 'discussions-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-undp_formation-block' => array(
          'module' => 'views',
          'delta' => 'undp_formation-block',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['homepage_layout'] = $context;

  return $export;
}
