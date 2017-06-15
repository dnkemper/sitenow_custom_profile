<?php

/**
 * @file
 * Template for a block.
 */

  // Show the menu only for pages that are in the main menu.
  $show_main_menu = FALSE;
  $menu_trail = menu_get_active_trail();
  if (isset($menu_trail[1]['menu_name']) && $menu_trail[1]['menu_name'] == 'main-menu') {
    $show_main_menu = TRUE;
  }
?>

<?php if ($show_main_menu):?>
  <div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
    <div class="dropdown" role="navigation" aria-labelledby="section-button">
      <button id="section-button" class="btn btn-primary dropdown-toggle section-menu-toggle" type="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
        In this section <i class="fa fa-caret-down" aria-hidden="true"></i>
      </button>
      <div id="collapsible-menu-wrapper" class="dropdown-menu" aria-labelledby="section-button">
        <?php print render($title_prefix); ?>
        <?php if ($block->subject): ?>
          <h3 class="menu-section sr-only"><?php print $block->subject ?></h3>
        <?php endif;?>
        <?php print render($title_suffix); ?>

        <div class="block__content"<?php print $content_attributes; ?>>
          <?php print $content ?>
        </div>
      </div>
    </div>
  </div>
<?php endif; ?>
