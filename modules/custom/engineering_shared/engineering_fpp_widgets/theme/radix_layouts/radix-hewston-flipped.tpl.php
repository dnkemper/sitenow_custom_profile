<?php

/**
 * @file
 * Template for Radix Hewston Flipped.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div<?php print $attributes; ?>>

  <div class="row">
    <div class="col-md-4 radix-layouts-slidergutter panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['slidergutter']; ?>
      </div>
    </div>
    <div class="col-md-8 radix-layouts-slider panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['slider']; ?>
      </div>
    </div>
  </div>

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

</div><!-- /.hewston-flipped -->
