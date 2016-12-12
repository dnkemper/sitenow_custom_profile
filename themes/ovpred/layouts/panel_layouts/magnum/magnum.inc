<?php

/**
 * @file
 * Full Width layout for OVPR
 */

// Plugin definition.
$plugin = array(
  'title' => t('Magnum'),
  'icon' => 'magnum-preview.png',
  'category' => t('OVPR layouts'),
  'theme' => 'magnum',
  'css' => '../../../css/layouts/magnum/magnum.layout.css',
  'regions' => array(
    'first' => t('Content'),
  ),
);

/**
 * Implements hook_preprocess_magnum().
 */
function template_preprocess_magnum(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-magnum';
  $variables['attributes_array']['class'][] = 'panel-display--magnum';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'l-panel-region';
    $variables['region_attributes_array'][$name]['class'][] = 'magnum-region';
    $variables['region_attributes_array'][$name]['class'][] = 'magnum-region--' . drupal_clean_css_identifier($name);
  }
}
