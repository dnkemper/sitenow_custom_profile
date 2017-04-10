<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal, often
 * used as an alternative to directly editing or adding code to templates. Its
 * worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 *
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "uhd_base" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "uhd_base".
 * 2. Uncomment the required function to use.
 */

/**
 * Implements template_preprocess_html().
 */
function uhd_base_preprocess_html(&$variables) {
  // Add typekit javascript and load it.
  drupal_add_js('//use.typekit.net/fbq7djj.js', 'external');
  drupal_add_js('jQuery(document).ready(function () {try{Typekit.load();}catch(e){}});', 'inline');
}

/**
 * Implements template_preprocess_block().
 */
function uhd_base_preprocess_block(&$vars) {
  $vars['is_main_menu_block'] = FALSE;
  if ($vars['elements']['#block']->delta == 'main-menu') {
    $vars['is_main_menu_block'] = TRUE;
  }
}
