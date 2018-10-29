/**
 * @file
 * Slick a11y events.
 */
(function ($) {
  // Attach slickA11yEvents behavior.
  Drupal.behaviors.slickA11yEvents = {
    attach: function (context, settings) {
      jQuery.each( Drupal.settings.slick_a11y.slickA11y, function( i, settings ) {
        $('.slick').once('slick-a11y-events', function () {
          // When a slide is changed.
          $(this).on('init', function( slick ) {
            var currentSlide = 0;
            var nextArrow = $(this).find(".slick-next");
            var prevArrow = $(this).find(".slick-prev");
            var lastSlide = settings.titles.length - 1;
            if (currentSlide == lastSlide) {
              nextArrow.attr('title', 'Next Slide ' + settings.titles[0]).attr('arial-label', 'Next Slide ' + settings.titles[0]);
              prevArrow.attr('title', 'Previous Slide ' + settings.titles[currentSlide - 1]).attr('aria-label', 'Previous Slide ' + settings.titles[currentSlide - 1]);
            }
            else if (currentSlide == 0) {
              nextArrow.attr('title', 'Next Slide ' + settings.titles[1]).attr('aria-label', 'Next Slide ' + settings.titles[1]);
              prevArrow.attr('title', 'Previous Slide ' + settings.titles[lastSlide]).attr('aria-label', 'Previous Slide ' + settings.titles[lastSlide]);
            }
            else {
              nextArrow.attr('title', 'Next Slide ' + settings.titles[currentSlide + 1]).attr('aria-label', 'Next Slide ' + settings.titles[currentSlide + 1]);;
              prevArrow.attr('title', 'Previous Slide ' + settings.titles[currentSlide - 1]).attr('aria-label', 'Previous Slide ' + settings.titles[currentSlide - 1]);
            }
          });

          // When a slide is changed.
          $(this).on('afterChange', function( slick, currentSlide ) {
            var currentSlide = currentSlide.currentSlide;
            var nextArrow = $(this).find(".slick-next");
            var prevArrow = $(this).find(".slick-prev");
            var lastSlide = settings.titles.length - 1;
            if (currentSlide == lastSlide) {
              nextArrow.attr('title', 'Next Slide ' + settings.titles[0]).attr('arial-label', 'Next Slide ' + settings.titles[0]);
              prevArrow.attr('title', 'Previous Slide ' + settings.titles[currentSlide - 1]).attr('aria-label', 'Previous Slide ' + settings.titles[currentSlide - 1]);
            }
            else if (currentSlide == 0) {
              nextArrow.attr('title', 'Next Slide ' + settings.titles[1]).attr('aria-label', 'Next Slide ' + settings.titles[1]);
              prevArrow.attr('title', 'Previous Slide ' + settings.titles[lastSlide]).attr('aria-label', 'Previous Slide ' + settings.titles[lastSlide]);
            }
            else {
              nextArrow.attr('title', 'Next Slide ' + settings.titles[currentSlide + 1]).attr('aria-label', 'Next Slide ' + settings.titles[currentSlide + 1]);;
              prevArrow.attr('title', 'Previous Slide ' + settings.titles[currentSlide - 1]).attr('aria-label', 'Previous Slide ' + settings.titles[currentSlide - 1]);
            }
          });
        });
      });
    }
  };
})(jQuery);
