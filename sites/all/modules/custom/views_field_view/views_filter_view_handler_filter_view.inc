<?php

/**
 * @file
 * Contains the views filter view handler.
 */

/**
 * Filter handler to filter by another view on the site.
 *
 * @ingroup views_filter_handlers
 */
class views_filter_view_handler_filter_view extends views_handler_filter {
  /**
   * @var views_plugin_query_default
   */
  var $query;

  function option_definition() {
    $options  = parent::option_definition();
    $options['operator'] = array('default' => 'IN');
    $options['view'] = array('default' => '');
    return $options;
  }

  function operator_options($which = 'title') {
    $options = array();
    $options['IN'] = t('In result');
    $options['NOT IN'] = t('Not in result');
    $options['>='] = t('Greater Than and Equal');
    $options['<='] = t('Less Than and Equal');
    return $options;
  }


  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $view_display = $this->view->name . ':' . $this->view->current_display;

    $options = array('' => t('-Select-'));
    $options += views_get_views_as_options(FALSE, 'all', $view_display);

    $form['view'] = array(
      '#type' => 'select',
      '#title' => t('View to filter'),
      '#default_value' => $this->options['view'],
      '#description' => t('The view and display to filter by. Take sure that you choose the display which is executed.'),
      '#options' => $options,
    );
  }

  function query() {
    $this->table_alias = $this->query->ensure_table($this->view->base_table, $this->relationship);
    $this->real_field = 'points';//$this->view->base_field;

    list($name, $display) = explode(':', $this->options['view']);
    if ($items = $this->get_view_items($name, $display)) {
      $this->value = $items;
      $this->query->add_where($this->options['group'], "$this->table_alias.$this->real_field", $this->value, $this->operator);
    }
  }

  /**
   * Get the view base field values of a certain view.
   * This method should look for views which were executed before.
   *
   * @param $name
   *   The name of the view which should be executed|loaded the result.
   * @param $display
   *   The display id which should be used.
   * @return array
   *   The items of the view
   */
  function get_view_items($name, $display) {
    $items = views_filter_view_get_items($name, $display);
    return $items;
  }
}
