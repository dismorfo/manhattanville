;(function ($) {
  Drupal.behaviors.manhattanville = {
    attach: function(context, settings) {
      $('body').delegate( ".toolbar-shortcuts a", "click", function(e) {

      });
    }
  };

  // TODO: throttle resize http://www.paulirish.com/2009/throttled-smartresize-jquery-event-handler/
  Drupal.behaviors.resizeVideos = {
    attach: function(context, settings) {

      var $allVideos = $("iframe[src^='http://www.youtube.com']"),
        $fluidEl = $("div.body-content-inner");

      $allVideos.each(function() {
        $(this)
           .data('aspectRatio', this.height / this.width)
           .removeAttr('height')
           .removeAttr('width');
      });

      $(window).resize(function() {
        var newWidth = $fluidEl.width();

        $allVideos.each(function() {
          console.log($(this).data('aspectRatio'));
          var $el = $(this);
          $el
            .width(newWidth)
            .height(newWidth * $el.data('aspectRatio'));
        });
      }).resize();
    }
  };

  // add pure css classes to any forms
  Drupal.behaviors.purifyForms = {
    attach: function(context, settings) {

      var allForms = $("form");
      allForms.each(function() {
        $(this).addClass('pure-form');
      });

      var allInputs = $('div.sidebar-right input.form-text');
      allInputs.each(function() {
        $(this).addClass('pure-input-2-3');
      });
    }
  };

  // set the height of the vertical rule on non-sidebar pages
  // TODO - this could be better
  Drupal.behaviors.verticalRule = {
    attach: function(context, settings) {

      fluidEl = $('div.body-content-inner');
      spacerHeight = .7 * fluidEl.height();

      if ($('div.vertical-spacer').length > 0) {
        spacer = $('div.vertical-spacer');
        spacer.height(spacerHeight);

        spacer.css('position', 'relative');
        spacer.css('top', '10px');
      }
    }
  };


})(jQuery);
