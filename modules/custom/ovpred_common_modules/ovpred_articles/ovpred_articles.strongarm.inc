<?php
/**
 * @file
 * ovpred_articles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ovpred_articles_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ovpred_article';
  $strongarm->value = array(
    'view_modes' => array(
      'ovpred_article_list' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'testimonial' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '11',
        ),
        'redirect' => array(
          'weight' => '8',
        ),
        'xmlsitemap' => array(
          'weight' => '10',
        ),
        'metatags' => array(
          'weight' => '12',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ovpred_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ovpred_article_contact';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '5',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ovpred_article_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ovpred_article';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ovpred_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ovpred_article_contact';
  $strongarm->value = array();
  $export['menu_options_ovpred_article_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ovpred_article';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ovpred_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ovpred_article_contact';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ovpred_article_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ovpred_article';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_ovpred_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ovpred_article_contact';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_ovpred_article_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ovpred_article';
  $strongarm->value = '1';
  $export['node_preview_ovpred_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ovpred_article_contact';
  $strongarm->value = '1';
  $export['node_preview_ovpred_article_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_revision_delete_number_ovpred_article';
  $strongarm->value = '3';
  $export['node_revision_delete_number_ovpred_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_revision_delete_number_ovpred_article_contact';
  $strongarm->value = '3';
  $export['node_revision_delete_number_ovpred_article_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_revision_delete_track_ovpred_article';
  $strongarm->value = 1;
  $export['node_revision_delete_track_ovpred_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_revision_delete_track_ovpred_article_contact';
  $strongarm->value = 1;
  $export['node_revision_delete_track_ovpred_article_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ovpred_article';
  $strongarm->value = 0;
  $export['node_submitted_ovpred_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ovpred_article_contact';
  $strongarm->value = 0;
  $export['node_submitted_ovpred_article_contact'] = $strongarm;

  return $export;
}
