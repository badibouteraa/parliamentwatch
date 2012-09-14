<?php
/**
 * @file
 * pw_poll.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pw_poll_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pw_poll|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pw_poll';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'poll_votes_per_party_block_ds' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'pw_poll_votes_total' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'body' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => 'Background information',
        'lb-el' => 'h3',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'p',
        'fi-cl' => '',
      ),
    ),
  );
  $export['node|pw_poll|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pw_poll|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pw_poll';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
    'field_pw_overview_chart' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'float-left',
      ),
    ),
  );
  $export['node|pw_poll|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function pw_poll_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'poll_votes_per_party_block_ds';
  $ds_field->label = 'Total votes per party block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'block' => 'pw_blocks|pw_per_party_votes',
    'block_render' => '3',
  );
  $export['poll_votes_per_party_block_ds'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'pw_poll_votes_total';
  $ds_field->label = 'Total votes per poll';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'block' => 'pw_blocks|pw_total_votes',
    'block_render' => '3',
  );
  $export['pw_poll_votes_total'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pw_poll_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pw_poll|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pw_poll';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'pw_poll_votes_total',
        1 => 'group_fieldset_polls_per_party',
        2 => 'poll_votes_per_party_block_ds',
        3 => 'field_pw_views_reference',
        4 => 'body',
        5 => 'comments',
      ),
    ),
    'fields' => array(
      'pw_poll_votes_total' => 'ds_content',
      'group_fieldset_polls_per_party' => 'ds_content',
      'poll_votes_per_party_block_ds' => 'ds_content',
      'field_pw_views_reference' => 'ds_content',
      'body' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|pw_poll|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pw_poll|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pw_poll';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_pw_overview_chart',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_pw_overview_chart' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|pw_poll|teaser'] = $ds_layout;

  return $export;
}
