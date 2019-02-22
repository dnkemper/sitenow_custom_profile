/**
 * @file
 * Slick a11y dots.
 */
(function ($) {
  // Attach slickA11yDots behavior.
  Drupal.behaviors.slickA11yDots = {
    attach: function (context, settings) {
      jQuery.each( Drupal.settings.slick_a11y.slickA11y, function( i, settings ) {
        $('#' + settings.id).once('slick-a11y-dots', function () {
          // Add arial-label and titles to dot button.
          var dots = $(this).find('.slick-dots li button');
          $.each(dots, function( index, dot ) {
            $(this).attr('title', 'Jump to ' + settings.titles[index]).attr('aria-label', 'Jump to ' + settings.titles[index]);
          });
        });
      });
    }
  };
})(jQuery);
