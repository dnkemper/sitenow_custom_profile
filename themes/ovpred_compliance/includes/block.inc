<?php

/**
 * @file
 * Theme and preprocess functions for blocks.
 */

/**
 * Implements hook_preprocess_block().
 */
function ovpred_compliance_preprocess_block(&$vars) {
  // Set classes based upon #wrapper_classes.
  // @see page.inc.
  if (isset($vars['elements']['#wrapper_classes'])) {
    foreach ($vars['elements']['#wrapper_classes'] as $class) {
      $vars['classes_array'][] = $class;
    }
  }

  // Add a class based on the block module and delta.
  $vars['classes_array'][] = 'block--' . drupal_html_class($vars['block']->module) . '-' . drupal_html_class($vars['block']->delta);
}
