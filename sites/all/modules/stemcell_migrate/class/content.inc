<?php

class StemcellContentMigration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);

    // create source
    $query = Database::getConnection('default', 'stemcell')
      ->select('jos_content', 'c')
      ->fields('c', array('id', 'title', 'introtext', 'created', 'modified', 'catid'));
    $query->addExpression('`fulltext`', 'full');
    $this->source = new MigrateSourceSQL($query);

    // create destination
    $this->destination = new MigrateDestinationNode('article');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array('type' => 'int')
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body:summary', 'introtext');
    $this->addFieldMapping('body', 'full');
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('changed', 'modified');
    $this->addFieldMapping('body:format')
         ->defaultValue('full_html');
    $this->addFieldMapping('comment')
         ->defaultValue('closed');
    $this->addFieldMapping('field_tags', 'catid')
         ->sourceMigration('Categories');
    $this->addFieldMapping('field_tags:source_type')
         ->defaultValue('tid');
         // ->arguments(array('source_type' => 'tid'));
    //$this->addFieldMapping('body', 'page_body');
  }
}

?>