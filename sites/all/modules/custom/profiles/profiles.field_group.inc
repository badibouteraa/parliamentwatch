<?php
/**
 * @file
 * profiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function profiles_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_basics_additional|user|user|default';
  $field_group->group_name = 'group_user_basics_additional';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_user_basics';
  $field_group->data = array(
    'label' => 'Additional',
    'weight' => '14',
    'children' => array(
      0 => 'field_user_more',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Additional',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_basics_additional|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_basics_basics|user|user|default';
  $field_group->group_name = 'group_user_basics_basics';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_user_basics';
  $field_group->data = array(
    'label' => 'Basics',
    'weight' => '13',
    'children' => array(
      0 => 'field_user_childs',
      1 => 'field_user_job',
      2 => 'field_user_job_skills',
      3 => 'field_user_marriage_status',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Basics',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_basics_basics|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_basics|user|user|default';
  $field_group->group_name = 'group_user_basics';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basics',
    'weight' => '4',
    'children' => array(
      0 => 'group_user_basics_basics',
      1 => 'group_user_basics_additional',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_user_basics|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_name|user|user|default';
  $field_group->group_name = 'group_user_name';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '1',
    'children' => array(
      0 => 'field_user_fname',
      1 => 'field_user_lname',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Name',
      'instance_settings' => array(
        'classes' => 'h2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_name|user|user|default'] = $field_group;

  return $export;
}
