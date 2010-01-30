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
