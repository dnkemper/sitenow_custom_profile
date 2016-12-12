<?php

/**
 * @file
 * Zoolander 4 region layout
 */

// Plugin definition.
$plugin = array(
  'title' => t('Zoolander'),
  'icon' => 'zoolander_preview.png',
  'category' => t('OVPR layouts'),
  'theme' => 'zoolander',
  'css' => '../../../css/layouts/zoolander/zoolander.layout.css',
  'regions' => array(
    'first' => t('Content 1'),
    'second' => t('Content 2'),
    'third' => t('Content 3'),
    'fourth' => t('Content 4'),
  ),
);

/**
 * Implements hook_preprocess_zoolander().
 */
function template_preprocess_zoolander(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-zoolander';
  $variables['attributes_array']['class'][] = 'panel-display--zoolander';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'l-panel-region';
    $variables['region_attributes_array'][$name]['class'][] = 'zoolander-region';
    $variables['region_attributes_array'][$name]['class'][] = 'zoolander-region--' . drupal_clean_css_identifier($name);
  }
}
