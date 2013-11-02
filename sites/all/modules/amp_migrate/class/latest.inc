<?php

class StemcellLatestMigration extends XMLMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'title' => t('Aricle Title'),
    );
    // create source
    $xml_folder = DRUPAL_ROOT . '/' . drupal_get_path('module', 'amp_migrate') . '/data/';
    $items_url = $xml_folder . 'ahead.xml';
    $item_xpath = '/rdf:RDF/items/item';
    $item_ID_xpath = 'title';

    // create destination
    $this->destination = new MigrateDestinationNode('article');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'title' => array('type' => 'varchar')
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $items_class = new MigrateItemsXML($items_url, $item_xpath, $item_ID_xpath);
    $this->source = new MigrateSourceMultiItems($items_class, $fields);
    $this->addFieldMapping('title', 'title')
         ->xpath('title');
  }
}

?>