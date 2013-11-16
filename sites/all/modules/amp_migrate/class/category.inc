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

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    $replaces = array(
      '-' => 'undefined',
      'Test' => 'archive',
      'Celebrating 10 Years of hESC Cell Lines' => 'In the Lab',
      'Additional Excerpts from hESC Interviews' => 'In the Lab',
      'Stem Cells Community' => 'In the Lab',
      'Interviews' => 'In the Lab',
      'Lab Featured Paper' => 'In the Lab',
      'MyBlog' => 'Archive',
      'IFATS' => 'Meeting Reports',
      'Meeting Reports' => 'Meeting Reports',
      'What is an Adult Stem Cell?' => 'Archive',
      'What is an Embryonic Stem Cell?' => 'Archive',
      'Stem Cells Primer' => 'Archive',
      'Stem Cells and Diseases' => 'Archive',
      'Embryonic Stem Cells/Induced Pluripotent Stem Cell' => 'Archive',
      'Tissue Specific Stem Cells' => 'Archive',
      'Canter Stem Cells' => 'Archive',
      'The Stem Cells Niche' => 'Archive',
      'Stem Cell Genomics and Proteomics' => 'undefined',
      'Translational and Clinical Research' => 'Archive',
      'Most Read' => 'Archive',
      'Most Cited' => 'Archive',
      'About-misc' => 'Archive',
      'Misc' => 'Archive',
      'Partners' => 'Archive',
      'YIA Reference' => 'SC Young Investigator Award',
      'Latest News' => 'Article Scans',
      'More Stem Cells in the News' => 'News',
      'STEM CELLS Papers in the Headlines' => 'News',
      'Stem Cells Portal and Journal News' => 'News',
      'Press Releases from AlphaMed Press' => 'Press Releases',
      'Stem Cells Translational Medicine News' => 'News',
      'Featured Societies' => 'Archive',
      'Featured Labs' => 'In the Lab',
      'Societies' => 'Archive',
      'The Catholic Institute of Cell Therapy' => 'Archive',
      'Featured Resources' => 'Archive',
      'Companies' => 'Archive',
      'Research Tools' => 'Archive',
      'Articles' => 'Archive',
      'Labs' => 'Archive',
      'Resources-Uncategorized' => 'Archive',
      'Podcasts' => 'Archive',
      'General' => 'Archive',
      'Innovators and Issues' => 'Innovators and Issues',
      'Stem Cells 100' => 'undefined',
      'Courses & Training' => 'undefined',
      'Interesting Stem Cells Sites' => 'undefined',
      'Journal Club' => 'undefined',
      'Stem Cells Translational Medicine' => 'Archive',
      'Young Investigator Award' => 'undefined',
      'Sign Up' => 'Award',
    );

    // find if title is in the keys
    if (array_key_exists($row->title, $replaces)) {
      $row->title = $replaces[$row->title];
    } else {
      $row->title = "undefined";
    }

    return TRUE;
  }  
}

?>