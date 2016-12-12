<?php
/**
 * @file
 * ovpred_articles.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ovpred_articles_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ovpred_article-body'
  $field_instances['node-ovpred_article-body'] = array(
    'bundle' => 'ovpred_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'ovpred_article_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ovpred_article_teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-ovpred_article-field_ovpred_article_by_line'
  $field_instances['node-ovpred_article-field_ovpred_article_by_line'] = array(
    'bundle' => 'ovpred_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide a by line for this article. "By " is provided for you.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ovpred_article_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ovpred_article_by_line',
    'label' => 'By Line',
    'required' => 0,
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-ovpred_article-field_ovpred_article_contact'
  $field_instances['node-ovpred_article-field_ovpred_article_contact'] = array(
    'bundle' => 'ovpred_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 2,
      ),
      'ovpred_article_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ovpred_article_contact',
    'label' => 'Contacts',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 1,
          'delete_references' => 0,
          'label_plural' => 'contacts',
          'label_singular' => 'contact',
          'match_operator' => 'CONTAINS',
          'override_labels' => 1,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-ovpred_article-field_ovpred_article_ext_url'
  $field_instances['node-ovpred_article-field_ovpred_article_ext_url'] = array(
    'bundle' => 'ovpred_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The URL to the article, on an external website.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'ovpred_article_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ovpred_article_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ovpred_article_ext_url',
    'label' => 'External URL',
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
        'url_cutoff' => '',
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 255,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-ovpred_article-field_ovpred_article_ian_url'
  $field_instances['node-ovpred_article-field_ovpred_article_ian_url'] = array(
    'bundle' => 'ovpred_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The URL to the Iowa Now article on now.uiowa.edu.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'ovpred_article_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ovpred_article_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ovpred_article_ian_url',
    'label' => 'IowaNow URL',
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
        'url_cutoff' => '',
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 255,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-ovpred_article-field_ovpred_article_image'
  $field_instances['node-ovpred_article-field_ovpred_article_image'] = array(
    'bundle' => 'ovpred_article',
    'deleted' => 0,
    'description' => 'Upload an image to support this content.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'ovpred_article_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ovpred_article_teaser' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'ovpred_article_teaser',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'teaser',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ovpred_article_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images/ovpred_article',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '4 MB',
      'max_resolution' => '1500x1500',
      'min_resolution' => '300x200',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 'upload',
          'youtube' => 0,
        ),
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(
          'ovpred_article_teaser' => 'ovpred_article_teaser',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
      ),
      'type' => 'media_generic',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-ovpred_article-field_ovpred_article_img_ovr'
  $field_instances['node-ovpred_article-field_ovpred_article_img_ovr'] = array(
    'bundle' => 'ovpred_article',
    'deleted' => 0,
    'description' => 'Upload an image to support this content and override the one provided by Iowa Now.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'ovpred_article_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ovpred_article_teaser' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'ovpred_article_teaser',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'teaser',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ovpred_article_img_ovr',
    'label' => 'Image Override',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images/ovpred_article_override',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '4 MB',
      'max_resolution' => '1500x1500',
      'min_resolution' => '300x300',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 'upload',
          'youtube' => 0,
        ),
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          'ovpred_article_teaser' => 'ovpred_article_teaser',
        ),
        'manualcrop_styles_list' => array(
          'ovpred_article_teaser' => 'ovpred_article_teaser',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
      ),
      'type' => 'media_generic',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-ovpred_article-field_ovpred_article_source'
  $field_instances['node-ovpred_article-field_ovpred_article_source'] = array(
    'bundle' => 'ovpred_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The publication source is the news service, blog or other publication name. E.x. NPR or Daily Iowan.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'ovpred_article_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ovpred_article_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ovpred_article_source',
    'label' => 'Publication Source',
    'required' => 0,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-ovpred_article-field_ovpred_article_tags'
  $field_instances['node-ovpred_article-field_ovpred_article_tags'] = array(
    'bundle' => 'ovpred_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter any associated tags.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'ovpred_article_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ovpred_article_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ovpred_article_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-ovpred_article-field_ovpred_article_type'
  $field_instances['node-ovpred_article-field_ovpred_article_type'] = array(
    'bundle' => 'ovpred_article',
    'default_value' => array(
      0 => array(
        'value' => 'local',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'ovpred_article_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ovpred_article_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ovpred_article_type',
    'label' => 'Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-ovpred_article_contact-field_ovpred_ac_department_title'
  $field_instances['node-ovpred_article_contact-field_ovpred_ac_department_title'] = array(
    'bundle' => 'ovpred_article_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'ovpred_article_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ovpred_ac_department_title',
    'label' => 'Department/Title',
    'required' => 0,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-ovpred_article_contact-field_ovpred_ac_email'
  $field_instances['node-ovpred_article_contact-field_ovpred_ac_email'] = array(
    'bundle' => 'ovpred_article_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
      'ovpred_article_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ovpred_ac_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-ovpred_article_contact-field_ovpred_ac_telephone'
  $field_instances['node-ovpred_article_contact-field_ovpred_ac_telephone'] = array(
    'bundle' => 'ovpred_article_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
      'ovpred_article_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ovpred_ac_telephone',
    'label' => 'Telephone',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('By Line');
  t('Contacts');
  t('Department/Title');
  t('Email');
  t('Enter any associated tags.');
  t('External URL');
  t('Image');
  t('Image Override');
  t('IowaNow URL');
  t('Provide a by line for this article. "By " is provided for you.');
  t('Publication Source');
  t('Tags');
  t('Telephone');
  t('The URL to the Iowa Now article on now.uiowa.edu.');
  t('The URL to the article, on an external website.');
  t('The publication source is the news service, blog or other publication name. E.x. NPR or Daily Iowan.');
  t('Type');
  t('Upload an image to support this content and override the one provided by Iowa Now.');
  t('Upload an image to support this content.');

  return $field_instances;
}
