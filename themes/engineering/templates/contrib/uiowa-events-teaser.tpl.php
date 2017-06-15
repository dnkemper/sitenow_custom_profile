<?php
/**
 * @file uiowa-events-teaser.tpl.php
 * Default theme implementation for a single event teaser.
 *
 * @see template_preprocess_uiowa_events_teaser()
 *
 * Available variables:
 *
 * $event
 *   An array of event data from uiowa_events_load().
 * $external_link
 *   TRUE if linking to Localist, FALSE if URL is to internal page.
 */
?>
<div class="uiowa-event">
  <h2><a href="<?php print $variables['event']['url']; ?>"><?php print $variables['event']['title']; ?></a></h2>
  <p class="field date-string"><i class="fa fa-calendar-o fa-inline"></i> <?php print render($variables['event']['date_string']); ?></p>
  <?php if (isset($description)): ?>
    <p class="field description"><?php print $description; ?></p>
  <?php endif; ?>
  <?php if (isset($location)): ?>
    <p class="field description"><i class="fa fa-map-marker fa-inline"></i> <?php print $location; ?></p>
  <?php endif; ?>

  <a class="btn btn-primary" href="<?php print $variables['event']['url']; ?>">More details<span class="sr-only"> about <?php print $variables['event']['title']; ?></span></a>
</div>
