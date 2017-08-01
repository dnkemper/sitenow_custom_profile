<?php

/**
 * @file
 * Engineering Footer block template.
 *
 * @ingroup themeable
 */
?>
<?php if(isset($contact_us) || isset($social_menu_links) || isset($quick_menu_links)): ?>
<div class="container-smooth">
  <div class="row">
    <?php if(isset($contact_us) || isset($social_menu_links)): ?>
    <div class="col-md-9">
      <?php if(isset($contact_us)): ?>
      <div class="block">
        <h4 class="block__title">Contact Us</h4>
        <div class="block__content">
          <?php print $contact_us; ?>
        </div>
      </div>
      <?php endif; ?>
      <?php if(isset($social_menu_links)): ?>
        <div class="block block--social-media">
          <h4 class="block__title">Social Media</h4>
          <div class="block__content">
            <?php print $social_menu_links; ?>
          </div>
        </div>
      <?php endif; ?>
    </div>
    <?php endif; ?>
    <?php if(isset($quick_menu_links)): ?>
      <div class="col-md-3">
        <div class="block">
          <h4 class="block__title">Quick Links</h4>
          <div class="block__content">
            <?php print $quick_menu_links; ?>
          </div>
        </div>
      </div>
    <?php endif; ?>
  </div>
</div>
<?php endif; ?>
