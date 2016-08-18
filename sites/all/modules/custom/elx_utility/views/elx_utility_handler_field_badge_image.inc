<?php
/**
 * Provides a custom views handler field for Flag Badge Images.
 */
class elx_utility_handler_field_badge_image extends views_handler_field {

  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }
  
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }
  
  function query() {
    // do nothing -- to override the parent query.
  }
  
  function render($values) {
    // If the devel module is enabled, you may view all of the
    // data provided by fields previously added in your view.
    // dpm($data);
    // Insert PHP code here, or display greeting.
	drupal_set_message('<pre>'.print_r($values,TRUE).'</pre>');
    $output = t("Hello World!");
    return $output; 
  }
}