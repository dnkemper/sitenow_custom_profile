<?php

/**
 * @file
 * UHD Footer block template.
 *
 * @ingroup themeable
 */
?>
<div id="sitenow-footer" class="sitenow-footer">
  <div class="row">
    <?php if ($logo || $additional_info_details): ?>
      <div class="block col-md-5">
        <?php if ($logo): ?>
          <?php print render($logo); ?>
        <?php endif; ?>
        <?php if ($additional_info_details): ?>
          <?php if ($additional_info_title): ?>
            <h2 class="block-title"><?php print $additional_info_title; ?></h2>
          <?php endif; ?>
          <div class="block-content">
            <?php print $additional_info_details; ?>
          </div>
        <?php endif; ?>
      </div>
    <?php endif; ?>
    <?php if ($custom_menu_links): ?>
      <div class="block col-md-4">
        <h2 class="block-title">
          <?php print $custom_menu_links_title; ?>
        </h2>
        <div class="block-content">
          <?php print $custom_menu_links; ?>
        </div>
      </div>
    <?php endif; ?>
    <?php if ($social_menu_links): ?>
      <div class="block col-md-3">
        <h2 class="block-title">
          <?php print $social_menu_links_title; ?>
        </h2>
        <div class="block-content">
          <?php print $social_menu_links; ?>
        </div>
      </div>
    <?php endif; ?>
  </div>
</div>
