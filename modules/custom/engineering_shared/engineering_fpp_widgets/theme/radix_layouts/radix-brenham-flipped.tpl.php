<?php

/**
 * @file
 * Template for Radix Brenham Flipped.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>
<div<?php print $attributes; ?>>

  <div class="row">
    <div class="col-md-12 radix-layouts-header panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['header']; ?>
      </div>
    </div>
  </div>

  <div class="container-smooth">
    <div class="row">
      <div class="col-md-8 radix-layouts-content panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['contentmain']; ?>
        </div>
      </div>
      <div class="col-md-4 radix-layouts-sidebar panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['sidebar']; ?>
        </div>
      </div>
    </div>
  </div>
</div>

</div><!-- /.brenham-flipped -->
