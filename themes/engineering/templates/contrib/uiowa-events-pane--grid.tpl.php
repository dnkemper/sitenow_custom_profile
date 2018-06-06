<?php

/**
 * @file
 * Default theme implementation for the events pane.
 *
 * @see uiowa_events_pane()
 *
 * Available variables:
 *
 * $data
 *   Event data generated from Localist API.
 */
$view_all = l(t('View Full Calendar'), base_path() . variable_get('uiowa_events_listing_path', 'events'));
?>
<div class="row">
  <?php foreach ($items as $delta => $item): ?>
    <div class="col col-md-4">
      <?php print render($item); ?>
    </div>
  <?php endforeach; ?>
</div>
<div class="view-all"><?php print $view_all; ?></div>
