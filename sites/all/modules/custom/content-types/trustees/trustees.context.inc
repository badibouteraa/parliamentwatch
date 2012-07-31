<?php
/**
 * @file
 * trustees.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function trustees_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'trustees';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'Trustees' => 'Trustees',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'webform-client-block-7' => array(
          'module' => 'webform',
          'delta' => 'client-block-7',
          'region' => 'content',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['trustees'] = $context;

  return $export;
}
