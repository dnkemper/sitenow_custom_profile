<?php

/**
 * @file
 * Preprocess panels color presets.
 */

/**
 * Implements hook_preprocess_panels_pane().
 */
function ovpred_preprocess_wrapper_region(&$variables) {

  if (isset($variables['style'])) {
    if ($variables['style']['name'] === 'wrapper') {
      $variables['attributes_array']['class'][] = $variables['settings']['preset_color'];
    }
  }

  return $variables;
}
