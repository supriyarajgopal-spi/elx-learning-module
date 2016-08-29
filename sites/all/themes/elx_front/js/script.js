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
        var itemtitle = $('<div class="item-title-inmodal" style="display:none;margin:25px;color:#040a2b;font-family:optimadisplaylightlight;font-size:18px;text-decoration:none;">' + linktitle + '</div>');

        // future perfect tense-ification //
        setTimeout(function () {

          var action = function () {

            $('body.page-tools.section-tools #modalContent').hide();
            $('body.page-tools.section-tools #modalContent .node-tools').empty();
            $('body.page-tools.section-tools #modalBackdrop').hide().empty();
            $('body.page-tools.section-tools #modalContent .node-tools').remove();

            $('body.page-tools.section-tools').removeClass('ctools-modal-open').addClass('ctools-modal-close');

          };

          // works fine but without body tag //
          var asset = $('body.page-tools.section-tools #modalContent').find('.node-tools .field-name-field-tool-pdf').find('.field-items .field-item').html();
          var innerpart = $('body.page-tools.section-tools #modalContent .node-tools');
          var modalheader = $('<div class="modal-header" style="float:right;margin-right:-50px;"><a class="close" style="display:block;"></a></div>').click(action);

          /*
          var modalheader = $('<div class="modal-header" style="float:right;margin-right:-50px;"><a class="close" style="display:block;"></a></div>').click(function(){

            $('body.page-tools.section-tools #modalContent').hide();
            $('body.page-tools.section-tools #modalContent .node-tools').empty();
            $('body.page-tools.section-tools #modalBackdrop').hide().empty();
            $('body.page-tools.section-tools #modalContent .node-tools').remove();

            $('body.page-tools.section-tools').removeClass('ctools-modal-open').addClass('ctools-modal-close');

          });
          */


          $('body.page-tools.section-tools #modalBackdrop').css({'background-color': '#040A2B', 'opacity': '0.8'});
          $('body.page-tools.section-tools #modalContent').css({'border': '1px solid black', 'width': '70%', 'margin-top': '50px', 'margin-left': '10px', 'background-color': 'white', 'overflow': 'visible'});
          var btnlink = $('<a href="' + asset + '" data-node-id="' + linkhref + '" style="text-decoration:none;color:#040a2b;" target="_blank">VIEW TOOL</a>');
          var viewbtn = $('<div id="detail-content-btn" style="margin:10px 20px;padding:5px;border:1px solid gray;width:120px;text-align:center;color:gray;background-color:white"></div>');
          $(viewbtn).append(btnlink);

          // removal logarithm area // rm dupes
          $('body.page-tools.section-tools #modalContent').find('#detail-content-btn').remove();
          $('body.page-tools.section-tools #modalContent .node-tools').remove();
          $('body.page-tools.section-tools #modalContent .item-title-inmodal').remove();
          $('body.page-tools.section-tools #modalContent').find('.modal-header').remove();

          $('body.page-tools.section-tools #modalContent').prepend(modalheader).append(innerpart);
          $('body.page-tools.section-tools #modalContent').append(itemtitle).append(viewbtn);
          $('body.page-tools.section-tools #modalContent').find('.item-title-inmodal').css('display', 'block');
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

          if (asset.match(/pdf/)) {

            // alert('pdf');
            /* $('.ctools-modal-content #modal-content').css({
              'display':'none',
            });
            $('.ctools-modal-content').css({
              'display':'none',
              //'height':'250px !important'
            });*/

          }
          else if (asset.match(/mp4/)) {
            // alert('mp4');
          }
          else if (asset.match(/gif/)) {
            // alert('gif');

            /* $('#modalContent').css({
              'background-color':'green',
                'height':'250px'
              });*/

          }
          // setTimeout(function(){  $('body.page-tools.section-tools #modalContent .item-title-inmodal').css('opacity','1'); },300);

        }, 400);

      });

    }
  };

})(jQuery, Drupal, this, this.document);
