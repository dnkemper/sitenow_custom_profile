<?php
/**
 * @file
 * ovpred_articles.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ovpred_articles_taxonomy_default_vocabularies() {
  return array(
    'ovpred_article_tags' => array(
      'name' => 'OVPRED Article Tags',
      'machine_name' => 'ovpred_article_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
