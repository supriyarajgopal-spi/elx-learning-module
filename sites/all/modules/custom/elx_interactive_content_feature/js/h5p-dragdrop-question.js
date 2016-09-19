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
			//INSTANT FEEDBACK AS SOON AS ELEMENT IS DROPPED. USED IN "DRAG-MATCH"
			//Whenever a draggable is dropped to a dropzone
			if(dragDropQuestion.verb.display['en-US'] == 'interacted')
			{	
				this.showAllSolutions(false); //Set skipVisuals = false by passing parameter which will make instant feedback to be added automatically. Defined in H5P.DragQuestion\dragquestion.js
				this.showButton('check-answer'); //Show 'Check/Submit' button. By default, this is hidden if skipVisuals = false (as set above)
				
				//Enable each draggable which is disabled by default if skipVisuals = false (as set above)
				this.draggables.forEach(function(draggable) {
					draggable.enable();
					//If already dropped in a dropzone, lock it there.
					if(draggable.isInDropZone(draggable.id))
						draggable.disable();
				});

				//Change text of draggable element depending on whether it is dropped in correct dropzone or not
				var lastElementChild = this.$container[0].lastElementChild; //Last child of container holds the draggable element text & other properties
				if(lastElementChild.classList.contains("h5p-correct") && this.options.instant_feedback.length != 0 && this.options.instant_feedback != '<br>' && this.options.instant_feedback != '<p></p>') //Borrowed from https://developer.mozilla.org/en/docs/Web/API/Element/classList
					this.$container[0].lastElementChild.innerHTML = this.options.instant_feedback;
			}
			
			//FEEDBACK WHEN SUBMIT IS CLICKED. USED IN "DRAG-SELECT"
			//If Check/Submit button is clicked 
			if(dragDropQuestion.verb.display['en-US'] == 'answered')
			{
				var scoreText; //Used to convert tokens
				//Show the feedback (across the star animation that appears) as set in 'Correct/Incorrect feedback text' H5P setting
				if(dragDropQuestion.result.success == true)
				{
					//console.log(this) prints the entire set of options available. This function is defined in H5P Question library's question.js
					scoreText = this.options.feedback.replace('@score', this.points).replace('@total', maxScore);
				}
				else
					scoreText = this.options.incorrect_feedback.replace('@score', this.points).replace('@total', maxScore); //'incorrect_feedback' is the 'name' property defined in semantics.json or hook_h5p_semantics_alter()
				this.updateFeedbackContent(scoreText,false);
			}
		}
	});
})(jQuery);
