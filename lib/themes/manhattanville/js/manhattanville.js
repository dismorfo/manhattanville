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
        console.log(newWidth);
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

})(jQuery);
