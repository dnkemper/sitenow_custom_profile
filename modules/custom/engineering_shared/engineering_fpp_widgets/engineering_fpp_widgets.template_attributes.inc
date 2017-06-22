<?php

/**
 * @file
 * Template attributes for the engineering_fpp_widgets feature.
 */

/**
 * Custom function add template attributes.
 *
 * @param object $variables
 *   The variables object to write to.
 */
function set_template_attributes(&$variables) {
  // Get layout name and modify to mimic original template class name.
  $layout_name = str_replace('_', '-', $variables['theme_hook_original']);
  $layout_name = str_replace('radix-', '', $layout_name);
  // Add original template classes.
  $variables['attributes_array']['class'] = array(
    'panel-display',
    $layout_name,
    'clearfix',
  );

  // Write css_id to attributes array as id.
  if (!empty($variables['css_id'])) {
    $variables['attributes_array']['id'] = $variables['css_id'];
  }
  return $variables;
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_bartlett_flipped(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_bartlett(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_boxton(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_brenham_flipped(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_brenham(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_brown(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_bryant_flipped(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_bryant(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_burr_flipped(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_burr(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_geary(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_harris(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_hewston_flipped(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_hewston(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_mccoppin(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_moscone_flipped(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_moscone(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_phelan(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_pond(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_rolph(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_sanderson_flipped(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_sanderson(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_shelby_flipped(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_shelby(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_sutro_double(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_sutro(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_taylor_flipped(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_taylor(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_webb_flipped(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_webb(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}

/**
 * Implements template_preprocess_hook().
 */
function template_preprocess_radix_whelan(&$variables) {
  // Custom function to add appropriate attribute info.
  set_template_attributes($variables);
}
