<?php

/**
 * @file
 * Default theme implementation for a single event teaser.
 *
 * @see template_preprocess_uiowa_events_teaser()
 *
 * Available variables:
 *
 * $event
 *   An array of event data from uiowa_events_load().
 * $external_link
 *   TRUE if linking to events.uiowa.edu, FALSE if URL is to internal page.
 */
?>
<div class="uiowa-event">
  <p class="date-string"><?php print render($variables['event']['date_string']); ?></p>
  <?php if (isset($variables['event']['image'])): ?>
    <?php print render($variables['event']['image']); ?>
  <?php endif; ?>
  <h3><a href="<?php print $variables['event']['url']; ?>"><?php print $variables['event']['title']; ?></a></h3>
</div>
