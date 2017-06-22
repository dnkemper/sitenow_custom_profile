<?php

/**
 * @file
 * Custom template to mimic Engineering main site's person teaser template.
 *
 * @ingroup themeable
 */

$phone_href = preg_replace("/[^0-9]/", "", $variables['phone']);
?>
<article class="clearfix node-person node-person-card">
  <?php if ($variables['image']): ?>
    <div class="field-name-field-image field-type-image">
      <?php print $variables['image']; ?>
    </div>
  <?php endif; ?>
  <div class="content">
    <h2><a href="<?php print $variables['url'] ?>">
      <?php print $variables['name']; ?>
    </a></h2>
    <?php if ($variables['title']): ?>
      <div class="field-name-person-main-title">
        <?php print $variables['title']; ?>
      </div>
    <?php endif; ?>
    <div class="btn-group" role="group">
      <?php if ($variables['email']): ?>
        <a href="mailto:<?php print $variables['email']; ?>" class="btn btn-default" data-toggle="tooltip" data-placement="top" title="<?php print $variables['email']; ?>">
          <i class="fa fa-envelope" aria-hidden="true"></i>
        </a>
      <?php endif; ?>
      <?php if ($variables['phone']): ?>
        <a href="tel:<?php print $phone_href; ?>" class="btn btn-default" data-toggle="tooltip" data-placement="top" title="<?php print $variables['phone']; ?>">
          <i class="fa fa-phone" aria-hidden="true"></i>
        </a>
      <?php endif; ?>
      <?php if ($variables['location']): ?>
        <a tabindex="0" class="btn btn-default" role="button" data-toggle="popover" data-trigger="focus" title="Office Address" data-content="<?php print $variables['location']; ?>">
          <i class="fa fa-map-marker" aria-hidden="true"></i>
        </a>
      <?php endif; ?>
      <a href="<?php print $variables['url'] ?>" class="btn btn-primary"><i class="fa fa-user" aria-hidden="true"></i></a>
    </div>
  </div>
</article>
