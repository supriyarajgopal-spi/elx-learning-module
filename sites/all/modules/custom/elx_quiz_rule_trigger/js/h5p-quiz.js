(function ($) {
	Drupal.behaviors.elx_quiz_rule_trigger = {
	  attach: function (context, settings) {
		
		//Access properties of H5P Question Set. Borrowed from https://www.drupal.org/node/2389957 & https://h5p.org/node/615/xapi-coverage
		var H5P = H5P || {};
		
		if(H5P.externalDispatcher !== undefined)
			H5P.externalDispatcher.on('xAPI', eventHandler);
		
		function eventHandler(event) {
			var myObject = event.data.statement;
			if(myObject.verb.display['en-US'] == 'completed' && myObject.result.success == true) //If Finish button is clicked & quiz is passed
			{
				//TODO: Navigate to a URL which will be defined in hook_menu() whose callback will invoke the rule
				
				//console.log('Passed!');
				//console.log(event);
			}
		}
	  }
	};
}(jQuery));