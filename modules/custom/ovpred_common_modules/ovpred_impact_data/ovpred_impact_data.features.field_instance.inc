<?php
/**
 * @file
 * ovpred_impact_data.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ovpred_impact_data_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ovpred_impact_data-field_ovpred_id_caption'
  $field_instances['node-ovpred_impact_data-field_ovpred_id_caption'] = array(
    'bundle' => 'ovpred_impact_data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Short caption to help give context to the data point. E.g. "million" or "patents".',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'highlight_homepage' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ovpred_id_caption',
    'label' => 'Caption',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-ovpred_impact_data-field_ovpred_id_data'
  $field_instances['node-ovpred_impact_data-field_ovpred_id_data'] = array(
    'bundle' => 'ovpred_impact_data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Data point',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'highlight_homepage' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ovpred_id_data',
    'label' => 'Data',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 12,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-ovpred_impact_data-field_ovpred_id_data_prefix'
  $field_instances['node-ovpred_impact_data-field_ovpred_id_data_prefix'] = array(
    'bundle' => 'ovpred_impact_data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add a prefix to the data point if required. E.g. $.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'highlight_homepage' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ovpred_id_data_prefix',
    'label' => 'Data prefix',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 4,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-ovpred_impact_data-field_ovpred_id_data_suffix'
  $field_instances['node-ovpred_impact_data-field_ovpred_id_data_suffix'] = array(
    'bundle' => 'ovpred_impact_data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add a suffix to the end of the data point. E.g. "st"',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'highlight_homepage' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ovpred_id_data_suffix',
    'label' => 'Data suffix',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 4,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-ovpred_impact_data-field_ovpred_id_description'
  $field_instances['node-ovpred_impact_data-field_ovpred_id_description'] = array(
    'bundle' => 'ovpred_impact_data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A short description about the data point. E.g. "UI portion of $18 million NSF ERC grant"',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'highlight_homepage' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ovpred_id_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 140,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A short description about the data point. E.g. "UI portion of $18 million NSF ERC grant"');
  t('Add a prefix to the data point if required. E.g. $.');
  t('Add a suffix to the end of the data point. E.g. "st"');
  t('Caption');
  t('Data');
  t('Data point');
  t('Data prefix');
  t('Data suffix');
  t('Description');
  t('Short caption to help give context to the data point. E.g. "million" or "patents".');

  return $field_instances;
}
