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
    $item_xpath = "item";
    $item_ID_xpath = 'title';

    // create destination
    $this->destination = new MigrateDestinationNode('article');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $items_class = new MigrateItemsXML($items_url, $item_xpath, $item_ID_xpath);
    $this->source = new MigrateSourceMultiItems($items_class, $fields);
    $this->addFieldMapping('title', 'title')
         ->xpath('title');
  }

  public function preImport() {
    parent::preImport();

    // load xml file 
    $file = file_get_contents('http://theoncologist.alphamedpress.org/rss/ahead.xml');

    // remove the default namespace
    $nfile = str_replace(" xmlns=\"http://purl.org/rss/1.0/\"", "", $file);

    // save the file locally
    $xml_folder = DRUPAL_ROOT . '/' . drupal_get_path('module', 'amp_migrate') . '/data/';
    $items_url = $xml_folder . 'ahead.xml';
    file_put_contents($items_url, $nfile);
  }
}

?>