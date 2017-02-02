<?php

/**
 * @file
 */

// Plugin definition.
$plugin = array(
  'title' => t('Le Tigre'),
  'icon' => 'le_tigre_preview.png',
  'category' => t('OVPR layouts'),
  'theme' => 'le_tigre',
  'css' => '../../../css/layouts/le_tigre/le_tigre.layout.css',
  'regions' => array(
    'first' => t('Content'),
    'second' => t('Content Bottom First'),
    'third' => t('Content Bottom Second'),
  ),
);

/**
 * Implements hook_preprocess_le_tigre().
 */
function template_preprocess_le_tigre(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-le-tigre';
  $variables['attributes_array']['class'][] = 'panel-display--le-tigre';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'l-panel-region';
    $variables['region_attributes_array'][$name]['class'][] = 'le-tigre-region';
    $variables['region_attributes_array'][$name]['class'][] = 'le-tigre-region--' . drupal_clean_css_identifier($name);
  }
}
