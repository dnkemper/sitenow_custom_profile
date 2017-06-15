<?php
/**
 * @file
 * Theme functions
 */

// Include all files from the includes directory.
$includes_path = dirname(__FILE__) . '/includes/*.inc';
foreach (glob($includes_path) as $filename) {
  require_once dirname(__FILE__) . '/includes/' . basename($filename);
}

/**
 * Implements template_preprocess_uiowa_events_pane().
 */
function engineering_preprocess_uiowa_events_pane(&$vars) {
  if (isset($vars['pane'])) {
    $pane = $vars['pane'];
    if (!empty($pane->style) && $pane->style['settings']['uiowa_events_type'] == 'grid') {
      $vars['theme_hook_suggestions'][] = 'uiowa_events_pane__grid';
    }
  }
}

/**
 * Implements template_preprocess_uiowa_events_teaser().
 */
function engineering_preprocess_uiowa_events_teaser(&$vars) {
  if ($vars['event']['instance_all_day']) {
    $vars['event']['date_string'] = date('l, F, j', strtotime($vars['event']['instance_start']));
  }
  else {
    $vars['event']['date_string'] = date('l, F, j - g:i a', strtotime($vars['event']['instance_start']));
    if (isset($vars['event']['end'])) {
      $vars['event']['date_string'] .= ' to ' . date('g:i a', strtotime($vars['event']['instance_end']));
    }
  }

  // If we have a description, strip tags and trim it.
  if (!empty($vars['event']['description'])) {
    $desc = strip_tags($vars['event']['description']);
    if (strlen($desc) < 200) {
      $vars['description'] = $desc;
    }
    else {
      $desc = preg_replace('/\s+?(\S+)?$/', '', substr($desc, 0, 200));
      $vars['description'] = $desc . '...';
    }
  }

  // If we have a location print it.
  if (!empty($vars['event']['location'])) {
    $vars['location'] = $vars['event']['location'];
  }
}
