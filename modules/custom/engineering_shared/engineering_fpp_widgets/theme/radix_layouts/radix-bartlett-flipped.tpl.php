<?php

/**
 * @file
 * Template for Radix Bartlett Flipped.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div<?php print $attributes; ?>>
  <div class="row">
    <div class="col-md-8 panel-panel">
      <div class="row">
        <div class="col-md-12 radix-layouts-contentheader panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['contentheader']; ?>
          </div>
        </div>
        <div class="col-md-6 radix-layouts-contentcolumn1 panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['contentcolumn1']; ?>
          </div>
        </div>
        <div class="col-md-6 radix-layouts-contentcolumn2 panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['contentcolumn2']; ?>
          </div>
        </div>
      </div>
    </div>

    <!-- Sidebar -->
    <div class="col-md-4 radix-layouts-sidebar panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['sidebar']; ?>
      </div>
    </div>
  </div>
</div><!-- /.bartlett-flipped -->
