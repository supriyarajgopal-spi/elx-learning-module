(function ($) {
	Drupal.behaviors.elx_header = {
	  attach: function (context, settings) {
		var user_image = settings.elx_header.user_image; //Get the <img /> or <div> from hook_preprocess_page()
		if($('div#block-menu-menu-header-user-menu ul.menu > li.first .user_image_gnav').length == 0) //Append only if image/div doesn't already exist
			$('div#block-menu-menu-header-user-menu ul.menu > li.first > a').append(user_image);
	  }
	};
}(jQuery));