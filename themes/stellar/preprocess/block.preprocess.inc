<?php

/**
 * @file
 * Block preprocess include.
 */

/**
 * Implements hook_preprocess_block().
 */
function stellar_preprocess_block(&$variables) {
  // Set classes from page_preprocess().
  if (isset($variables['elements']['#wrapper_classes'])) {
    foreach ($variables['elements']['#wrapper_classes'] as $class) {
      $variables['classes_array'][] = $class;
    }
  }
}
