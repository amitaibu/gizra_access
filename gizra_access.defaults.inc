<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _gizra_access_content_default_fields() {
  $fields = array();

  // Exported field: field_hidden_field
  $fields[] = array(
    'field_name' => 'field_hidden_field',
    'type_name' => 'product',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => NULL,
      'size' => NULL,
      'label' => 'Hidden field',
      'weight' => '31',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  array(
    t('Hidden field'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_flag_default_flags().
 */
function _gizra_access_flag_default_flags() {
$flags = array();
// Exported flag: "Show content".
$flags[] = array (
  'content_type' => 'node',
  'name' => 'show_content',
  'title' => 'Show content',
  'global' => '0',
  'types' => 
  array (
    0 => 'product',
  ),
  'flag_short' => 'Show privileged content',
  'flag_long' => 'Show content for privileged users',
  'flag_message' => '',
  'unflag_short' => 'Hide privilged content',
  'unflag_long' => 'Show content from non-privileged users',
  'unflag_message' => '',
  'unflag_denied_text' => '',
  'link_type' => 'normal',
  'roles' => 
  array (
    'flag' => 
    array (
    ),
    'unflag' => 
    array (
    ),
  ),
  'show_on_page' => 1,
  'show_on_teaser' => 0,
  'show_on_form' => 0,
  'access_author' => '',
  'i18n' => 0,
  'module' => 'gizra_access',
  'locked' => 
  array (
    'name' => 'name',
  ),
  'api_version' => 2,
);
return $flags;
}
