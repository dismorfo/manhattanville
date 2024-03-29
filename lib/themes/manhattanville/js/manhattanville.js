;(function ($) {

  Drupal.behaviors.manhattanville = {
    attach: function(context, settings) {

      var tooltip_columbia_team = $('.view-columbia-project-team .views-container')
        , tooltip_design_team = $('.view-design-team .views-container')
        , name
        , sub_content;

      if (tooltip_columbia_team.length > 0) {
        tooltip_columbia_team.each(function() {

          name = $(this).find('.views-field-field-name .field-content');
          sub_content = $(this).find('.views-field-field-profile .field-content');

          $(this).attr('title', name.text());
          $(this).colorbox({ html: "<div><p>" + sub_content.text() + "</p></div>", width: "80%", height: "80%" });

        });
      }

      if (tooltip_design_team.length > 0) {
        tooltip_design_team.each(function() {
          name = $(this).find('.views-field-field-name .field-content');
          sub_content = $(this).find('.views-field-field-profile .field-content');
          $(this).attr('title', name.html());
          $(this).colorbox({ html: "<div><p>" + sub_content.text() + "</p></div>", width: "80%", height: "80%" });
        });
      }
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

      $("form#cu-search").addClass('pure-form');

      var allControlGroups = $("form div.form-item");
      allControlGroups.each(function() {
        $(this).addClass('pure-control-group');
      });
    }
  };

  window.onload = function() {
    height = $('div.body-content-inner').outerHeight(true);
    top = $('div.pure-u-3-4').offset().top;
    left = $('div.pure-u-3-4').offset().left;


    $('div.vertical-spacer').css('top', top);
    $('div.vertical-spacer').css('left', left);
    $('div.vertical-spacer').height(height - 20);
  };

})(jQuery);
