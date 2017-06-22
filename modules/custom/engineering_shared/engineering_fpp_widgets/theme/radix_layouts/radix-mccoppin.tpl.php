<?php

/**
 * @file
 * Template for Radix Mccoppin.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div<?php print $attributes; ?>>

  <div class="row">
    <div class="col-md-4 radix-layouts-column1 panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['column1']; ?>
      </div>
    </div>
    <div class="col-md-4 radix-layouts-column2 panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['column2']; ?>
      </div>
    </div>
    <div class="col-md-4 radix-layouts-column3 panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['column3']; ?>
      </div>
    </div>
  </div>

</div><!-- /.mccoppin -->
