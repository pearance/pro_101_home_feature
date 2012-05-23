<?php
/**
 * @file
 * pro_101_home_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pro_101_home_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pro_101_home_feature_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pro_101_home_feature_node_info() {
  $items = array(
    'featured' => array(
      'name' => t('Featured'),
      'base' => 'node_content',
      'description' => t('Use <em>Featured</em> to prominently showcase featured content usually on the front page.'),
      'has_title' => '1',
      'title_label' => t('Feature Title'),
      'help' => '',
    ),
  );
  return $items;
}
