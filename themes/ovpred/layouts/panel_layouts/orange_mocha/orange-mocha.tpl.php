<?php
/**
 * @file
 * Template for the Erives layout.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div<?php print $attributes ?>>
  <?php foreach($content as $name => $item): ?>

    <?php if ($name == 'left'): ?>
      <div class="l-three-col-wrapper"><div class="l-container">
    <?php endif; ?>

    <div<?php print drupal_attributes($region_attributes_array[$name])?>>
      <div class="wrapper-inner">
        <?php print $item ?>
      </div>
    </div>

    <?php if ($name == 'right'): ?>
      </div></div>
    <?php endif; ?>
  <?php endforeach; ?>
</div>
