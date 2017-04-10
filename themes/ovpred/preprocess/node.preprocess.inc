<?php

/**
 * @file
 */

/**
 * Implements hook_preprocess_node().
 */
function ovpred_preprocess_node(&$variables) {
  if ($variables['type'] == 'article' || $variables['type'] == 'ovpred_article') {
    $variables['date'] = format_date($variables['created'], 'custom', 'F j, Y');
  }
  if ($variables['type'] == 'featured_content') {
    $variables['feature_link'] = $variables['field_feature_link'][LANGUAGE_NONE][0]['url'];
  }
  if ($variables['type'] == 'person') {
    if (!empty($variables['field_person_headshot'])) {
      $variables['classes_array'][] = 'person-photo';
    }
  }

  // Add theme hook suggestion for the content type + view mode.
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'];
}
