<?php

/**
 * @file
 * Theme and preprocess functions for pages.
 */

/**
 * Implements hook_preprocess_html().
 */
function engineering_preprocess_html(&$vars) {
  // Include typkit assets.
  $typekit_id = 'fje4ojm';
  if (!empty($typekit_id)) {
    drupal_add_js('https://use.typekit.net/' . $typekit_id . '.js');
    drupal_add_js('try{Typekit.load();}catch(e){}', array('type' => 'inline'));
  }
}
