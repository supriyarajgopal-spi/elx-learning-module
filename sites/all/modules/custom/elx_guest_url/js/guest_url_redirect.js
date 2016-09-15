/**
 * Redirects existing old guest URLs to new guest URL
 * Borrowed from https://css-tricks.com/snippets/javascript/get-url-and-url-parts-in-javascript/
 */
(function ($) {
	Drupal.behaviors.elx_guest_url = {
	  attach: function (context, settings) {
		var pathArray = window.location.href.split(window.location.pathname); //Split the full URL based on pathname
		var queryString = pathArray[1].split('?'); //Get the query string
		var newURL = window.location.protocol + "//" + window.location.host + window.location.pathname + "signup"; //Form the new URL
		
		if(queryString[1] !== undefined) //If query string exists, append to the new URL
			newURL = newURL + '?' + queryString[1];
	
		window.location.replace(newURL); //Redirect to new URL
	  }
	};
}(jQuery));