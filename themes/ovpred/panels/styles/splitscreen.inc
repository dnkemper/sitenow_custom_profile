<?php
/**
 * @file
 * Custom panels full-width wrappers.
 */

// Plugin registration
$plugin = array(
  'title' => t('Full width split screen wrapper'),
  'description' => t('Creates a two-column pane with full page wrapper with this content first and a secondary body area second.'),
  'render pane' => 'ovpred_splitscreen_wrapper_style_render_pane',
  'pane settings form' => 'ovpred_splitscreen_wrapper_settings_form',
  'category' => t('OVPRED'),
  /*'hook theme'    => array(
    'splitscreen_pane' => array(
      'template' => 'panels-pane--splitscreen',
       'path' => drupal_get_path('theme', 'ovpred') .'/panels/styles',
       'variables' => array(
         'content' => NULL,
         'settings' => NULL,
       ),
      ),
  ),*/
);

/**
 * Renders the pane content.
 */
function theme_ovpred_splitscreen_wrapper_style_render_pane($content) {
  if (!empty($content)) {
    return theme('panels_pane', $content);
  }
}

/**
 * Color preset settings form.
 */
function ovpred_splitscreen_wrapper_settings_form($settings) {
  $form = array();
  $form['preset_color'] = array(
    '#type' => 'select',
    '#title' => t('Choose color preset'),
    '#default_value' => (isset($settings['preset_color'])) ? $settings['preset_color'] : FALSE,
    '#options' => theme_ovpred_splitscreen_color_preset_colors(),
  );
  $form['secondary_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Secondary title'),
    '#default_value' => $settings['secondary_title'],
  );
  $form['secondary_textarea'] = array(
    '#type' => 'text_format',
    '#title' => t('Secondary text area'),
    '#default_value' => $settings['secondary_textarea']['value'],
    '#format' => NULL,
  );

  return $form;
}

/**
 * Available color presets.
 * @return array
 */
function theme_ovpred_splitscreen_color_preset_colors() {
  return array(
    'no-color' => t('None'),
    'gray' => t('Gray'),
    'floralwhite' => t('Floral White'),
    'oldlace' => t('Old Lace'),
    'aliceblue' => t('Alice Blue'),
  );
}
