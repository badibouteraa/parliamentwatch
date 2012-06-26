<?php
/**
 * @file
 * slider_item.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function slider_item_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|slider_item|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'slider_item';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'service_links_displays_group' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'sld_group_image',
    ),
  );
  $export['node|slider_item|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function slider_item_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|slider_item|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'slider_item';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'webform',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'webform' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|slider_item|default'] = $ds_layout;

  return $export;
}
