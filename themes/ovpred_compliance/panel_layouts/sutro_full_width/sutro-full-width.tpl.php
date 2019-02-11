<?php
/**
 * @file
 * Template for Radix Sutro.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display sutro-full-width clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

    <div class="ovpred-layouts-columns">
      <div class="container-smooth">
        <div class="row">
          <div class="col-md-6 ovpred-layouts-column1 panel-panel">
            <div class="panel-panel-inner">
              <?php print $content['column1']; ?>
            </div>
          </div>
          <div class="col-md-6 ovpred-layouts-column2 panel-panel">
            <div class="panel-panel-inner">
              <?php print $content['column2']; ?>
            </div>
          </div>
        </div>
      </div>
    </div>

    <div class="ovpred-layouts-row1">
      <div class="container-smooth ovpred-layouts-row1 ">
        <div class="row">
          <div class="col-md-12 panel-panel">
            <div class="panel-panel-inner">
              <?php print $content['row1']; ?>
            </div>
          </div>
        </div>
      </div>
    </div>

    <div class="ovpred-layouts-row2">
      <div class="container-smooth">
        <div class="row">
          <div class="col-md-12 panel-panel">
            <div class="panel-panel-inner">
              <?php print $content['row2']; ?>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>

</div><!-- /.sutro -->
