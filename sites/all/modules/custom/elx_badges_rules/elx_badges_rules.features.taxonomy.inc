<?php
/**
 * @file
 * elx_badges_rules.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function elx_badges_rules_taxonomy_default_vocabularies() {
  return array(
    'userpoints' => array(
      'name' => 'Userpoints',
      'machine_name' => 'userpoints',
      'description' => 'Automatically created by the userpoints module',
      'hierarchy' => 1,
      'module' => 'userpoints',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
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
