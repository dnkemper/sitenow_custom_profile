<?php
/**
 * @file
 * ovpred_paragraphs.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function ovpred_paragraphs_paragraphs_info() {
  $items = array(
    'ovpred_accord_item' => array(
      'name' => 'Accordion Item',
      'bundle' => 'ovpred_accord_item',
      'locked' => '1',
    ),
    'ovpred_accord_set' => array(
      'name' => 'Accordion Set',
      'bundle' => 'ovpred_accord_set',
      'locked' => '1',
    ),
    'ovpred_text_area' => array(
      'name' => 'Text Area',
      'bundle' => 'ovpred_text_area',
      'locked' => '1',
    ),
  );
  return $items;
}
