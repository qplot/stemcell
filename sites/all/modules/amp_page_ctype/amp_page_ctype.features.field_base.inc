<?php
/**
 * @file
 * amp_page_ctype.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function amp_page_ctype_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_header_page'
  $field_bases['field_header_page'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_header_page',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
