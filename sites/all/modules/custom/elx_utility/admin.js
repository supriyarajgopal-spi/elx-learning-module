(function ($, Drupal, window, document, undefined) {
  Drupal.behaviors.admin_js = {
    attach: function(context, settings) {

      // Adds overlay div for hotspot admin preview
      $('.node-type-hot-spots .field-name-field-hot-spot-image .image-preview, .page-node-add-hot-spots .field-name-field-hot-spot-image .image-preview').prepend('<div id="overlay"></div>');

      /**
       * Adds a Check All Option to a group of Checkboxes in Drupal jQuery Plugin
       *
       * To make this work you need pass to this function, a div that is a decendent
         of a form and an ancestor of multiple checkboxes. It is specifically tuned to
         drupal, but can be used for any html by setting the options. Here's and
         example, where .form-item-list is fapi element of type checkboxes.
       *
       * @code
       *  $('#my-form .form-item-list').drupalCheckAll();
       * @endcode
       *
       * @param options
       * - label: What should it say, default is 'Check All'; this will be sent
         through Drupal.t if that method exists
       * - location: 'top' or 'bottom'
       * - prefix: html to prepend to the new checkbox element
       * - suffix: html to append to the new checkbox element
       * - id: a specific id to add to the new checkbox element
       * - callback: a function to fire on click
       *
       * @return $(this)
       *
       * @author Aaron Klump, In the Loft Studios, LLC
       * @see http://www.intheloftstudios.com
       * @see https://gist.github.com/4261607
       */
      $.fn.drupalCheckAll = function(options) {

        // Create some defaults, extending them with any options that were provided
        var settings = $.extend( {
          'label'     : 'Check All',
          'location'  : 'prepend',
          'prefix'    : '<div class="form-item select-all">',
          'id'        : $(this).parents('form').attr('id') + '-trigger',
          'classes'   : 'form-checkbox drupal-check-all-trigger',
          'suffix'    : '</div>',
          'children'  : '.form-checkbox',
          'callback'  : null
        }, options);

        var $wrapper = $(this);
        // Do not apply if total children is less than 2
        if ($wrapper.find(settings.children).length < 2) {
          console.log($wrapper.find(settings.children).length);
          return $(this);
        }

        // Check if we can translate (the test is for portability outside Drupal)
        if (Drupal.t !== undefined) {
          settings.label = Drupal.t(settings.label);
        }

        var $toggle = $(settings.prefix + '<input id="' + settings.id + '" type="checkbox" class="' + settings.classes + '"> <label for="' + settings.id + '" class="option">' + settings.label + '</label>' + settings.suffix);

        switch (settings.location) {
          case 'bottom':
            $wrapper.append($toggle);
            break;
          case 'top':
          default:
            $wrapper.prepend($toggle);
            break;
        }

        // Click handler
        $toggle.find(settings.children).click(function(){
          var state = $(this).is(':checked');
          var $children = $wrapper.find(settings.children);
          $children.attr('checked', state);
          // Fire callback if provided
          if (options.callback) {
            $form = $wrapper.parents('form');
            options.callback($form, $children);
          }
        });

        return $(this);
      };
      var options = {'label': '<b>Select all</b>',};
      $('#product-detail-node-form div[id^="edit-field-markets-"],' +
        '#content-object-node-form div[id^="edit-field-markets-"],' +
        '#tools-node-form div[id^="edit-field-markets-"],' +
        '#badge-node-form div[id^="edit-field-markets-"],' +
        '#diary-node-form div[id^="edit-field-markets-"],' +
        '#disclaimer-node-form div[id^="edit-field-markets-"]').drupalCheckAll(options);

      // Removes special characters from Administrative title field
      $('.field-name-title-field input').alphanum({
        disallow   : '?$#!@&()',
        allow      : '-.',
      });
    }
  }
})(jQuery, Drupal, this, this.document);
