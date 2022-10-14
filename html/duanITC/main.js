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

  $(document).ready(function(){
    $('.isliderx').slick({
        infinite: true,
        slidesToShow: 1,
        slidesToScroll: 1,
        autoplay: true,
        autoplaySpeed: 1000,
    });
  });


  let more = document.querySelectorAll('.morekh');
  for (let i = 0; i < more.length; i++) {
      more[i].addEventListener('click',function(){
          more[i].parentNode.classList.toggle('active');
      })
  }    


var slides = document.querySelectorAll('.sliderhoatdong');
var btns = document.querySelectorAll('.btnhoatdong');
let currentSlide = 1;
var manualNav = function(manual){
    slides.forEach((sliderhoatdong) => {
        sliderhoatdong.classList.remove('active');

        btns.forEach((btnhoatdong) => {
            btnhoatdong.classList.remove('active');
        })
    })

    slides[manual].classList.add('active');
    slides[manual].classList.add('active');
}

btns.forEach((btns, i) =>{
    btns.addEventListener('click',() =>{
        manualNav(i);
        currentSlide = i;
    })
})

