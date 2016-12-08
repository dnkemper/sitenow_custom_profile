<?php
/**
 * @file
 * Template for Panopoly Brenham Flopped.
 * Lovingly added by bneil and regnskygge so that our responsive layouts kicked more ass.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display brenham-flopped clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="brenham-flopped-container brenham-flopped-header clearfix panel-panel">
    <div class="brenham-flopped-container-inner brenham-flopped-header-inner panel-panel-inner">
      <?php print $content['header']; ?>
    </div>
  </div>
  
  <div class="brenham-flopped-container brenham-flopped-column-content clearfix">
    
    <div class="brenham-flopped-column-content-region brenham-flopped-sidebar panel-panel">
      <div class="brenham-flopped-column-content-region-inner brenham-flopped-sidebar-inner panel-panel-inner">
        <?php print $content['sidebar']; ?>
      </div>
    </div>

    <div class="brenham-flopped-column-content-region brenham-flopped-content panel-panel">
      <div class="brenham-flopped-column-content-region-inner brenham-flopped-content-inner panel-panel-inner">
        <?php print $content['contentmain']; ?>
      </div>
    </div>
    
  </div>
  
</div><!-- /.brenham-flopped -->
