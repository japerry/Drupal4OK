<?php
/**
 * @file
 * housing_have.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function housing_have_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function housing_have_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function housing_have_node_info() {
  $items = array(
    'housing_have' => array(
      'name' => t('Open Bed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Summary'),
      'help' => t('<p><strong>Privacy Statement</strong><br />

The information collected on this form is used by qldfloods.org to allow us to match someone who has a bed available with someone who requires a bed. The information collected on this form is displayed on the website and is provided to callers to the qldfloods.org call centre. You can update or remove this information at any time by returning to this website. Your information will not be used for any other purpose other than that noted above.</p>'),
    ),
    'housing_need' => array(
      'name' => t('Need a Bed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
