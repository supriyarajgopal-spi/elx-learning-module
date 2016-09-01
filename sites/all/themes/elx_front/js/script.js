/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document) {

  'use strict';

  // To understand behaviors, see https://drupal.org/node/756722#behaviors
  Drupal.behaviors.my_custom_behavior = {
    attach: function (context, settings) {

      /* remove the link from the @realname dropdown menu so it doesn't conflict with menu minipanel */
      $('#block-menu-menu-header-user-menu a.menu-minipanel').removeAttr('href');

      // per title link //
      $('.view-tools.view-id-tools').find('.use-ajax.ajax-processed').click(function () {

        // click should trigger function with overlay
        var linkhref = $(this).attr('href'); /* /modal/nojs/9309 */
        var linktitle = $(this).text();
        // var itemtitle = $('<div class="item-title-inmodal">' + linktitle + '</div>');

        // future perfect tense-ification //
        setTimeout(function () {

          // grab title field in all content variations //
          var display_title = $('#modalContent .field-name-field-display-title').find('.field-item.even').html();
          var itemtitle = $('<div class="item-title-inmodal">' + display_title + '</div>');

          var close_action = function () {

            // flush out prior content // required because modal content is 3 variations per 1 agnostic payload that can be any of 3 types //
            $('body.page-tools.section-tools #modalContent').hide();
            $('body.page-tools.section-tools #modalContent .node-tools').empty();
            $('body.page-tools.section-tools #modalBackdrop').hide().empty();
            $('body.page-tools.section-tools #modalContent .node-tools').remove();

            $('body.page-tools.section-tools').removeClass('ctools-modal-open').addClass('ctools-modal-close');

          };

          var isVideo = function () {
            return ($('body.page-tools.section-tools #modalContent .node-tools').find('.content video source').attr('src'));
          };
          var isPDF = function () {
            return ($('body.page-tools.section-tools #modalContent .node-tools').find('.content a').attr('href'));
          };
          var isAnimGif = function () {
            return ($('body.page-tools.section-tools #modalContent .node-tools').find('.content img').attr('src'));
          };

          var out;
          var getVideoContent = function () {

            var vout = $('body.page-tools.section-tools #modalContent .node-tools .content');
            out = vout.html();

          };
          var getAnimGifContent = function () {

            var pout = $('body.page-tools.section-tools #modalContent .node-tools .field-name-field-tool-description .field-item.even p').addClass('animgif-paragraph');
            out = $('body.page-tools.section-tools #modalContent .node-tools .field-name-field-tool-description .field-item.even p').html();
            out = pout.html();

          };


          var asset;

          // establish main asset variable for 3 version variation for modal views at FE //
          if( isVideo() ) { asset = isVideo(); getVideoContent(); }
          else if( isAnimGif() ) { asset = isAnimGif(); getAnimGifContent(); }
          else { asset = isPDF(); }


          // works fine but without body tag //
          // var asset = $('body.page-tools.section-tools #modalContent').find('.node-tools .field-name-field-tool-pdf').find('.field-items .field-item').html();
          var innerpart_newcontainer = $('body.page-tools.section-tools #modalContent .node-tools');
          var modalheader = $('<div class="modal-header"><a class="close"></a></div>').click(close_action);
          // console.log(innerpart); // var outim = innerpart.html(); alert(outim);

          $('body.page-tools.section-tools #modalBackdrop').css({'background-color': '#040A2B', 'opacity': '0.8'});
          $('body.page-tools.section-tools #modalContent').css({'border': '1px solid black', 'width': '50%', 'margin-top': '50px', 'margin-left': '10px', 'background-color': 'white', 'overflow': 'visible'});

          var btnlink = $('<a href="' + asset + '" data-node-id="' + linkhref + '" target="_blank">VIEW TOOL</a>');
          var viewbtn = $('<div id="detail-content-btn"></div>');
          $(viewbtn).append(btnlink);

          // rm dupes and prior loaded content // because it can be any of 3 types //
          $('body.page-tools.section-tools #modalContent .node-tools').remove();

          $('body.page-tools.section-tools #modalContent').find('.modal-header').remove();
          $('body.page-tools.section-tools #modalContent').find('#detail-content-btn').remove();
          $('body.page-tools.section-tools #modalContent video').remove();
          $('body.page-tools.section-tools #modalContent img.animated-gif').remove();
          $('body.page-tools.section-tools #modalContent .paragraph-animgif-container').remove();
          $('body.page-tools.section-tools #modalContent .item-title-inmodal').remove();

          // add new container after removing prior content in modal accumilated //
          $('body.page-tools.section-tools #modalContent').prepend(modalheader).append(innerpart_newcontainer);

          if (asset.match(/pdf/)) {

            $('body.page-tools.section-tools #modalContent').append(itemtitle).append(viewbtn);

          }
          else if (asset.match(/mp4/)) {

            $('body.page-tools.section-tools #modalContent').append(itemtitle).append(out);

          }
          else if (asset.match(/gif/)) {

            $('body.page-tools.section-tools #modalContent').css({'width': '50%', 'margin-left': '30px'});

            var animgif = $('<img src="' + asset + '" class="animated-gif" />');
            var panim = $('<div class="paragraph-animgif-container"></div>');
            $('body.page-tools.section-tools #modalContent').append(itemtitle);
            $(panim).append(out).append(animgif);
            $('body.page-tools.section-tools #modalContent').append(panim);

          }


          $('body.page-tools.section-tools #modalContent').find('.item-title-inmodal').css('display', 'block');

          // rm after consuming data points //
          $('body.page-tools.section-tools #modalContent .node-tools').css('display', 'none');

          // opacity 1 only after new add - item-title-inmodal
          $('body.page-tools.section-tools #modalContent .item-title-inmodal').css('opacity', '1');

          // tail end clean up of consumed DOM node breakout to 3 variants //
          $('.ctools-modal-content #modal-content').css({
            display: 'none'
          });
          $('.ctools-modal-content').css({
            display: 'none'
          });

          // center using existing facility // resize not just initial parts that render unresize at first
          $(window).trigger('resize');

        }, 500);

      });

    }
  };

})(jQuery, Drupal, this, this.document);
