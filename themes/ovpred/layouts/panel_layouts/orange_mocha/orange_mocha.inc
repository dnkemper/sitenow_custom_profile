<?php

// Plugin definition
$plugin = array(
  'title' => t('Orange Mocha'),
  'category' => t('OVPR layouts'),
  'icon' => 'orange-mocha.png',
  'theme' => 'orange_mocha',
  'css' => '../../../css/layouts/orange-mocha/orange-mocha.layout.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left'),
    'center' => t('Center'),
    'right' => t('Right'),
  ),
);

/**
 * Implements hook_preprocess_williams().
 *
 * Loops through each region and adds classes as an array entry.
 */
function template_preprocess_orange_mocha(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-orange-mocha';
  $variables['attributes_array']['class'][] = 'panel-display--orange-mocha';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'orange-mocha-region';
    $variables['region_attributes_array'][$name]['class'][] = 'orange-mocha-region--' . drupal_clean_css_identifier($name);
  }
}
