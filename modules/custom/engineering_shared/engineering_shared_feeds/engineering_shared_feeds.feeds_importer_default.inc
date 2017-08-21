<?php

/**
 * @file
 * engineering_shared_feeds.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function engineering_shared_feeds_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'department_articles';
  $feeds_importer->config = array(
    'name' => 'Department Articles',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExXml',
      'config' => array(
        'context' => array(
          'value' => 'nodes/node',
        ),
        'sources' => array(
          'title' => array(
            'name' => 'Title',
            'value' => 'title',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '1',
          ),
          'body' => array(
            'name' => 'Body',
            'value' => 'body',
            'raw' => 1,
            'inner' => 0,
            'debug' => 0,
            'weight' => '2',
          ),
          'nid' => array(
            'name' => 'NID',
            'value' => 'nid',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '3',
          ),
          'create' => array(
            'name' => 'Create',
            'value' => 'created',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '4',
          ),
          'audiences' => array(
            'name' => 'Audiences',
            'value' => 'field_audience_multi',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '5',
          ),
          'author' => array(
            'name' => 'Author',
            'value' => 'field_author',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '6',
          ),
          'source' => array(
            'name' => 'Source',
            'value' => 'field_article_source',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '7',
          ),
          'image' => array(
            'name' => 'Image',
            'value' => 'image_url',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '8',
          ),
          'caption' => array(
            'name' => 'Caption',
            'value' => 'field_image_caption',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '9',
          ),
          'tags' => array(
            'name' => 'Tags',
            'value' => 'field_tags',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '10',
          ),
        ),
        'display_errors' => 0,
        'debug_mode' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'use_tidy' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'nid',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'audiences',
            'target' => 'field_audience_multi:label',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'author',
            'target' => 'field_author',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'source',
            'target' => 'field_article_source',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Blank source 1',
            'target' => 'field_imported',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'create',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'image',
            'target' => 'field_external_image',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'nid',
            'target' => 'field_external_nid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'caption',
            'target' => 'field_image_caption',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'tags',
            'target' => 'field_tags',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'Blank source 2',
            'target' => 'field_external_image_cropped',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'article',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['department_articles'] = $feeds_importer;

  return $export;
}
