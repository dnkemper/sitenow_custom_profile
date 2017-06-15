<?php
/**
 * @file
 * Theme and preprocess functions for fields.
 */

function engineering_preprocess_field(&$vars) {
  // Remove field level clearfixing.
  $clearfix = array_search('clearfix', $vars['classes_array']);
  if (!empty($clearfix)) {
    unset($vars['classes_array'][$clearfix]);
  }

  // Switch on field_name.
  switch ($vars['element']['#field_name']) {
    case 'field_tags':
      // Add classes for the tag items.
      foreach($vars['items'] as &$item) {
        $item['#options']['attributes']['class'] = 'label label-default font-smoothing-on';
      }
      break;

  }

  // Check if the field is rendered from a specific view_mode.
  if (isset($vars['element'])) {
    $element = $vars['element'];
    $vars['theme_hook_suggestions'][] = 'field__' . $element['#field_name'] . '__' . $element['#bundle'] . '__' . $element['#view_mode'];
  }
}
