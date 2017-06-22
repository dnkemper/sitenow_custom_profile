<?php

/**
 * @file
 * Accordion option styles.
 */

// Plugin registration.
$plugin = array(
  'title' => t('Accordion Options'),
  'description' => t('Define bootstrap accordion options.'),
  'render pane' => 'accordion_options_style_render_pane',
  'pane settings form' => 'accordion_options_style_settings_form',
  'category' => t('Widgets'),
);

/**
 * Renders the pane content.
 */
function theme_accordion_options_style_render_pane($content) {
  if (!empty($content)) {
    return theme('panels_pane', $content);
  }
}

/**
 * Accordion options settings form.
 */
function accordion_options_style_settings_form($settings) {
  $form = array();
  $form['panel_color'] = array(
    '#type' => 'select',
    '#title' => t('Choose panel color style'),
    '#default_value' => (isset($settings['panel_color'])) ? $settings['panel_color'] : FALSE,
    '#options' => array(
      'panel-default' => t('Default'),
      'panel-primary' => t('Primary'),
      'panel-success' => t('Success'),
      'panel-info' => t('Info'),
      'panel-warning' => t('Warning'),
      'panel-danger' => t('Danger'),
    ),
  );
  return $form;
}
