<?php

/**
 * @file uiowa-events-teaser.preprocess.inc
 */

/**
 * Implements hook_preprocess_uiowa_events_teaser().
 */
function ovpred_preprocess_uiowa_events_teaser(&$vars) {
  // Format date/time.
  if (isset($vars['event']['instance_start'])) {
    $start_time = strtotime($vars['event']['instance_start']);
    $vars['event']['date_string'] = format_date($start_time, 'custom', 'M j gA');
  }
}
