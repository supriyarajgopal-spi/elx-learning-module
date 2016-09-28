/**
 * Redirects existing old guest URLs to new guest URL
 * Borrowed from https://css-tricks.com/snippets/javascript/get-url-and-url-parts-in-javascript/
 */
(function ($) {
  Drupal.behaviors.elx_guest_url = {
    attach: function (context, settings) {
      var pathArray = location.hash.split('?');
      if (pathArray[0] == '#/signup') {
        // Redirect to new URL
        window.location.replace(Drupal.settings.basePath + 'user/register?' + pathArray[1]);
      }
    }
  };
}(jQuery));