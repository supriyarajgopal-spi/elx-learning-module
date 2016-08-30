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
        var itemtitle = $('<div class="item-title-inmodal">' + linktitle + '</div>');

        // future perfect tense-ification //
        setTimeout(function () {

          var action = function () {

            $('body.page-tools.section-tools #modalContent').hide();
            $('body.page-tools.section-tools #modalContent .node-tools').empty();
            $('body.page-tools.section-tools #modalBackdrop').hide().empty();
            $('body.page-tools.section-tools #modalContent .node-tools').remove();

            $('body.page-tools.section-tools').removeClass('ctools-modal-open').addClass('ctools-modal-close');

          };

          /*

          var log2 = $('body.page-tools.section-tools #modalContent .node-tools').find('.file-application-pdf').size();
          var log3 = $('body.page-tools.section-tools #modalContent .node-tools').find('.file-video-mp4').size();
          var log4 = $('body.page-tools.section-tools #modalContent .node-tools').find('.file-image-gif').size();

          */

          var out;
          var isVideo = function () {

            var vout = $('body.page-tools.section-tools #modalContent .node-tools .content');
            out = vout.html();

            return ($('body.page-tools.section-tools #modalContent .node-tools').find('.content video source').attr('src'));
          };
          var isPDF = function () {
            return ($('body.page-tools.section-tools #modalContent .node-tools').find('.content a').attr('href'));
          };
          var isAnimGif = function () {

            var pout = $('body.page-tools.section-tools #modalContent .node-tools .field-name-field-tool-description .field-item.even p').addClass('animgif-paragraph');
            out = $('body.page-tools.section-tools #modalContent .node-tools .field-name-field-tool-description .field-item.even p').html();
            out = pout.html();

            return ($('body.page-tools.section-tools #modalContent .node-tools').find('.content img').attr('src'));
          };

          var isPDForAnimGif = function () { return (isPDF() ? isPDF() : isAnimGif()); };
          var asset = isVideo() ? isVideo() : isPDForAnimGif();
          // (isPDF()?isPDF():isAnimGif());

          // works fine but without body tag //
          // var asset = $('body.page-tools.section-tools #modalContent').find('.node-tools .field-name-field-tool-pdf').find('.field-items .field-item').html();
          var innerpart = $('body.page-tools.section-tools #modalContent .node-tools');
          var modalheader = $('<div class="modal-header"><a class="close"></a></div>').click(action);
          // console.log(innerpart); // var outim = innerpart.html(); alert(outim);

          $('body.page-tools.section-tools #modalBackdrop').css({'background-color': '#040A2B', 'opacity': '0.8'});
          $('body.page-tools.section-tools #modalContent').css({'border': '1px solid black', 'width': '60%', 'margin-top': '50px', 'margin-left': '10px', 'background-color': 'white', 'overflow': 'visible'});

          var btnlink = $('<a href="' + asset + '" data-node-id="' + linkhref + '" target="_blank">VIEW TOOL</a>');
          var viewbtn = $('<div id="detail-content-btn"></div>');
          $(viewbtn).append(btnlink);

          // rm dupes
          $('body.page-tools.section-tools #modalContent').find('#detail-content-btn').remove();
          $('body.page-tools.section-tools #modalContent .node-tools').remove();
          $('body.page-tools.section-tools #modalContent .item-title-inmodal').remove();
          $('body.page-tools.section-tools #modalContent .paragraph-animgif-container').remove(); // img
          $('body.page-tools.section-tools #modalContent video').remove(); // vid

          $('body.page-tools.section-tools #modalContent').find('.modal-header').remove();
          $('body.page-tools.section-tools #modalContent').find('img.animated-gif').remove();

          $('body.page-tools.section-tools #modalContent').prepend(modalheader).append(innerpart);

          if (asset.match(/pdf/)) {

            // alert('pdf');
            /* $('.ctools-modal-content #modal-content').css({
              'display':'none',
            });
            $('.ctools-modal-content').css({
              'display':'none',
              //'height':'250px !important'
            });*/

            $('body.page-tools.section-tools #modalContent').append(itemtitle).append(viewbtn);

          }
          else if (asset.match(/mp4/)) {

            $('body.page-tools.section-tools #modalContent').append(itemtitle).append(out);

          }
          else if (asset.match(/gif/)) {

            $('body.page-tools.section-tools #modalContent').css({'width': '50%', 'margin-left': '30px'});

            var animgif = $('<img src="' + asset + '" style="padding: 30px;" class="animated-gif" />');

            /*

            $('#modalContent').css({
              'background-color':'green',
              'height':'250px'
            });*/

            var panim = $('<div class="paragraph-animgif-container"></div>');
            $('body.page-tools.section-tools #modalContent').append(itemtitle);
            $(panim).append(out).append(animgif);
            $('body.page-tools.section-tools #modalContent').append(panim);

          }
          $('body.page-tools.section-tools #modalContent').find('.item-title-inmodal').css('display', 'block');
          // setTimeout(function(){  $('body.page-tools.section-tools #modalContent .item-title-inmodal').css('opacity','1'); },300);

          // 2nd rm logarith after appendages //
          $('body.page-tools.section-tools #modalContent .node-tools').css('display', 'none');

          // opacity 1 only after new add - item-title-inmodal
          $('body.page-tools.section-tools #modalContent .item-title-inmodal').css('opacity', '1');

          $('.ctools-modal-content #modal-content').css({
            display: 'none'
          });
          $('.ctools-modal-content').css({
            display: 'none'
            // 'height':'250px !important'
          });


        }, 500);

      });

    }
  };

})(jQuery, Drupal, this, this.document);
