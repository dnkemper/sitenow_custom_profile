/**
 * @file
 * This script holds user interaction functionality for the UHD base theme.
 */

// Namespace jQuery to avoid conflicts.
(function($) {
  // Fix to hide AJAX error alert messages.
  // http://drupal.org/node/1232416#comment-6667014
  window.alert = function(arg) { if (window.console && console.log) { console.log(arg);}};

  // Define the uhdBaseUI behavior.
  Drupal.uhdBaseUI = function() {
    $('#nav-link').click(function(event) {
      $("html, body").animate({ scrollTop: $('#block-system-main-menu').offset().top }, 600);
      return false;
    });
    $('#back-to-top').click(function(event) {
      $("html, body").animate({ scrollTop: 0 }, 600);
      return false;
    });
  };

  // Attach uhdBaseUI behavior.
  Drupal.behaviors.uhdBaseUI = {
    attach: function(context, settings) {
      $('#page', context).once('uhdBaseUI', function() {
        Drupal.uhdBaseUI();
      });
    }
  };

})(jQuery);