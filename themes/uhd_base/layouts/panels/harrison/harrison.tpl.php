<?php
/**
 * @file
 * Template for harrison Advanced.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display harrison clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="harrison-container harrison-header clearfix panel-panel">
    <div class="harrison-container-inner harrison-header-inner panel-panel-inner">
      <?php print $content['header']; ?>
    </div>
  </div>

  <div class="harrison-container harrison-middle-content clearfix">
    <div class="harrison-column-middle-region harrison-middle_first panel-panel">
      <div class="harrison-column-middle-region-inner harrison-middle_first-inner panel-panel-inner">
        <?php print $content['middle_first']; ?>
      </div>
    </div>
    <div class="harrison-column-middle-region harrison-middle_second panel-panel">
      <div class="harrison-column-middle-region-inner harrison-middle_second-inner panel-panel-inner">
        <?php print $content['middle_second']; ?>
      </div>
    </div>
  </div>

  <div class="harrison-container harrison-middle clearfix panel-panel">
    <div class="harrison-container-inner harrison-middle-inner panel-panel-inner">
      <?php print $content['middle_third']; ?>
    </div>
  </div>

  <div class="harrison-container harrison-column-content clearfix">
    <div class="harrison-column-content-region harrison-column1 panel-panel">
      <div class="harrison-column-content-region-inner harrison-column1-inner panel-panel-inner">
        <?php print $content['column1']; ?>
      </div>
    </div>
    <div class="harrison-column-content-region harrison-column2 panel-panel">
      <div class="harrison-column-content-region-inner harrison-column2-inner panel-panel-inner">
        <?php print $content['column2']; ?>
      </div>
    </div>
  </div>
  <div class="harrison-container harrison-footer clearfix panel-panel">
    <div class="harrison-container-inner harrison-footer-inner panel-panel-inner">
      <?php print $content['footer']; ?>
    </div>
  </div>

</div><!-- /.harrison -->
