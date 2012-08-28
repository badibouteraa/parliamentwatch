<?php
/**
 * @file
 * dialogue_message_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dialogue_message_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_dialogue_message';
  $strongarm->value = 0;
  $export['comment_anonymous_dialogue_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_dialogue_message';
  $strongarm->value = 1;
  $export['comment_default_mode_dialogue_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_dialogue_message';
  $strongarm->value = '50';
  $export['comment_default_per_page_dialogue_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_dialogue_message';
  $strongarm->value = '1';
  $export['comment_dialogue_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_dialogue_message';
  $strongarm->value = 1;
  $export['comment_form_location_dialogue_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_dialogue_message';
  $strongarm->value = '1';
  $export['comment_preview_dialogue_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_dialogue_message';
  $strongarm->value = 1;
  $export['comment_subject_field_dialogue_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_dialogue_message';
  $strongarm->value = '0';
  $export['language_content_type_dialogue_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_dialogue_message';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_dialogue_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_dialogue_message';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_dialogue_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_dialogue_message';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_dialogue_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_dialogue_message';
  $strongarm->value = '1';
  $export['node_preview_dialogue_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_dialogue_message';
  $strongarm->value = 1;
  $export['node_submitted_dialogue_message'] = $strongarm;

  return $export;
}
