<?php
/**
 * @file
 * profiles.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function profiles_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'profiles_list';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'profile_list' => 'profile_list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-profile_list-page' => array(
          'module' => 'views',
          'delta' => '-exp-profile_list-page',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['profiles_list'] = $context;

  return $export;
}
