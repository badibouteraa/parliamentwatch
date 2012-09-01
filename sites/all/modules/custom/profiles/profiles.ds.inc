<?php
/**
 * @file
 * profiles.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function profiles_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|default';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_user_constituency' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-item field-name-field-user-constituency clearfix',
      ),
    ),
    'field_user_fname' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_user_job_skills' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-item field-name-field-user-job-skills clearfix even',
      ),
    ),
    'field_user_lname' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_user_parliament' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'p',
        'ow-cl' => '',
      ),
    ),
    'field_user_party' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_user_picture' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-image float-left',
      ),
    ),
  );
  $export['user|user|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function profiles_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ask_a_question';
  $ds_field->label = 'Soon you can ask questions';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'block|1',
    'block_render' => '2',
  );
  $export['ask_a_question'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function profiles_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'group_audience',
        1 => 'field_user_picture',
        2 => 'field_user_fname',
        3 => 'group_user_name',
        4 => 'field_user_lname',
        5 => 'field_user_parliament',
        6 => 'field_user_party',
        7 => 'group_user_basics',
        8 => 'group_user_commitee',
        9 => 'field_user_commitee',
        10 => 'field_user_more',
        11 => 'group_user_commitee_tab',
        12 => 'group_user_basics_basics',
        13 => 'field_user_job_skills',
        14 => 'group_user_basics_additional',
        15 => 'field_user_constituency',
      ),
    ),
    'fields' => array(
      'group_audience' => 'ds_content',
      'field_user_picture' => 'ds_content',
      'field_user_fname' => 'ds_content',
      'group_user_name' => 'ds_content',
      'field_user_lname' => 'ds_content',
      'field_user_parliament' => 'ds_content',
      'field_user_party' => 'ds_content',
      'group_user_basics' => 'ds_content',
      'group_user_commitee' => 'ds_content',
      'field_user_commitee' => 'ds_content',
      'field_user_more' => 'ds_content',
      'group_user_commitee_tab' => 'ds_content',
      'group_user_basics_basics' => 'ds_content',
      'field_user_job_skills' => 'ds_content',
      'group_user_basics_additional' => 'ds_content',
      'field_user_constituency' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['user|user|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function profiles_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'pw_file_landscape_l';
  $ds_view_mode->label = 'pw_file_landscape_l';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['pw_file_landscape_l'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'pw_file_portrait_l';
  $ds_view_mode->label = 'pw_file_portrait_l';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['pw_file_portrait_l'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'pw_file_portrait_m';
  $ds_view_mode->label = 'pw_file_portrait_m';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['pw_file_portrait_m'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'pw_file_portrait_s';
  $ds_view_mode->label = 'pw_file_portrait_s';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['pw_file_portrait_s'] = $ds_view_mode;

  return $export;
}
