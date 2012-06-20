<?php
/**
 * @file
 * user_profile_fields.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function user_profile_fields_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_info|user|user|form';
  $field_group->group_name = 'group_user_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_user_childs',
      1 => 'field_user_gender',
      2 => 'field_user_job_skills',
      3 => 'field_user_job',
      4 => 'field_user_marriage_status',
      5 => 'field_user_more',
      6 => 'field_user_parliament',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_info|user|user|form'] = $field_group;

  return $export;
}
