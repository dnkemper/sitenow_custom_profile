<?php

/**
 * @file
 * Ferrari 4 region layout
 */

// Plugin definition.
$plugin = array(
  'title' => t('Ferrari'),
  'icon' => 'ferrari_preview.png',
  'category' => t('OVPR layouts'),
  'theme' => 'ferrari',
  'css' => '../../../css/layouts/ferrari/ferrari.layout.css',
  'regions' => array(
    'first' => t('Content 1'),
    'second' => t('Content 2'),
    'third' => t('Content 3'),
    'fourth' => t('Content 4'),
  ),
);

/**
 * Implements hook_preprocess_ferrari().
 */
function template_preprocess_ferrari(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-ferrari';
  $variables['attributes_array']['class'][] = 'panel-display--ferrari';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'l-panel-region';
    $variables['region_attributes_array'][$name]['class'][] = 'ferrari-region';
    $variables['region_attributes_array'][$name]['class'][] = 'ferrari-region--' . drupal_clean_css_identifier($name);
  }
}
