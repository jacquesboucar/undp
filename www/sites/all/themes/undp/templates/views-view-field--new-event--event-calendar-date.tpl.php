<?php

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
?>
<?php 
$timestamp = strtotime($row->field_event_calendar_date[0]['raw']['value']);
$ev_month = format_date($timestamp, 'custom', 'F');
$ev_day = format_date($timestamp, 'custom', 'd');
?>
<div class="upcoming-date">
<span class="month"><?php print($ev_month); ?></span>
<span class="day"><?php print($ev_day); ?></span>
</div>
