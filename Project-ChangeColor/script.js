var heading;
heading = document.getElementById('colourValue');
heading.innerHTML== 'Hello world!';
var body=document.body;
function makeColourValue() {
    return Math.round(Math.random() * 255);
  }
  
  function setButtonColour(button, red, green, blue) {
    button.setAttribute('style',
      'background-color: rgb(' + red + ',' + green + ',' + blue + ');'
    );
  }
   function setBodyColour(body, red, green, blue) {
     body.setAttribute('style',
       'background-color: rgb(' + red + ',' + green + ',' + blue + ');'
     );
 }
  function startGame()
  {
    
    var answerMessage = document.getElementById('answer');
    answerMessage.innerHTML = "";
  var buttons = document.getElementsByClassName('colourButton');
  
  var heading = document.getElementById('colourValue');
  
 
  
  var answerButton = Math.round(Math.random() * (buttons.length - 1));
  
  
  for (var i = 0; i < buttons.length; i++) {
  
  var red = makeColourValue();
  var green = makeColourValue();
  var blue = makeColourValue();
  
  setButtonColour(buttons[i], red, green, blue);
  
  if (i === answerButton) {
      heading.innerHTML =`(${red}, ${green}, ${blue})`;;
  }
  
  buttons[i].addEventListener('click', function(){
      if (this === buttons[answerButton]) {
          answerMessage.innerHTML = "Correct!";
          setBodyColour(body,red,green, blue);

      } else {
          answerMessage.innerHTML = "Wrong answer! Guess again!";
      }
  });
  
  }
}
document.getElementById('resetButton').addEventListener('click', startGame);

