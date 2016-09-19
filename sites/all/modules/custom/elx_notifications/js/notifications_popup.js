(function ($) {
	Drupal.behaviors.elx_notifications = {
	  attach: function (context, settings) {
		
		var sitename = '';
		if(window.location.pathname.length != 0)
		{
			var pathArray = window.location.pathname.split('/'); //Get the query string
			sitename = '/'+pathArray[1]; //0th element will be empty because pathname will be of form /<sitename>/
		}
		var popup_url = window.location.protocol + "//" + window.location.host + sitename + "/notifications_popup"; //Defined in hook_menu()
		
		//Prevent navigating to page as per default
		$('a.link-badge-wrapper').click(function(event) {
			event.preventDefault();
		});
		
		//Show tooltip
		$('a.link-badge-wrapper').each(function(event) {
			 $(this).qtip({
				content: {
					text: function(event, api) {
						$.ajax({
							url: popup_url
						})
						.then(function(content) {
							api.set('content.text', content); // Set the tooltip content upon successful retrieval
						}, function(xhr, status, error) {
							api.set('content.text', status + ': ' + error); // Upon failure... set the tooltip content to error
						});
						return 'Please wait...'; // Set some initial text
					},
					button: true //Provides a close button to the tooltip
				},
				show: 'click', //Shows popup only on click of link
				hide: {
					event: false //Doesn't hide tooltip on mouseout of link
				},
				position: {
					viewport: $(window) //Responsive
				},
				//style: 'qtip-wiki'
				style: {
					classes: 'qtip-light qtip-shadow'
				}
			 });
		});
	  }
	};
}(jQuery));