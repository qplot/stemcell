<?php

class StemcellMenuMigration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);

    // create source
    // Create a CSV source.
    $columns = array(
      0 => array('level', 'Level'),
      1 => array('first', 'First Level'),
      2 => array('second', 'Second Level'),
      3 => array('third', 'Third Level'),
      4 => array('progress', 'Progress'),
      5 => array('key', 'Key'),
      6 => array('parent', 'Parent Key'),
      7 => array('prefix', 'Prefix'),
      8 => array('postfix', 'Postfix'),
      9 => array('components', 'Components'),
      11 => array('weight', 'Weight'),
    );

    $csv_folder = DRUPAL_ROOT . '/' . drupal_get_path('module', 'amp_migrate') . '/data/';
    $this->source = new MigrateSourceCSV(
        $csv_folder . 'menu.csv',
        $columns,
        array('header_rows' => 1)
    );

    // create destination
    $this->destination = new MigrateDestinationTerm('navs');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'key' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        )
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    $this->addFieldMapping('name', 'third');
    $this->addFieldMapping('parent', 'parent')
         ->sourceMigration('Menu');
    $this->addFieldMapping('weight', 'weight');
    $this->addFieldMapping('field_nav_url', 'key');
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    // set the weight to be same order as import
    $row->weight = $row->csvrownum;

    // make sure the name is captured for all levels
    if (empty($row->third))
      $row->third = $row->second;
    if (empty($row->second))
      $row->third = $row->first;

    return TRUE;
  }  
}

?>