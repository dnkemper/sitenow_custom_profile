<?php
/**
 * @file
 * ovpred_image_slideshow.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function ovpred_image_slideshow_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'ovpred_slideshow';
  $queue->label = 'Slideshow';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'file';
  $queue->settings = array(
    'target_bundles' => array(
      'image' => 'image',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['ovpred_slideshow'] = $queue;

  return $export;
}
