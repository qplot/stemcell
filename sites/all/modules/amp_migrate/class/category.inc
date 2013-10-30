<?php

class StemcellCategoriesMigration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);

    // create source
    $query = Database::getConnection('default', 'stemcell')
      ->select('jos_categories', 'c')
      ->fields('c', array('id', 'title'));
    $this->source = new MigrateSourceSQL($query);

    // create destination
    $this->destination = new MigrateDestinationTerm('tags');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array('type' => 'int')
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $this->addFieldMapping('name', 'title');
  }
}

?>