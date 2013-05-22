(function($, Drupal, document, window){
	
$(document).ready(function(){
  
  $('label[for="main-menu-toggle"]').noClickDelay();

  $('#main-menu-container').hover(function(){
    $('#main-menu-toggle').attr('checked', 'checked');
  }, function(){
    $('#main-menu-toggle').removeAttr('checked');
  });

});

})(jQuery, Drupal, document, window);