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
 *   TRUE if linking to Localist, FALSE if URL is to internal page.
 */
?>
<div class="uiowa-event" style="clear:both;margin-top:15px;">
  <h3 class="uiowa-event-title"><a href="<?php print $variables['event']['url']; ?>"><?php print $variables['event']['title']; ?></a></h3>
    <div class="date-string uiowa-event-date"><?php print render($variables['event']['date_string']); ?></div>

    <?php if (isset($variables['event']['image'])): ?>
        <div class="uiowa-event-image" style="width:10%;float:left;padding-right:15px;"><?php print render($variables['event']['image']); ?></div>
        <div class="uiowa-event-description" style="width:90%;float:right;"><?php print render($variables['event']['description_text']); ?></div>
    <?php else: ?>
        <div class="uiowa-event-description"><?php print render($variables['event']['description_text']); ?></div>
    <?php endif; ?>
    <?php if (isset($variables['event']['location_name'])): ?>
        <div class="uiowa-event-location">Location: <?php print render($variables['event']['location_name']); ?></div>
    <?php endif; ?>
</div>
