(function ($) {
	Drupal.behaviors.elx_quiz_rule_trigger = {
	  attach: function (context, settings) {
		
		/*Access properties of H5P Question Set. Borrowed from https://www.drupal.org/node/2389957, https://h5p.org/node/615/xapi-coverage & https://h5p.org/node/3391*/
		H5P.externalDispatcher.on('xAPI', function(event) {
			var myObject = event.data.statement;
			if(myObject.verb.display['en-US'] == 'completed' && myObject.result.success == true) //If Finish button is clicked & quiz is passed
			{
				var content_id = myObject.object.definition.extensions['http://h5p.org/x-api/h5p-local-content-id']; //No other property in 'event' object gives content id
				$(location).attr('href','/rule/award-points-quiz-pass/'+content_id);
			}
		});
	  }
	};
}(jQuery));