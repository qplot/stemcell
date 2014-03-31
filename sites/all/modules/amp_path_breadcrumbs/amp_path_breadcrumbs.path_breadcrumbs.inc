<?php
/**
 * @file
 * amp_path_breadcrumbs.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function amp_path_breadcrumbs_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'breadcrumb_journal_club_discussions';
  $path_breadcrumb->name = 'Journal Club Discussions';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Journal Club',
      1 => 'Journal Club Discussions',
    ),
    'paths' => array(
      0 => 'journal_club_journal_club_discussions',
      1 => 'journal_club_journal_club_discussions',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => '%node',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        2 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'entity_field_value:node:article:field_tags',
          'settings' => array(
            'field_tags' => array(
              'und' => array(
                0 => array(
                  'tid' => '246',
                  'vid' => '1',
                  'name' => 'Journal Club Discussions',
                  'description' => '',
                  'format' => 'plain_text',
                  'weight' => '18',
                  'vocabulary_machine_name' => 'tags',
                  'rdf_mapping' => array(
                    'rdftype' => array(
                      0 => 'skos:Concept',
                    ),
                    'name' => array(
                      'predicates' => array(
                        0 => 'rdfs:label',
                        1 => 'skos:prefLabel',
                      ),
                    ),
                    'description' => array(
                      'predicates' => array(
                        0 => 'skos:definition',
                      ),
                    ),
                    'vid' => array(
                      'predicates' => array(
                        0 => 'skos:inScheme',
                      ),
                      'type' => 'rel',
                    ),
                    'parent' => array(
                      'predicates' => array(
                        0 => 'skos:broader',
                      ),
                      'type' => 'rel',
                    ),
                  ),
                ),
              ),
            ),
            'field_tags_tid' => 'Journal Club Discussions',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['breadcrumb_journal_club_discussions'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'breadcrumbs_article_scans';
  $path_breadcrumb->name = 'Article Scans';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Journal Club',
      1 => 'Article Scans',
    ),
    'paths' => array(
      0 => 'journal_club_journal_club_discussions',
      1 => 'journal_club_article_scans',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => '%node',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        2 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'entity_field_value:node:article:field_tags',
          'settings' => array(
            'field_tags' => array(
              'und' => array(
                0 => array(
                  'tid' => '6',
                  'vid' => '1',
                  'name' => 'Article Scans',
                  'description' => NULL,
                  'format' => 'plain_text',
                  'weight' => '13',
                  'vocabulary_machine_name' => 'tags',
                  'rdf_mapping' => array(
                    'rdftype' => array(
                      0 => 'skos:Concept',
                    ),
                    'name' => array(
                      'predicates' => array(
                        0 => 'rdfs:label',
                        1 => 'skos:prefLabel',
                      ),
                    ),
                    'description' => array(
                      'predicates' => array(
                        0 => 'skos:definition',
                      ),
                    ),
                    'vid' => array(
                      'predicates' => array(
                        0 => 'skos:inScheme',
                      ),
                      'type' => 'rel',
                    ),
                    'parent' => array(
                      'predicates' => array(
                        0 => 'skos:broader',
                      ),
                      'type' => 'rel',
                    ),
                  ),
                ),
              ),
            ),
            'field_tags_tid' => 'Article Scans',
          ),
          'context' => 'nodeid',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['breadcrumbs_article_scans'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'breadcrumbs_editors_blog';
  $path_breadcrumb->name = 'Editors Blog';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Features',
      1 => 'Editor\'s Blog',
    ),
    'paths' => array(
      0 => 'features_editors_blog',
      1 => 'features_innovators_and_issues',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => '%node',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        2 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'entity_field_value:node:article:field_tags',
          'settings' => array(
            'field_tags' => array(
              'und' => array(
                0 => array(
                  'tid' => '248',
                  'vid' => '1',
                  'name' => 'Editor\'s Blog',
                  'description' => '',
                  'format' => 'plain_text',
                  'weight' => '11',
                  'vocabulary_machine_name' => 'tags',
                  'rdf_mapping' => array(
                    'rdftype' => array(
                      0 => 'skos:Concept',
                    ),
                    'name' => array(
                      'predicates' => array(
                        0 => 'rdfs:label',
                        1 => 'skos:prefLabel',
                      ),
                    ),
                    'description' => array(
                      'predicates' => array(
                        0 => 'skos:definition',
                      ),
                    ),
                    'vid' => array(
                      'predicates' => array(
                        0 => 'skos:inScheme',
                      ),
                      'type' => 'rel',
                    ),
                    'parent' => array(
                      'predicates' => array(
                        0 => 'skos:broader',
                      ),
                      'type' => 'rel',
                    ),
                  ),
                ),
              ),
            ),
            'field_tags_tid' => 'Editor\'s Blog',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['breadcrumbs_editors_blog'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'breadcrumbs_in_the_lab';
  $path_breadcrumb->name = 'Article Scans';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Resources',
      1 => 'In the Lab',
    ),
    'paths' => array(
      0 => 'resources_meeting_reports',
      1 => 'resources_in_the_lab',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => '%node',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        2 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'entity_field_value:node:article:field_tags',
          'settings' => array(
            'field_tags' => array(
              'und' => array(
                0 => array(
                  'tid' => '1',
                  'vid' => '1',
                  'name' => 'In the Lab',
                  'description' => NULL,
                  'format' => 'plain_text',
                  'weight' => '14',
                  'vocabulary_machine_name' => 'tags',
                  'rdf_mapping' => array(
                    'rdftype' => array(
                      0 => 'skos:Concept',
                    ),
                    'name' => array(
                      'predicates' => array(
                        0 => 'rdfs:label',
                        1 => 'skos:prefLabel',
                      ),
                    ),
                    'description' => array(
                      'predicates' => array(
                        0 => 'skos:definition',
                      ),
                    ),
                    'vid' => array(
                      'predicates' => array(
                        0 => 'skos:inScheme',
                      ),
                      'type' => 'rel',
                    ),
                    'parent' => array(
                      'predicates' => array(
                        0 => 'skos:broader',
                      ),
                      'type' => 'rel',
                    ),
                  ),
                ),
              ),
            ),
            'field_tags_tid' => 'In the Lab',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['breadcrumbs_in_the_lab'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'breadcrumbs_innovators_and_issues';
  $path_breadcrumb->name = 'Innovators and Issues';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Features',
      1 => 'Innovators and Issues',
    ),
    'paths' => array(
      0 => 'features_editors_blog',
      1 => 'features_innovators_and_issues',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => '%node',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        2 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'entity_field_value:node:article:field_tags',
          'settings' => array(
            'field_tags' => array(
              'und' => array(
                0 => array(
                  'tid' => '10',
                  'vid' => '1',
                  'name' => 'Innovators and Issues',
                  'description' => NULL,
                  'format' => 'plain_text',
                  'weight' => '15',
                  'vocabulary_machine_name' => 'tags',
                  'rdf_mapping' => array(
                    'rdftype' => array(
                      0 => 'skos:Concept',
                    ),
                    'name' => array(
                      'predicates' => array(
                        0 => 'rdfs:label',
                        1 => 'skos:prefLabel',
                      ),
                    ),
                    'description' => array(
                      'predicates' => array(
                        0 => 'skos:definition',
                      ),
                    ),
                    'vid' => array(
                      'predicates' => array(
                        0 => 'skos:inScheme',
                      ),
                      'type' => 'rel',
                    ),
                    'parent' => array(
                      'predicates' => array(
                        0 => 'skos:broader',
                      ),
                      'type' => 'rel',
                    ),
                  ),
                ),
              ),
            ),
            'field_tags_tid' => 'Innovators and Issues',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['breadcrumbs_innovators_and_issues'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'breadcrumbs_meeting_reports';
  $path_breadcrumb->name = 'Meeting Reports';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Resources',
      1 => 'Meeting Reports',
    ),
    'paths' => array(
      0 => 'resources_meeting_reports',
      1 => 'resources_meeting_reports',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => '%node',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        2 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'entity_field_value:node:article:field_tags',
          'settings' => array(
            'field_tags' => array(
              'und' => array(
                0 => array(
                  'tid' => '3',
                  'vid' => '1',
                  'name' => 'Meeting Reports',
                  'description' => NULL,
                  'format' => 'plain_text',
                  'weight' => '17',
                  'vocabulary_machine_name' => 'tags',
                  'rdf_mapping' => array(
                    'rdftype' => array(
                      0 => 'skos:Concept',
                    ),
                    'name' => array(
                      'predicates' => array(
                        0 => 'rdfs:label',
                        1 => 'skos:prefLabel',
                      ),
                    ),
                    'description' => array(
                      'predicates' => array(
                        0 => 'skos:definition',
                      ),
                    ),
                    'vid' => array(
                      'predicates' => array(
                        0 => 'skos:inScheme',
                      ),
                      'type' => 'rel',
                    ),
                    'parent' => array(
                      'predicates' => array(
                        0 => 'skos:broader',
                      ),
                      'type' => 'rel',
                    ),
                  ),
                ),
              ),
            ),
            'field_tags_tid' => 'Meeting Reports',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['breadcrumbs_meeting_reports'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'breadcrumbs_news';
  $path_breadcrumb->name = 'News';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'News',
    ),
    'paths' => array(
      0 => 'news_in_the_news_news',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => '%node',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        2 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'entity_field_value:node:article:field_tags',
          'settings' => array(
            'field_tags' => array(
              'und' => array(
                0 => array(
                  'tid' => '7',
                  'vid' => '1',
                  'name' => 'News',
                  'description' => NULL,
                  'format' => 'plain_text',
                  'weight' => '16',
                  'vocabulary_machine_name' => 'tags',
                  'rdf_mapping' => array(
                    'rdftype' => array(
                      0 => 'skos:Concept',
                    ),
                    'name' => array(
                      'predicates' => array(
                        0 => 'rdfs:label',
                        1 => 'skos:prefLabel',
                      ),
                    ),
                    'description' => array(
                      'predicates' => array(
                        0 => 'skos:definition',
                      ),
                    ),
                    'vid' => array(
                      'predicates' => array(
                        0 => 'skos:inScheme',
                      ),
                      'type' => 'rel',
                    ),
                    'parent' => array(
                      'predicates' => array(
                        0 => 'skos:broader',
                      ),
                      'type' => 'rel',
                    ),
                  ),
                ),
              ),
            ),
            'field_tags_tid' => 'News',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['breadcrumbs_news'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'breadcrumbs_news_press_releases';
  $path_breadcrumb->name = 'Press Releases';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'News',
      1 => 'Press Releases',
    ),
    'paths' => array(
      0 => 'news_in_the_news_news',
      1 => 'news_press_room_press_releases',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => '%node',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        2 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'entity_field_value:node:article:field_tags',
          'settings' => array(
            'field_tags' => array(
              'und' => array(
                0 => array(
                  'tid' => '8',
                  'vid' => '1',
                  'name' => 'Press Releases',
                  'description' => NULL,
                  'format' => 'plain_text',
                  'weight' => '10',
                  'vocabulary_machine_name' => 'tags',
                  'rdf_mapping' => array(
                    'rdftype' => array(
                      0 => 'skos:Concept',
                    ),
                    'name' => array(
                      'predicates' => array(
                        0 => 'rdfs:label',
                        1 => 'skos:prefLabel',
                      ),
                    ),
                    'description' => array(
                      'predicates' => array(
                        0 => 'skos:definition',
                      ),
                    ),
                    'vid' => array(
                      'predicates' => array(
                        0 => 'skos:inScheme',
                      ),
                      'type' => 'rel',
                    ),
                    'parent' => array(
                      'predicates' => array(
                        0 => 'skos:broader',
                      ),
                      'type' => 'rel',
                    ),
                  ),
                ),
              ),
            ),
            'field_tags_tid' => 'Press Releases',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['breadcrumbs_news_press_releases'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'breadcrumbs_stem_cells';
  $path_breadcrumb->name = 'Stem Cells';
  $path_breadcrumb->path = 'sister_journals_stem_cells';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Sister Journals',
    ),
    'paths' => array(
      0 => 'content/about-sister-journals',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        4 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'sister_journals_stem_cells',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['breadcrumbs_stem_cells'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'breadcrumbs_stem_cells_buzz';
  $path_breadcrumb->name = 'Stem Cells Buzz';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Journal Club',
      1 => 'Stem Cells Buzz',
    ),
    'paths' => array(
      0 => 'journal_club_journal_club_discussions',
      1 => 'journal_club_stem_cells_buzz',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => '%node',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        2 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'entity_field_value:node:article:field_tags',
          'settings' => array(
            'field_tags' => array(
              'und' => array(
                0 => array(
                  'tid' => '247',
                  'vid' => '1',
                  'name' => 'Stem Cell Buzz',
                  'description' => '',
                  'format' => 'plain_text',
                  'weight' => '7',
                  'vocabulary_machine_name' => 'tags',
                  'rdf_mapping' => array(
                    'rdftype' => array(
                      0 => 'skos:Concept',
                    ),
                    'name' => array(
                      'predicates' => array(
                        0 => 'rdfs:label',
                        1 => 'skos:prefLabel',
                      ),
                    ),
                    'description' => array(
                      'predicates' => array(
                        0 => 'skos:definition',
                      ),
                    ),
                    'vid' => array(
                      'predicates' => array(
                        0 => 'skos:inScheme',
                      ),
                      'type' => 'rel',
                    ),
                    'parent' => array(
                      'predicates' => array(
                        0 => 'skos:broader',
                      ),
                      'type' => 'rel',
                    ),
                  ),
                ),
              ),
            ),
            'field_tags_tid' => 'Stem Cell Buzz',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['breadcrumbs_stem_cells_buzz'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'breadcrumbs_stem_cells_clone';
  $path_breadcrumb->name = 'Stem Cells Translational Medicine';
  $path_breadcrumb->path = 'sister_journals_sctm';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Sister Journals',
    ),
    'paths' => array(
      0 => 'content/about-sister-journals',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        4 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'sister_journals_sctm',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['breadcrumbs_stem_cells_clone'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'breadcrumbs_stem_cells_young_investigator_award';
  $path_breadcrumb->name = 'Stem Cells Young Investigator Award';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Features',
      1 => 'Stem Cells Young Investigator Award',
    ),
    'paths' => array(
      0 => 'features_editors_blog',
      1 => 'features_stem_cells_young_investigator_award',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => '%node',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        2 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'entity_field_value:node:article:field_tags',
          'settings' => array(
            'field_tags' => array(
              'und' => array(
                0 => array(
                  'tid' => '5',
                  'vid' => '1',
                  'name' => 'SC Young Investigator Award',
                  'description' => '',
                  'format' => 'plain_text',
                  'weight' => '9',
                  'vocabulary_machine_name' => 'tags',
                  'rdf_mapping' => array(
                    'rdftype' => array(
                      0 => 'skos:Concept',
                    ),
                    'name' => array(
                      'predicates' => array(
                        0 => 'rdfs:label',
                        1 => 'skos:prefLabel',
                      ),
                    ),
                    'description' => array(
                      'predicates' => array(
                        0 => 'skos:definition',
                      ),
                    ),
                    'vid' => array(
                      'predicates' => array(
                        0 => 'skos:inScheme',
                      ),
                      'type' => 'rel',
                    ),
                    'parent' => array(
                      'predicates' => array(
                        0 => 'skos:broader',
                      ),
                      'type' => 'rel',
                    ),
                  ),
                ),
              ),
            ),
            'field_tags_tid' => 'SC Young Investigator Award',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['breadcrumbs_stem_cells_young_investigator_award'] = $path_breadcrumb;

  return $export;
}
