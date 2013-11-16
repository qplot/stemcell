<?php
/**
 * @file
 * amp_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function amp_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_all:views-all
  $menu_links['main-menu_all:views-all'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'views-all',
    'router_path' => 'views-all',
    'link_title' => 'All',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_all:views-all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_test:http:://#',
  );
  // Exported menu link: main-menu_features:http:://#
  $menu_links['main-menu_features:http:://#'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http:://#',
    'router_path' => '',
    'link_title' => 'Features',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_features:http:://#',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_in-the-news:in-the-news
  $menu_links['main-menu_in-the-news:in-the-news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'in-the-news',
    'router_path' => 'in-the-news',
    'link_title' => 'In the News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_in-the-news:in-the-news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_news:http:://#',
  );
  // Exported menu link: main-menu_in-the-news:views-in-the-news
  $menu_links['main-menu_in-the-news:views-in-the-news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'views-in-the-news',
    'router_path' => 'views-in-the-news',
    'link_title' => 'In the News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_in-the-news:views-in-the-news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_views:http:://#',
  );
  // Exported menu link: main-menu_news:http:://#
  $menu_links['main-menu_news:http:://#'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http:://#',
    'router_path' => '',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_news:http:://#',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_page-intro:views-page-intro
  $menu_links['main-menu_page-intro:views-page-intro'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'views-page-intro',
    'router_path' => 'views-page-intro',
    'link_title' => 'Page Intro',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_page-intro:views-page-intro',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_test:http:://#',
  );
  // Exported menu link: main-menu_sc-young-investigator-award-latest:views-sc-young-investigator-award-latest
  $menu_links['main-menu_sc-young-investigator-award-latest:views-sc-young-investigator-award-latest'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'views-sc-young-investigator-award-latest',
    'router_path' => 'views-sc-young-investigator-award-latest',
    'link_title' => 'SC Young Investigator Award-Latest',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sc-young-investigator-award-latest:views-sc-young-investigator-award-latest',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_views:http:://#',
  );
  // Exported menu link: main-menu_sc-young-investigator-award-old-posts:views-sc-young-investigator-award-old-posts
  $menu_links['main-menu_sc-young-investigator-award-old-posts:views-sc-young-investigator-award-old-posts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'views-sc-young-investigator-award-old-posts',
    'router_path' => 'views-sc-young-investigator-award-old-posts',
    'link_title' => 'SC Young Investigator Award-Old Posts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sc-young-investigator-award-old-posts:views-sc-young-investigator-award-old-posts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_views:http:://#',
  );
  // Exported menu link: main-menu_sc-young-investigator-award:sc-young-investigator-award
  $menu_links['main-menu_sc-young-investigator-award:sc-young-investigator-award'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sc-young-investigator-award',
    'router_path' => 'sc-young-investigator-award',
    'link_title' => 'SC Young Investigator Award',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sc-young-investigator-award:sc-young-investigator-award',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_features:http:://#',
  );
  // Exported menu link: main-menu_test:http:://#
  $menu_links['main-menu_test:http:://#'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http:://#',
    'router_path' => '',
    'link_title' => 'Test',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_test:http:://#',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_views:http:://#
  $menu_links['main-menu_views:http:://#'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http:://#',
    'router_path' => '',
    'link_title' => 'Views',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_views:http:://#',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_test:http:://#',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('All');
  t('Features');
  t('Home');
  t('In the News');
  t('News');
  t('Page Intro');
  t('SC Young Investigator Award');
  t('SC Young Investigator Award-Latest');
  t('SC Young Investigator Award-Old Posts');
  t('Test');
  t('Views');


  return $menu_links;
}
