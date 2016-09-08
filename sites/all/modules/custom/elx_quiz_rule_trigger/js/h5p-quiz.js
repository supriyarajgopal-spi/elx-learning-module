(function ($) {
	Drupal.behaviors.elx_quiz_rule_trigger = {
	  attach: function (context, settings) {
		
		/*Access properties of H5P Question Set. Borrowed from https://www.drupal.org/node/2389957, https://h5p.org/node/615/xapi-coverage & https://h5p.org/node/3391*/
		H5P.externalDispatcher.on('xAPI', function(event) {
			var myObject = event.data.statement;
			var hasSummarySlide = $('iframe.h5p-iframe').contents().find('div.h5p-slide.h5p-summary-slide').length;
			
			if(event.getVerb() == 'completed' && myObject.result.success == true && hasSummarySlide) //If Finish button is clicked & quiz is passed & CP has a summary slide
			{
				var content_id = myObject.object.definition.extensions['http://h5p.org/x-api/h5p-local-content-id']; //No other property in 'event' object gives content id
				
				/* 'finish' event in h5p.js is never triggered when QuestionSet is inside CoursePresentation because it doesn't handle activity inside another activity
				 * So, since we know that Finish button is clicked, call modified_setFinished() here
				 * Although this function(or its original) is deprecated, triggering finish event i.e H5P.trigger(this, 'finish'), won't work
				 * Borrowed this line from h5p/library/js/h5p-x-api.js file
				 */
				modified_setFinished(content_id, event.getScore(), event.getMaxScore(),event.data.time);
				
				$(location).attr('href','/rule/award-points-quiz-pass/'+content_id);
			}
		});
		
		/**
		 * This function a clone of setFinished() in h5p/library/js/h5p.js file
		 * Purpose: The value 'H5P.opened[contentId]' was undefined when QuestionSet is used inside a CoursePresentation. Hence, an additonal condition needed to be added
		 *          Since hacking files of a contributed module is bad practice, cloned the function here.
		 * Post finished results for user.
		 *
		 * @deprecated
		 *   Do not use this function directly, trigger the finish event instead.
		 *   Will be removed march 2016
		 * @param {number} contentId
		 *   Identifies the content
		 * @param {number} score
		 *   Achieved score/points
		 * @param {number} maxScore
		 *   The maximum score/points that can be achieved
		 * @param {number} [time]
		 *   Reported time consumption/usage
		 */
		function modified_setFinished(contentId, score, maxScore, time) {
		  if (H5PIntegration.postUserStatistics === true) {
			/**
			 * Return unix timestamp for the given JS Date.
			 *
			 * @private
			 * @param {Date} date
			 * @returns {Number}
			 */
			var toUnix = function (date) {
			  return Math.round(date.getTime() / 1000);
			};

			// Post the results
			H5P.jQuery.post(H5PIntegration.ajax.setFinished, {
			  contentId: contentId,
			  score: score,
			  maxScore: maxScore,
			  opened: (H5P.opened[contentId] != undefined) ? toUnix(H5P.opened[contentId]) : '', //Only change as compared to the original setFinished() in h5p.js
			  finished: toUnix(new Date()),
			  time: time,
			  token: H5PIntegration.tokens.result
			});
		  }
		};
	  }
	};
}(jQuery));