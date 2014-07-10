<?php
/**
 * @file
 * nbcuuomerch_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function nbcuuomerch_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Help';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'block_header_help';
  $fe_block_boxes->body = 'Need Help? Call 1-888-762-0820';

  $export['block_header_help'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Welcome';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'block_header_welcome';
  $fe_block_boxes->body = 'Welcome to the Official Universal Orlando Online Merchandise Store';

  $export['block_header_welcome'] = $fe_block_boxes;

  return $export;
}
