<?php

/**
 * @file
 * engineering_fpp_widgets.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function engineering_fpp_widgets_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_accordion_body|field_collection_item|field_accordion_items|form';
  $field_group->group_name = 'group_accordion_body';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_accordion_items';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_body',
      1 => 'field_icon',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-accordion-body field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_accordion_body|field_collection_item|field_accordion_items|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_showcase_content|field_collection_item|field_showcase_items|form';
  $field_group->group_name = 'group_showcase_content';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_showcase_items';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_caption',
      1 => 'field_image',
      2 => 'field_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-showcase-content field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_showcase_content|field_collection_item|field_showcase_items|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_body|field_collection_item|field_tab_items|form';
  $field_group->group_name = 'group_tab_body';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_tab_items';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_body',
      1 => 'field_icon',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-tab-body field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_tab_body|field_collection_item|field_tab_items|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');

  return $field_groups;
}
