/**
 * @file
 * Slick a11y dots.
 */
(function ($) {
    // Attach slickA11ySlickTrack behavior.
    Drupal.behaviors.slickA11ySlickTrack = {
        attach: function (context, settings) {
            jQuery.each( Drupal.settings.slick_a11y.slickA11y, function( i, settings ) {
                $('#' + settings.id).once('slick-a11y-slick-track', function () {
                    // Add arial-label and titles to dot button.
                    var tracks = $(this).find('.slick-track');
                    $.each(tracks, function( index, track ) {
                        if($(this).attr('role') === 'listbox'){
                            $(this).removeAttr('role');
                        }
                    });
                });
            });
        }
    };
})(jQuery);
