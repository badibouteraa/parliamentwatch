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
  $field_group->identifier = 'group_profiles_mouseover|user|user|pw_profiles_list_compact';
  $field_group->group_name = 'group_profiles_mouseover';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'pw_profiles_list_compact';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mouseover',
    'weight' => '7',
    'children' => array(
      0 => 'field_user_commitee',
      1 => 'field_user_constituency',
      2 => 'field_user_parliament',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Mouseover',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_profiles_mouseover|user|user|pw_profiles_list_compact'] = $field_group;

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
        'description' => 'Additional Links',
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
      0 => 'field_user_constituency',
      1 => 'field_user_job_skills',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Basics',
      'instance_settings' => array(
        'classes' => '',
        'description' => 'Basic Information',
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
    'weight' => '5',
    'children' => array(
      0 => 'group_user_basics_additional',
      1 => 'group_user_basics_basics',
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
  $field_group->identifier = 'group_user_commitee_tab|user|user|default';
  $field_group->group_name = 'group_user_commitee_tab';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_user_commitee';
  $field_group->data = array(
    'label' => 'Political Roles',
    'weight' => '13',
    'children' => array(
      0 => 'field_user_commitee',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Political Roles',
      'instance_settings' => array(
        'classes' => '',
        'description' => 'Political Roles',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_user_commitee_tab|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_commitee|user|user|default';
  $field_group->group_name = 'group_user_commitee';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Commitee Fieldgroup',
    'weight' => '6',
    'children' => array(
      0 => 'group_user_commitee_tab',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_user_commitee|user|user|default'] = $field_group;

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
    'weight' => '2',
    'children' => array(
      0 => 'field_user_fname',
      1 => 'field_user_lname',
      2 => 'field_user_party',
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
