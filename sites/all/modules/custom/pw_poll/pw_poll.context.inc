<?php
/**
 * @file
 * pw_poll.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pw_poll_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'polls_pages';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/20' => 'node/20',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-pw_polls_list-block' => array(
          'module' => 'views',
          'delta' => 'pw_polls_list-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['polls_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pw_voting';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'pw_poll' => 'pw_poll',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;
  $export['pw_voting'] = $context;

  return $export;
}
