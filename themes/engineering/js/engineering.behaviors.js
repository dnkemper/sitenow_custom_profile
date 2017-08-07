(function($) {

  /**
   * Numbers block countUp inview down.
   */
  Drupal.behaviors.projectWaypoint = {
    attach: function(context, settings) {
      $('.front', context).once('waypoint', function() {
        // Set a waypoint for the .block-numbers block.
        var ppWaypoint = $('.pane-engineering-blocks-homepage-numbers').waypoint(function(direction) {
          // Check the direction.
          if (direction == 'down') {
            // Add the class to start the counts.
            $(this.element).addClass('inview');

            // If numbers block is in viewport.
            if ($(".pane-engineering-blocks-homepage-numbers.inview").length > 0) {
              // Options for countUp.js.
              var numberDefault = {  
                useEasing: true,
                useGrouping: true,
                separator: ',',
                decimal: '.'
              };

              var numbersBlock = $('.pane-engineering-blocks-homepage-numbers');

              var countNumber = numbersBlock.find('.countupnumber');
              countNumber.each(function() {
                var number = $(this).find('span.count').text();
                var id = $(this).find('span.count').attr('id');
                // CountUp(element, start, end, decimals, duration, options).
                var count = new CountUp(id, 0, number, 0, 1.5, numberDefault);
                count.start();
              });

              var countPercentage = numbersBlock.find('.radialpercentage');
              countPercentage.each(function() {
                var id = $(this).find('span.count').attr('id');
                var value = $(this).find('.sr-only').text();
                var percentage = value.replace("%", "");
                $('#'+id).radialIndicator({
                  barBgColor: '#333333',
                  barColor: '#ffce00',
                  barWidth: 10,
                  initValue: 0,
                  roundCorner : false,
                  percentage: true,
                });
                var countpercent = $('#'+id).data('radialIndicator');
                countpercent.animate(percentage);
              });

            }
            // Destropy waypoint to prevent re-run.
            this.destroy();
          }
        }, {
          // Set the offset.
          offset: '80%'
        });
      });
    }
  };

  // Override radix dropdown behavior.
  Drupal.behaviors.radix_dropdown = {
    attach: function(context, setting) {
      $('.dropdown').once('radix-dropdown', function(){
      });
    }
  };

})(jQuery);
