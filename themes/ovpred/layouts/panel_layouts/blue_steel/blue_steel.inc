<?php

/**
 * @file
 */

// Plugin definition.
$plugin = array(
  'title' => t('Blue Steel'),
  'icon' => 'blue_steel_preview.png',
  'category' => t('OVPR layouts'),
  'theme' => 'blue_steel',
  'css' => '../../../css/layouts/blue_steel/blue_steel.layout.css',
  'regions' => array(
    'first' => t('Content'),
    'second' => t('Content Bottom First'),
    'third' => t('Content Bottom Second'),
  ),
);

/**
 * Implements hook_preprocess_blue_steel().
 */
function template_preprocess_blue_steel(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-blue-steel';
  $variables['attributes_array']['class'][] = 'panel-display--blue-steel';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'l-panel-region';
    $variables['region_attributes_array'][$name]['class'][] = 'blue-steel-region';
    $variables['region_attributes_array'][$name]['class'][] = 'blue-steel-region--' . drupal_clean_css_identifier($name);
  }
}
