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

  // Exported field: field_purchased_products
  $fields[] = array(
    'field_name' => 'field_purchased_products',
    'type_name' => 'profile',
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
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'product' => 'product',
      'page' => 0,
      'profile' => 0,
      'story' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_purchased_products][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Purchased products',
      'weight' => '31',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  array(
    t('Hidden field'),
    t('Purchased products'),
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
    0 => 'name',
  ),
  'api_version' => 2,
);
return $flags;
}

/**
 * Helper to implementation of hook_rules_defaults().
 */
function _gizra_access_rules_defaults() {
  return array(
    'rule_sets' => array(
      'rules_show_content' => array(
        'arguments' => array(
          'node' => array(
            'label' => 'Product content',
            'type' => 'node',
          ),
          'account' => array(
            'label' => 'Purchasing account',
            'type' => 'user',
          ),
        ),
        'label' => 'Show content',
        'status' => 'default',
        'categories' => array(
          'gizra_access' => 'gizra_access',
        ),
      ),
    ),
    'rules' => array(
      'gizra_access_2' => array(
        '#type' => 'rule',
        '#set' => 'rules_show_content',
        '#label' => 'Add purchased user',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          'gizra_access' => 'gizra_access',
        ),
        '#status' => 'default',
        '#conditions' => array(),
        '#actions' => array(
          '0' => array(
            '#type' => 'action',
            '#settings' => array(
              'type' => 'profile',
              '#argument map' => array(
                'user' => 'account',
                'profile_node' => 'profile_node',
              ),
            ),
            '#name' => 'content_profile_action_load',
            '#info' => array(
              'label' => 'Load Purchasing account\'s Profile',
              'arguments' => array(
                'user' => array(
                  'type' => 'user',
                  'label' => 'User, whose profile should be loaded',
                ),
              ),
              'new variables' => array(
                'profile_node' => array(
                  'type' => 'node',
                  'label' => 'Content Profile',
                ),
              ),
              'module' => 'Content Profile',
            ),
            '#weight' => 0,
          ),
          '1' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Populate Content Profile\'s field \'field_purchased_products\'',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'eval input' => array(
                '0' => 'code',
              ),
              'module' => 'CCK',
            ),
            '#name' => 'content_rules_action_populate_field',
            '#settings' => array(
              'field_name' => 'field_purchased_products',
              '#argument map' => array(
                'node' => 'profile_node',
              ),
              'value' => array(
                '0' => array(
                  'nid' => NULL,
                ),
              ),
              'code' => 'return _gizra_access_add_purchased_products($node, $profile_node);',
              'vars' => array(
                '0' => 'profile_node',
                '1' => 'node',
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
      'gizra_access_1' => array(
        '#type' => 'rule',
        '#set' => 'rules_show_content',
        '#label' => 'Flag product',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          'gizra_access' => 'gizra_access',
        ),
        '#status' => 'default',
        '#conditions' => array(),
        '#actions' => array(
          '0' => array(
            '#type' => 'action',
            '#settings' => array(
              'flag' => 'show_content',
              'permission_check' => 0,
              '#argument map' => array(
                'object' => 'node',
                'flagging_user' => 'account',
              ),
            ),
            '#name' => 'flag_rules_action_flag_node',
            '#info' => array(
              'label' => 'Flag Product content, under "Show content"',
              'base' => 'flag_rules_action_flag',
              'label callback' => 'flag_rules_action_flag_label',
              'arguments' => array(
                'flag' => array(
                  'type' => 'flag',
                  'label' => 'Flag',
                  'flag_type' => 'node',
                ),
                'object' => array(
                  'type' => 'node',
                  'label' => 'Flagged content',
                ),
                'flagging_user' => array(
                  'type' => 'user',
                  'label' => 'User on whose behalf to flag',
                  'description' => 'For non-global flags, this is the user on whose behalf to flag the object. In addition, if checked below, the access permissions to the flag are checked against this user.',
                ),
              ),
              'module' => 'Flag',
            ),
            '#weight' => 0,
          ),
          '1' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Show a configurable message on the site',
              'module' => 'System',
              'eval input' => array(
                '0' => 'message',
              ),
            ),
            '#name' => 'rules_action_drupal_message',
            '#settings' => array(
              'message' => 'You can now see hidden fields.',
              'error' => 0,
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}
