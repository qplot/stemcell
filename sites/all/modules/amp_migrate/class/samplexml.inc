<?php

class StemcellSampleMigration extends XMLMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'name' => t('Position name'),
    );
    // create source
    $xml_folder = DRUPAL_ROOT . '/' . drupal_get_path('module', 'migrate_example') . '/xml/';
    $items_url = $xml_folder . 'positions.xml';
    $item_xpath = 'position';
    $item_ID_xpath = 'sourceid';

    // create destination
    $this->destination = new MigrateDestinationNode('article');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'sourceid' => array('type' => 'int')
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $items_class = new MigrateItemsXML($items_url, $item_xpath, $item_ID_xpath);
    $this->source = new MigrateSourceMultiItems($items_class, $fields);
    $this->addFieldMapping('title', 'name')
         ->xpath('name');
  }
}

?>