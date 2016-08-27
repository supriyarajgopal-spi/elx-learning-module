/**
 * Access properties of H5P Drag & Drop inside Question Set. Borrowed from https://www.drupal.org/node/2389957, https://h5p.org/node/615/xapi-coverage & https://h5p.org/node/3391
 * Does not conform to Drupal way of JS code because this is modifying the H5P library itself through hook_h5p_scripts_alter() and it is independent of Drupal
 */
(function ($) {
	H5P.externalDispatcher.on('xAPI', function(event) {
		var dragDropQuestion = event.data.statement;
		
		//Check if Question Type is Drag&Drop and only then, add the logic so that this applies to Quizzes having Drag&Drop questions only
		if (/DragQuestion/i.test(dragDropQuestion.context.contextActivities.category[0].id))
		{
			//If Check/Submit button is clicked 
			if(dragDropQuestion.verb.display['en-US'] == 'answered')
			{
				//Show the feedback (across the star animation that appears) as set in 'Correct/Incorrect feedback text' H5P setting
				if(dragDropQuestion.result.success == true)
				{
					//console.log(this) prints the entire set of options available. This function is defined in H5P Question library's question.js
					this.updateFeedbackContent(this.options.feedback,false); //'false' in 2nd parameter replaces the feedback to what is set in Settings form instead of appending
				}
				else
					this.updateFeedbackContent(this.options.incorrect_feedback,false); //'incorrect_feedback' is the 'name' property defined in semantics.json or hook_h5p_semantics_alter()

				console.log(this.options);
			}
		}
	});
})(jQuery);