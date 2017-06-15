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
        <?php if (!empty($data['future_instances'])): ?>
          <?php print $data['today'] ?> → <span class="future-instances-toggle">more dates through <?php print date('l, F j', strtotime($data['last_date'])) ?></span>
          <div class="future-instances">
            <i class="fa fa-calendar-o fa-inline"></i><?php print $data['future_instances'] ?>
          </div>
        <?php else: ?>
          <i class="fa fa-calendar-o fa-inline"></i><?php print $data['today'] ?>
        <?php endif; ?>
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

      <a href="http://events.uiowa.edu/event/<?php print $data['id'] ?>" role="button" class="btn btn-primary btn-block">View on Event Calendar</a>
    </div>
  </div>
</div>
