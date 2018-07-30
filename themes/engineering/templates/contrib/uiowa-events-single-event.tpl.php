<?php

/**
 * @file
 * Default theme implementation for the full listing of events.
 *
 * @see uiowa_events_single_event()
 *
 * Available variables:
 *
 * $title
 *   Sets the page title
 * $data
 *   Event data generated from Localist API.
 */
?>
<div class="uiowa-event-single-event">
  <div class="row">
    <div class="col-md-8">
        <div class="field event-time">
          <?php print render($data['date_instances']) ?>
        </div>
      <div class="field location-address">
        <span><i class="fa fa-map-marker fa-inline"></i></span>
        <span>
          <?php if (!empty($data['location_name'])): ?>
            <div class="event-location"><?php print $data['location_name'] ?><?php if (!empty($data['room_number'])): ?><?php print ', ' . $data['room_number'] ?>
           <?php endif; ?>
            </div>
          <?php endif; ?>
          <?php if (!empty($data['address'])): ?>
            <div class="event-address">
              <?php print $data['address'] ?>
            </div>
          <?php endif; ?>
        </span>
      </div>
      <?php if (!empty($data['description'])): ?>
        <hr>
        <div class="field event-description">
          <?php print $data['description'] ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($data['custom_fields']['contact_name'])): ?>
        <hr>
        <div class="field contact-info">
          Contact Info: <?php print $data['custom_fields']['contact_name'] ?><?php if (!empty($data['custom_fields']['contact_email'])): ?>, <?php print $data['custom_fields']['contact_email'] ?><?php if (!empty($data['custom_fields']['contact_phone_number'])): ?>, <?php print $data['custom_fields']['contact_phone_number'] ?>
         <?php endif; ?><?php
         endif; ?>
        </div>
      <?php endif; ?>
    </div>

    <div class="col-md-4">
      <?php if (!empty($data['photo_url'])): ?>
      <div class="field field-type-image event-image">
          <?php
            print theme('imagecache_external', array(
              'path' => $data['photo_url'],
              'style_name' => 'large',
              'alt' => t('@title promotional image', array('@title' => $data['title'])),
            ));
          ?>
        </div>
      <?php endif; ?>

      <a href="<?php print $data['events_site_url'] ?>" role="button" class="btn btn-primary">View on Event Calendar</a>
    </div>
  </div>
  <div class="uiowa-event-accessibility-statement">
    <em><?php print $data['accessibility_statement']; ?></em>
  </div>
</div>
