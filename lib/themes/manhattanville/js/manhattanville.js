;(function ($) {
  Drupal.behaviors.manhattanville =  {
    attach: function(context, settings) {
      $('body').delegate( ".toolbar-shortcuts a", "click", function(e) {
      	e.preventDefault();
      });
    }
  };
})(jQuery);