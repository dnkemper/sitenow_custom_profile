<?php
/* @file uiowa-events-teaser.tpl.php
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
  <p class="date-string"><?php print render($variables['event']['date_string']); ?></p>
  <?php print render($variables['event']['image']); ?>
  <h3><a href="<?php print $variables['event']['url']; ?>"><?php print $variables['event']['title']; ?></a></h3>
</div>
