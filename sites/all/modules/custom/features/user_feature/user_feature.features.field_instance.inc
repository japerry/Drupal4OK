<?php
/**
 * @file
 * user_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function user_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_preferred_contact_method'
  $field_instances['user-user-field_preferred_contact_method'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 'text',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_preferred_contact_method',
    'label' => 'Preferred Contact Method',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'user-user-field_preferred_language'
  $field_instances['user-user-field_preferred_language'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 'en',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_preferred_language',
    'label' => 'Preferred Language',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Preferred Contact Method');
  t('Preferred Language');

  return $field_instances;
}
