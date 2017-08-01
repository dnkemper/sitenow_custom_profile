<?php

/**
 * @file
 * Theme and preprocess functions for nodes.
 */

/**
 * Implements hook_preprocess_node().
 */
function ovpred_compliance_preprocess_node(&$variables) {

  // Created a formatted timestamp if we are to show the timestamp on this node.
  if (!empty($variables['display_timestamp'])) {
    $variables['formatted_timestamp'] = format_date($variables['revision_timestamp'], 'custom', 'F j, Y');
  }
}
