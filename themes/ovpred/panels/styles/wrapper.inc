<?php

/**
 * @file
 * Custom panels full-width wrappers.
 */

// Plugin registration.
$plugin = array(
  'title' => t('Full width wrapper'),
  'description' => t('Set a full page wrapper on this content.'),
  'render pane' => 'ovpred_wrapper_style_render_pane',
  'render region' => 'ovpred_wrapper_style_render_region',
  'settings form' => 'ovpred_wrapper_settings_form',
  'pane settings form' => 'ovpred_wrapper_settings_form',
  'category' => t('OVPRED'),
  'hook theme'    => array(
    'wrapper_region' => array(
      'template' => 'wrapper-region',
      'path' => drupal_get_path('theme', 'ovpred') . '/panels/styles',
      'variables' => array(
        'content' => NULL,
        'settings' => NULL,
      ),
    ),
  ),
);

/**
 * Renders the pane content.
 */
function theme_ovpred_wrapper_style_render_pane($content) {
  if (!empty($content)) {
    return theme('panels_pane', $content);
  }
}

/**
 * Renders the region.
 */
function theme_ovpred_wrapper_style_render_region($variables) {
  if (!empty($variables)) {
    $content = '';

    foreach ($variables['panes'] as $pane_id => $pane_output) {

      $content .= $pane_output;
    }
    if (empty($content)) {
      return;
    }
    return theme('wrapper_region',
    array(
      'content' => $content,
      'settings' => $variables['settings'],
      'style' => $variables['style'],
    ));
  }
}

/**
 * Color preset settings form.
 */
function ovpred_wrapper_settings_form($style_settings) {
  $form = array();
  $form['preset_color'] = array(
    '#type' => 'select',
    '#title' => t('Choose color preset'),
    '#default_value' => (isset($style_settings['preset_color'])) ? $style_settings['preset_color'] : FALSE,
    '#options' => theme_ovpred_wrapper_color_preset_colors(),
  );

  return $form;
}

/**
 * Available color presets.
 *
 * @return array
 */
function theme_ovpred_wrapper_color_preset_colors() {
  return array(
    'no-color' => t('None'),
    'gray' => t('Gray'),
    'floralwhite' => t('Floral White'),
    'oldlace' => t('Old Lace'),
    'aliceblue' => t('Alice Blue'),
  );
}
