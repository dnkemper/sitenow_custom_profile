<?php

/**
 * @file
 * Theme and preprocess functions for pages.
 */

/**
 * Implements template_preprocess_page().
 */
function ovpred_compliance_preprocess_page(&$vars) {
  // Add attributes for page titles.
  $vars['title_attributes_array']['class'][] = 'page-title';
  $vars['title_attributes_array']['id'][] = 'page-title';

  // Add a grid definitions for '.main-content' regions.
  if (!empty($vars['page']['sidebar'])) {
    $vars['page']['content']['#wrapper_classes'][] = 'col-md-9 col-md-push-3';
    $vars['page']['sidebar']['#wrapper_classes'][] = 'col-md-3 col-md-pull-9';
  }
  else {
    $vars['page']['content']['#wrapper_classes'][] = 'col-md-12';
  }

  $ovpred_blocks = array(
    'ovpred_units',
    'ovpred_contact',
    'ovpred_branding',
    'ovpred_social',
    'ovpred_thank',
  );
  foreach ($ovpred_blocks as $delta) {
    $block = block_load('ovpred_blocks', $delta);
    $render_array = _block_get_renderable_array(_block_render_blocks(array($block)));
    $vars['footer_blocks'][$delta] = $render_array;
  }
}

/**
 * Implements template_process_page().
 */
function ovpred_compliance_process_page(&$vars) {
  // If there is no container set OR it's set to true.
  if (!isset($vars['container']) || $vars['container'] == TRUE) {
    // Add a container to '.main-content'.
    $vars['$content-classes'][] = 'container-smooth';
  }
  // Add classes for the main_wrapper.
  $vars['content_classes'] = implode(' ', $vars['$content-classes']);
}
