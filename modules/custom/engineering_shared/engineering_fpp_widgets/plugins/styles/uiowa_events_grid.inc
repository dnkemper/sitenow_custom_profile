<?php

/**
 * @file
 * Accordion option styles.
 */

// Plugin registration.
$plugin = array(
  'title' => t('Uiowa Events Grid'),
  'description' => t('Uiowa Events grid options.'),
  'render pane' => 'uiowa_events_grid_style_render_pane',
  'pane settings form' => 'uiowa_events_grid_style_settings_form',
  'category' => t('Widgets'),
);

/**
 * Renders the pane content.
 */
function theme_uiowa_events_grid_style_render_pane($content) {
  if (!empty($content)) {
    return theme('panels_pane', $content);
  }
}

/**
 * Accordion options settings form.
 */
function uiowa_events_grid_style_settings_form($settings) {
  $form = array();
  $form['uiowa_events_type'] = array(
    '#type' => 'textfield',
    '#title' => t('Type'),
    '#access' => FALSE,
    '#default_value' => 'grid',
  );
  return $form;
}
