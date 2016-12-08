<?php
/**
 * @file.
 *
 * Custom region wrapper for full-width regions.
 */
?>
<div<?php print $attributes; ?>>
  <div class="l-container">
    <?php print render($content); ?>
  </div>
</div>
