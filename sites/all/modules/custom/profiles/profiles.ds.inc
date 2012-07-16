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
    'ask_a_question' => array(
      'weight' => '3',
      'label' => 'above',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'h3',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'p',
        'ow-cl' => '',
      ),
    ),
    'group_audience' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-item even clearfix',
      ),
    ),
    'field_user_childs' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-item odd clearfix clearfix',
      ),
    ),
    'field_user_fname' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'field_user_job' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-item odd clearfix',
      ),
    ),
    'field_user_job_skills' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-item even clearfix',
      ),
    ),
    'field_user_lname' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'field_user_marriage_status' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-item even clearfix',
      ),
    ),
    'field_user_picture' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-name-field-user-picture',
      ),
    ),
    'group_user_name' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
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
        0 => 'field_user_picture',
        1 => 'group_user_name',
        2 => 'field_user_parliament',
        3 => 'field_user_fname',
        4 => 'ask_a_question',
        5 => 'field_user_lname',
        6 => 'group_user_basics',
        7 => 'field_user_more',
        8 => 'group_user_basics_basics',
        9 => 'group_user_basics_additional',
        10 => 'field_user_job_skills',
        11 => 'field_user_job',
        12 => 'group_audience',
        13 => 'field_user_childs',
        14 => 'field_user_marriage_status',
      ),
    ),
    'fields' => array(
      'field_user_picture' => 'ds_content',
      'group_user_name' => 'ds_content',
      'field_user_parliament' => 'ds_content',
      'field_user_fname' => 'ds_content',
      'ask_a_question' => 'ds_content',
      'field_user_lname' => 'ds_content',
      'group_user_basics' => 'ds_content',
      'field_user_more' => 'ds_content',
      'group_user_basics_basics' => 'ds_content',
      'group_user_basics_additional' => 'ds_content',
      'field_user_job_skills' => 'ds_content',
      'field_user_job' => 'ds_content',
      'group_audience' => 'ds_content',
      'field_user_childs' => 'ds_content',
      'field_user_marriage_status' => 'ds_content',
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
  $ds_view_mode->view_mode = 'profile';
  $ds_view_mode->label = 'Profile';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['profile'] = $ds_view_mode;

  return $export;
}
