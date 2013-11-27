<?php
/**
 * @file
 * amp_tag_vtype.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function amp_tag_vtype_taxonomy_default_vocabularies() {
  return array(
    'navs' => array(
      'name' => 'Navs',
      'machine_name' => 'navs',
      'description' => 'Navigation menus',
      'hierarchy' => 1,
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
