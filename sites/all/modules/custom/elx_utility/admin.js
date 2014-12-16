(function ($, Drupal, window, document, undefined) {
Drupal.behaviors.admin_js = {
  attach: function(context, settings) {
    $('.node-type-hot-spots .field-name-field-hot-spot-image .image-preview').prepend('<div id="overlay"></div>');
  }
}
})(jQuery, Drupal, this, this.document);
