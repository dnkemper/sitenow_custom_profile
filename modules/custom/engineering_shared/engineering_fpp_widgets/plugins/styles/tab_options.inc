<?php

/**
 * @file
 * Accordion option styles.
 */

// Plugin registration.
$plugin = array(
  'title' => t('Tab Options'),
  'description' => t('Define bootstrap tab options.'),
  'render pane' => 'tab_options_style_render_pane',
  'pane settings form' => 'tab_options_style_settings_form',
  'category' => t('Widgets'),
);

/**
 * Renders the pane content.
 */
function theme_tab_options_style_render_pane($content) {
  if (!empty($content)) {
    return theme('panels_pane', $content);
  }
}

/**
 * Accordion options settings form.
 */
function tab_options_style_settings_form($settings) {
  $form = array();
  $form['nav_style'] = array(
    '#type' => 'select',
    '#required' => TRUE,
    '#title' => t('Choose a navigation style'),
    '#default_value' => (isset($settings['nav_style'])) ? $settings['nav_style'] : FALSE,
    '#options' => array(
      'nav-tabs' => t('Tabs'),
      'nav-pills' => t('Pills'),
      'nav-pills_nav-stacked' => t('Stacked Pills'),
      'nav-tabs_nav-justified' => t('Justified Tabs'),
      'nav-pills_nav-justified' => t('Justified Pills'),
    ),
  );
  return $form;
}
