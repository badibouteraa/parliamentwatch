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
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'pw_blocks-pw_per_party_votes' => array(
          'module' => 'pw_blocks',
          'delta' => 'pw_per_party_votes',
          'region' => 'content',
          'weight' => '-10',
        ),
        'pw_blocks-pw_total_votes' => array(
          'module' => 'pw_blocks',
          'delta' => 'pw_total_votes',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['pw_voting'] = $context;

  return $export;
}
