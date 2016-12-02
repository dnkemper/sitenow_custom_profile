<?php
/**
 * @file
 * ovpred_impact_data.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function ovpred_impact_data_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'ovpred_impact_data_primary';
  $queue->label = 'Impact Data (Primary)';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'node';
  $queue->settings = array(
    'target_bundles' => array(
      'ovpred_impact_data' => 'ovpred_impact_data',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['ovpred_impact_data_primary'] = $queue;

  return $export;
}
