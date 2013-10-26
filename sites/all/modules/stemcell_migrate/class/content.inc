<?php

class StemcellContentMigration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);

    // create source
    $query = Database::getConnection('default', 'stemcell')
      ->select('content', 'c')
      ->fields('c', array('id', 'name'));
    $this->source = new MigrateSourceSQL($query);

    // create destination
    $this->destination = new MigrateDestinationNode('page');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array('type' => 'int')
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $this->addFieldMapping('title', 'name');
    // $this->addFieldMapping('body', 'page_body');
  }
}

?>