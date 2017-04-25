<?php

/**
 * @file
 * Preprocess term to replace term_url with the department link field.
 */

/**
 * Implements hook_preprocess_taxonomy_term().
 */
function ovpred_preprocess_taxonomy_term(&$variables) {
  if ($variables['elements']['#view_mode'] == 'alternate_link') {
    if (!empty($variables['field_department_website'])) {
      $variables['term_url'] = $variables['field_department_website'][LANGUAGE_NONE][0]['url'];
    }
    else {
      $variables['term_url'] = NULL;
    }
  }
}
