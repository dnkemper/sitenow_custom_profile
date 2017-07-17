<?php

/**
 * @file
 * Accordion option styles.
 */

// Plugin registration.
$plugin = array(
  'title' => t('Showcase Grid'),
  'description' => t('Showcase grid options.'),
  'render pane' => 'showcase_grid_style_render_pane',
  'pane settings form' => 'showcase_grid_style_settings_form',
  'category' => t('Widgets'),
);

/**
 * Renders the pane content.
 */
function theme_showcase_grid_style_render_pane($content) {
  if (!empty($content)) {
    return theme('panels_pane', $content);
  }
}

/**
 * Accordion options settings form.
 */
function showcase_grid_style_settings_form($settings) {
  $form = array();
  $form['showcase_type'] = array(
    '#type' => 'textfield',
    '#title' => t('Type'),
    '#access' => FALSE,
    '#default_value' => 'grid',
  );
  $form['col'] = array(
    '#type' => 'select',
    '#title' => t('Columns'),
    '#default_value' => (isset($settings['col'])) ? $settings['col'] : '3',
    '#options' => array(
      '3_col' => '3 Columns',
      '4_col' => '4 Columns',
    ),
  );
  return $form;
}
