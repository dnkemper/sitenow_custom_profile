<?php

/**
 * @file
 * engineering_shared_taxonomies.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function engineering_shared_taxonomies_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-audiences-field_redirect_url'.
  $field_instances['taxonomy_term-audiences-field_redirect_url'] = array(
    'bundle' => 'audiences',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Anonymous users will be redirected when visiting this term page. Defaults to the homepage if nothing is provided.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_redirect_url',
    'label' => 'Redirect URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Anonymous users will be redirected when visiting this term page. Defaults to the homepage if nothing is provided.');
  t('Redirect URL');

  return $field_instances;
}
