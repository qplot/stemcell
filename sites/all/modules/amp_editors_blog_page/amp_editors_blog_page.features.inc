<?php
/**
 * @file
 * amp_editors_blog_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amp_editors_blog_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function amp_editors_blog_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
