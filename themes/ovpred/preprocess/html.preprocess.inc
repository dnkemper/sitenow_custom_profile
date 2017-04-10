<?php

/**
 * @file
 */

/**
 * Implements hook_preprocess_html().
 */
function ovpred_preprocess_html(&$variables) {

  // Include typkit assets.
  drupal_add_js('https://use.typekit.net/hfk5jun.js');
  drupal_add_js('try{Typekit.load();}catch(e){}', array('type' => 'inline'));

  // Add the term vocabulary as a body class for term pages.
  if (arg(0) == 'taxonomy' && arg(1) == 'term') {
    $term = taxonomy_term_load(arg(2));
    $variables['classes_array'][] = 'vocabulary-' . strtolower($term->vocabulary_machine_name);
  }

  // Add sidebar info.
  if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
    $variables['classes_array'][] = 'two_sidebars';
  }
  elseif (!empty($variables['page']['sidebar_first'])) {
    $variables['classes_array'][] = 'one_sidebar sidebar_first';
  }
  elseif (!empty($variables['page']['sidebar_second'])) {
    $variables['classes_array'][] = 'one_sidebar sidebar_second';
  }
  else {
    $variables['classes_array'][] = 'no_sidebars';
  }
}
