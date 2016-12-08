/**
* Renders the hours for an entity.
*/
(function ($) {
  Drupal.behaviors.OVPREDReportingUnits = {
    attach: function (context, settings) {
      // Set some defaults states.
      $('.block--ovpred-blocks-ovpred-units', context).once('setCollapse', function () {
        // Hide the content area and set aria-expanded to false.
        $('.ovpred-units-content').toggle().attr('aria-expanded','false');

        // Set aria-controls to the content div, add collapsed class.
        $('.ovpred-units-title').attr('aria-controls','ovpred-units-content').toggleClass('collapsed');
      });

      // Click function for the title text.
      $('.ovpred-units-title').click(function () {
        // Toggle the collapsed class.
        $(this).toggleClass('collapsed');

        // Show or hide the content div.
        $('.ovpred-units-content').toggle('fast');

        // Determine which aria-expanded state to use.
        switch ($('.ovpred-units-title').attr('aria-expanded')) {
          case 'true':
            $('.ovpred-units-title').attr('aria-expanded','false');
            break;
          case 'false':
            $('.ovpred-units-title').attr('aria-expanded','true');
            break;
        }
      });
    }
  };
})(jQuery);
