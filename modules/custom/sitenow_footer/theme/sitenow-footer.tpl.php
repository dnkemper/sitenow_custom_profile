<?php

/**
 * @file
 * UHD Footer block template.
 *
 * @ingroup themeable
 */
?>
<div class="row">
  <?php if ($attachments): ?>
    <?php print render($attachments); ?>
  <?php endif; ?>
  <?php if ($logo || $additional_info_details || $social_menu_links): ?>
    <div class="col-md-6 col-left">
      <?php if ($logo): ?>
        <div class="block block--lockup">
          <?php print render($logo); ?>
        </div>
      <?php endif; ?>
      <?php if ($additional_info_details || $social_menu_links): ?>
        <div class="col-md-10 col-md-push-3">
          <?php if ($additional_info_details): ?>
            <div class="block block--additional-info">
              <?php if ($additional_info_title): ?>
                <h2 class="block-title"><?php print $additional_info_title; ?></h2>
              <?php endif; ?>
              <div class="block-content">
                <?php print $additional_info_details; ?>
              </div>
            </div>
          <?php endif; ?>
          <?php if ($social_menu_links): ?>
            <div class="block block--social-media-menu">
              <h2 class="block-title">
                <?php print $social_menu_links_title; ?>
              </h2>
              <div class="block-content">
                <?php print $social_menu_links; ?>
              </div>
            </div>
          <?php endif; ?>
        </div>
      <?php endif; ?>
    </div>
  <?php endif; ?>
  <?php if ($custom_menu_links): ?>
    <div class="col-md-6 col-right">
      <div class="block block--custom-menu">
        <h2 class="block-title">
          <?php print $custom_menu_links_title; ?>
        </h2>
        <div class="block-content">
          <?php print $custom_menu_links; ?>
        </div>
      </div>
    </div>
  <?php endif; ?>
</div>
