<?php

/**
 * Implementation of hook_content_default_fields().
 */
function gizra_access_content_default_fields() {
  module_load_include('inc', 'gizra_access', 'gizra_access.defaults');
  $args = func_get_args();
  return call_user_func_array('_gizra_access_content_default_fields', $args);
}

/**
 * Implementation of hook_flag_default_flags().
 */
function gizra_access_flag_default_flags() {
  module_load_include('inc', 'gizra_access', 'gizra_access.defaults');
  $args = func_get_args();
  return call_user_func_array('_gizra_access_flag_default_flags', $args);
}

/**
 * Implementation of hook_node_info().
 */
function gizra_access_node_info() {
  module_load_include('inc', 'gizra_access', 'gizra_access.features.node');
  $args = func_get_args();
  return call_user_func_array('_gizra_access_node_info', $args);
}

/**
 * Implementation of hook_rules_defaults().
 */
function gizra_access_rules_defaults() {
  module_load_include('inc', 'gizra_access', 'gizra_access.defaults');
  $args = func_get_args();
  return call_user_func_array('_gizra_access_rules_defaults', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function gizra_access_user_default_permissions() {
  module_load_include('inc', 'gizra_access', 'gizra_access.defaults');
  $args = func_get_args();
  return call_user_func_array('_gizra_access_user_default_permissions', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function gizra_access_views_default_views() {
  module_load_include('inc', 'gizra_access', 'gizra_access.features.views');
  $args = func_get_args();
  return call_user_func_array('_gizra_access_views_default_views', $args);
}
