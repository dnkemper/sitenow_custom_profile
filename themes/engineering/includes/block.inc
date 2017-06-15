<?php
/**
 * @file
 * Theme and preprocess functions for blocks.
 */

/**
 * Implements hook_preprocess_block().
 */
function engineering_preprocess_block(&$vars) {
  // Set classes based upon #wrapper_classes.
  // @see page.inc.
  if (isset($vars['elements']['#wrapper_classes'])) {
    foreach ($vars['elements']['#wrapper_classes'] as $class) {
      $vars['classes_array'][] = $class;
    }
  }
}
