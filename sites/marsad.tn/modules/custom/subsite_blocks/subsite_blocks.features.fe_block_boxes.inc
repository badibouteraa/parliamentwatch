<?php
/**
 * @file
 * subsite_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function subsite_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'This content is wrong';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'data_wrong';
  $fe_block_boxes->body = 'test fr';

  $export['data_wrong'] = $fe_block_boxes;

  return $export;
}
