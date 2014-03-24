<?php
/**
 * @file
 * amp_sctm_virtual_issues.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amp_sctm_virtual_issues_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function amp_sctm_virtual_issues_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
