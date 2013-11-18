<?php

function amp_migrate_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'stemcell' => array(
        'title' => t('AMP Stemcell'),
      ),
    ),
    'migrations' => array(
      'Content' => array(
        'class_name' => 'StemcellContentMigration',
        'group_name' => 'stemcell',
      ),
      'Categories' => array(
        'class_name' => 'StemcellCategoriesMigration',
        'group_name' => 'stemcell',
      ),
      'Sample' => array(
        'class_name' => 'StemcellSampleMigration',
        'group_name' => 'stemcell',
      ),
      'Latest' => array(
        'class_name' => 'StemcellLatestMigration',
        'group_name' => 'stemcell',
      ),
      'Menu' => array(
        'class_name' => 'StemcellMenuMigration',
        'group_name' => 'stemcell',
      ),
    ),
  );
  return $api;
}

?>