<?php
/**
 * @file
 * pw_poll.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pw_poll_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fieldset_polls_per_party|node|pw_poll|default';
  $field_group->group_name = 'group_fieldset_polls_per_party';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pw_poll';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Show voting results in detail',
    'weight' => '1',
    'children' => array(
      0 => 'poll_votes_per_party_block_ds',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Show voting results in detail',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_fieldset_polls_per_party|node|pw_poll|default'] = $field_group;

  return $export;
}
