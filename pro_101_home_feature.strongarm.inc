<?php
/**
 * @file
 * pro_101_home_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pro_101_home_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_featured';
  $strongarm->value = array();
  $export['menu_options_featured'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_featured';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_featured'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_featured';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_featured'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_featured';
  $strongarm->value = '1';
  $export['node_preview_featured'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_featured';
  $strongarm->value = 0;
  $export['node_submitted_featured'] = $strongarm;

  return $export;
}
