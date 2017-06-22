<?php

/**
 * @file
 * engineering_fpp_widgets.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function engineering_fpp_widgets_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'accordion';
  $fieldable_panels_pane_type->title = 'Accordion';
  $fieldable_panels_pane_type->description = 'Create accordion styled content that expands and collapses. See <a href="https://getbootstrap.com/javascript/#collapse-example-accordion">Bootstrap Accordion</a>';
  $export['accordion'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'image_gallery';
  $fieldable_panels_pane_type->title = 'Image Gallery';
  $fieldable_panels_pane_type->description = '';
  $export['image_gallery'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'showcases';
  $fieldable_panels_pane_type->title = 'Showcases';
  $fieldable_panels_pane_type->description = '';
  $export['showcases'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'tabs';
  $fieldable_panels_pane_type->title = 'Tabs';
  $fieldable_panels_pane_type->description = 'Create togglable tabbed content. See: <a href="https://getbootstrap.com/javascript/#tabs-examples"> Bootstrap Tabs</a>.';
  $export['tabs'] = $fieldable_panels_pane_type;

  return $export;
}
