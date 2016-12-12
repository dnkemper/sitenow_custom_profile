<?php
/**
 * @file
 * ovpred_image_slideshow.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ovpred_image_slideshow_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'eq_file'
  $field_bases['eq_file'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'entityqueue_subqueue',
    ),
    'field_name' => 'eq_file',
    'foreign keys' => array(),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 1,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'entityqueue',
      'handler_settings' => array(
        'behaviors' => array(
          'entityqueue' => array(
            'status' => 1,
          ),
        ),
      ),
      'target_type' => 'file',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
