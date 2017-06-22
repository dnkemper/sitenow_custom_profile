<?php

/**
 * @file
 * Custom template for annex construction block.
 *
 * @ingroup themeable
 */
?>
<div class="pane-custom">
  <p>Watch the new annex building construction from anywhere in the world with these daily still pictures. Time lapse videos from construction cameras: <a href="https://one.engineering.uiowa.edu/sites/default/files/annex/east_cam_14day.mp4">West looking camera</a>  <a href="https://one.engineering.uiowa.edu/sites/default/files/annex/west_cam_14day.mp4">East looking camera</a></p>
  <h2>West looking construction camera</h2>
  <h2><img alt="Current construction camera looking West" src="https://one.engineering.uiowa.edu/sites/default/files/annex/East_Camera.jpg" /></h2>
  </br>
  <h2>North-East looking construction camera</h2>
  <h2><img alt="Current construction camera looking North-East" src="https://one.engineering.uiowa.edu/sites/default/files/annex/West_Camera.jpg" /></h2>
  <script>
    jQuery(document).ready(function(){
      setInterval(function(){
        jQuery("img[alt='Current construction camera looking West']").attr("src", "https://one.engineering.uiowa.edu/sites/default/files/annex/East_Camera.jpg?"+new Date().getTime());
        jQuery("img[alt='Current construction camera looking North-East']").attr("src", "https://one.engineering.uiowa.edu/sites/default/files/annex/West_Camera.jpg?"+new Date().getTime());
      }, 60011);
    });
  </script>
  <p>Downloadable versions of the time lapse videos from construction cameras: <a href="https://one.engineering.uiowa.edu/sites/default/files/annex/east_cam_14day.mp4">West looking camera</a>&nbsp;&nbsp; <a href="https://one.engineering.uiowa.edu/sites/default/files/annex/west_cam_14day.mp4">East looking camera</a> (play with your media-player).</p>
</div>
