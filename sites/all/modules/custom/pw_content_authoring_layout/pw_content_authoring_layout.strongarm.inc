<?php
/**
 * @file
 * pw_content_authoring_layout.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pw_content_authoring_layout_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(
      'media_link' => array(
        'custom_settings' => TRUE,
      ),
      'media_preview' => array(
        'custom_settings' => TRUE,
      ),
      'media_small' => array(
        'custom_settings' => TRUE,
      ),
      'media_large' => array(
        'custom_settings' => TRUE,
      ),
      'media_original' => array(
        'custom_settings' => TRUE,
      ),
      'pw_file_landscape_l' => array(
        'custom_settings' => TRUE,
      ),
      'pw_file_portrait_l' => array(
        'custom_settings' => TRUE,
      ),
      'pw_file_portrait_m' => array(
        'custom_settings' => TRUE,
      ),
      'pw_file_portrait_s' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'pw_file_landscape_l' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'pw_file_portrait_l' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'pw_file_portrait_m' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'pw_file_portrait_s' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  return $export;
}
