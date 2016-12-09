<?php
/**
 * @file
 * ovpred_article_feeds.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ovpred_article_feeds_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ovpred_articles_iowanow-xpathparser_1-html_entity_decode';
  $feeds_tamper->importer = 'ovpred_articles_iowanow';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['ovpred_articles_iowanow-xpathparser_1-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ovpred_articles_iowanow-xpathparser_10-explode';
  $feeds_tamper->importer = 'ovpred_articles_iowanow';
  $feeds_tamper->source = 'xpathparser:10';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['ovpred_articles_iowanow-xpathparser_10-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ovpred_articles_iowanow-xpathparser_3-timetodate';
  $feeds_tamper->importer = 'ovpred_articles_iowanow';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'timetodate';
  $feeds_tamper->settings = array(
    'date_format' => 'd-m-Y H:i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Unix timestamp to Date';
  $export['ovpred_articles_iowanow-xpathparser_3-timetodate'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ovpred_articles_iowanow-xpathparser_8-find_replace_regex';
  $feeds_tamper->importer = 'ovpred_articles_iowanow';
  $feeds_tamper->source = 'xpathparser:8';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/\\?(.*)/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['ovpred_articles_iowanow-xpathparser_8-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ovpred_articles_iowanow-xpathparser_9-find_replace';
  $feeds_tamper->importer = 'ovpred_articles_iowanow';
  $feeds_tamper->source = 'xpathparser:9';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'in_the_news',
    'replace' => 'external',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['ovpred_articles_iowanow-xpathparser_9-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ovpred_articles_iowanow-xpathparser_9-find_replace_1';
  $feeds_tamper->importer = 'ovpred_articles_iowanow';
  $feeds_tamper->source = 'xpathparser:9';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'news_feature',
    'replace' => 'ianow',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['ovpred_articles_iowanow-xpathparser_9-find_replace_1'] = $feeds_tamper;

  return $export;
}
