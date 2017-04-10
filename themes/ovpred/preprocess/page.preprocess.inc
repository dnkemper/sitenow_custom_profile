<?php

/**
 * @file
 */

/**
 * Implements hook_preprocess_page().
 */
function ovpred_preprocess_page(&$variables) {

  // Pass the $needs_container variable to the page template.
  $needs_container = TRUE;
  // Array with full width layouts.
  $full_width_layouts = array('magnum', 'blue_steel', 'orange_mocha');

  // Add the base page class into page template.
  $variables['classes_array'][] = "l-page";

  // Check to see if we are a panelized node.
  if (!empty($variables['node']->panelizer)) {
    $variables['classes_array'][] = "panelized";

    // Add the panel layout being used.
    if ($variables['node']->panelizer['default']->display->layout) {
      $variables['classes_array'][] = $variables['node']->panelizer['default']->display->layout;

      // Check to see if the panelized layout is a full width layout.
      foreach ($full_width_layouts as $layout) {
        if ($variables['node']->panelizer['default']->display->layout == $layout) {
          $needs_container = FALSE;
        }
      }
    }
  }

  // Check to see if we are using a page manager panel.
  if (panels_get_current_page_display()) {
    // Add the panel layout being used.
    $panel_layout = panels_get_current_page_display()->layout;
    $variables['classes_array'][] = $panel_layout;

    // Check to see if the panel layout is a full width layout.
    foreach ($full_width_layouts as $layout) {
      if ($panel_layout == $layout) {
        $needs_container = FALSE;
      }
    }
  }

  // Pass container flag to page tempalte.
  $variables['content_container'] = $needs_container;
}
