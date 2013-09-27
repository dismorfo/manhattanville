;(function ($) {
    Drupal.behaviors.block_manhattanville = {
        attach: function(context, settings) {
            $('body').delegate(".node-contact-form", "submit", function(e) {
                e.preventDefault();
                var form = $('.node-contact-form')
                  , messages = $('#console');
                $.post(form.attr('action'), form.serialize(), function( data, textStatus, jqXHR ) {
                    if (jqXHR.status === 200) { 
                        if (messages.length) {      
                            var content = $( data ).find( "#console" );
                            if (content.length) {
                                messages.append(content);
                            }    
                        }
                    } 
                })
            });
        }
    };
})(jQuery);