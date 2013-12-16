<?php
/**
 * @file
 * amp_title_vtype.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function amp_title_vtype_taxonomy_default_vocabularies() {
  return array(
    'titles' => array(
      'name' => 'Titles',
      'machine_name' => 'titles',
      'description' => 'Includes a list of titles that can be added to the article.',
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
