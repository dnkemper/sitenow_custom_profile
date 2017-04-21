(function ($) {
    Drupal.parallax = function() {
      if (Modernizr.touch){
      } else {
        // Init Parallax scrolling
        $.stellar({
          horizontalScrolling: false
        });
      }
    };


  // Attach uiowa_bar behavior.
  Drupal.behaviors.parallax = {
    attach: function(context, settings) {
      $('#page', context).once('parallax', function() {
        Drupal.parallax();
      });
    }
  };

})(jQuery);
