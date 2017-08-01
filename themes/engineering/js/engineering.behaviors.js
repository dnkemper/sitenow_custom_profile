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
              // CountUp(element, start, end, decimals, duration, options).
              var countOne = new CountUp("countone", 0, 60000, 0, 1.5, numberDefault);
              countOne.start();
              // Options for radialIndicator.
              $('#counttwo').radialIndicator({
                barBgColor: '#333333',
                barColor: '#ffce00',
                barWidth: 10,
                initValue: 0,
                roundCorner : false,
                percentage: true,
              });
              // Assign radialIndicator.
              var countTwo = $('#counttwo').data('radialIndicator');
              // Animate radialIndicator.
              countTwo.animate(94);
              // Options for radialIndicator.
              $('#countthree').radialIndicator({
                  barBgColor: '#333333',
                  barColor: '#ffce00',
                  barWidth: 10,
                  initValue: 0,
                  roundCorner : false,
                  percentage: true,
              });
              // Assign radialIndicator.
              var countThree = $('#countthree').data('radialIndicator');
              // Animate radialIndicator.
              countThree.animate(29);
              // CountUp(element, start, end, decimals, duration, options).
              var countFour = new CountUp("countfour", 0, 30, 0, 1.5, numberDefault);
              countFour.start();
              // CountUp(element, start, end, decimals, duration, options).
              var countFive = new CountUp("countfive", 0, 700, 0, 1.5, numberDefault);
              countFive.start();
              // Options for radialIndicator.
              $('#countsix').radialIndicator({
                  barBgColor: '#333333',
                  barColor: '#ffce00',
                  barWidth: 10,
                  initValue: 0,
                  roundCorner : false,
                  percentage: true,
              });
              // Assign radialIndicator.
              var countSix = $('#countsix').data('radialIndicator');
              // Animate radialIndicator.
              countSix.animate(92);


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
