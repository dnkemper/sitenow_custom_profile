<?php

/**
 * @file
 * Template for Radix Whelan.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div<?php print $attributes; ?>>

  <div class="row">
    <div class="col-md-3 radix-layouts-column1 panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['column1']; ?>
      </div>
    </div>
    <div class="col-md-6 radix-layouts-content panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['contentmain']; ?>
      </div>
    </div>
    <div class="col-md-3 radix-layouts-column2 panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['column2']; ?>
      </div>
    </div>
  </div>

</div><!-- /.whelan -->
