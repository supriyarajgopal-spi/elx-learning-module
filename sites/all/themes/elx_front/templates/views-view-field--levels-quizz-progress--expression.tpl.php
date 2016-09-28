<?php

/**
* modified for the Levels page 9/6/16
*/

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */

/**
* $output contains percentage, eg 0%
*/

?>
<?php
print '<div class="percent-label">Progress:</div>' .
'<div class="progress-bar-percentage">' . $output  . '</div>' .
'<div class="user-progress-bar">' .
  '<div class="user-progress" style="width:' . $output . '"></div>' .
'</div>';
?>
