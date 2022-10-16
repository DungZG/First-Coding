$(document).ready(function(){
    $('.image-slider').slick({
        infinite: true,
        slidesToShow: 4,
        slidesToScroll: 1,
        arrows: false,
        autoplay: true,
        autoplaySpeed: 2000,
    });
  });


  let more = document.querySelectorAll('.morekh');
  for (let i = 0; i < more.length; i++) {
      more[i].addEventListener('click',function(){
          more[i].parentNode.classList.toggle('active');
      })
  }    

