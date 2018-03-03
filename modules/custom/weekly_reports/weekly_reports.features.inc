<?php
/**
 * @file
 * weekly_reports.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function weekly_reports_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function weekly_reports_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function weekly_reports_node_info() {
  $items = array(
    'weekly_report' => array(
      'name' => t('Weekly Report'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
