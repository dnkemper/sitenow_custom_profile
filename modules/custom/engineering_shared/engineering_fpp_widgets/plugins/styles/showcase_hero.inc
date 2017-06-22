<?php

/**
 * @file
 * Accordion option styles.
 */

// Plugin registration.
$plugin = array(
  'title' => t('Showcase Hero'),
  'description' => t('Showcase hero options.'),
  'render pane' => 'showcase_hero_style_render_pane',
  'pane settings form' => 'showcase_hero_style_settings_form',
  'category' => t('Widgets'),
);

/**
 * Renders the pane content.
 */
function theme_showcase_hero_style_render_pane($content) {
  if (!empty($content)) {
    return theme('panels_pane', $content);
  }
}

/**
 * Accordion options settings form.
 */
function showcase_hero_style_settings_form($settings) {
  $form = array();
  $form['showcase_type'] = array(
    '#type' => 'textfield',
    '#title' => t('Type'),
    '#access' => FALSE,
    '#default_value' => 'hero',
  );
  $form['full_width'] = array(
    '#type' => 'checkbox',
    '#title' => t('Edge to Edge'),
    '#default_value' => (isset($settings['full_width'])) ? $settings['full_width'] : FALSE,
  );
  return $form;
}
