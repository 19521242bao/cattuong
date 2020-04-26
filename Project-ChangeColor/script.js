var heading;
heading = document.getElementById('colourValue');
heading.innerHTML== 'Hello world!';
var body=document.body;
//y la lay ngau nhien 3 thành phần màu
function makeColourValue() {
    return Math.round(Math.random() * 255);
  }//function lay gia trị màu (0-255)
  
  function setButtonColour(button, red, green, blue) {
    button.setAttribute('style',
      'background-color: rgb(' + red + ',' + green + ',' + blue + ');'
    );//bam vao nut thay doi mau nút
  }
   function setBodyColour(body, red, green, blue) {
     body.setAttribute('style',
       'background-color: rgb(' + red + ',' + green + ',' + blue + ');'
     );
 }//thay doi mau của body
  function startGame()
  {
    
    var answerMessage = document.getElementById('answer');
    answerMessage.innerHTML = "";// khi restast lại thì message là rỗng
  var buttons = document.getElementsByClassName('colourButton');
  //button trả về một array
  var heading = document.getElementById('colourValue');
  var answerButton = Math.round(Math.random() * (buttons.length - 1));//random trong 4 phòng đã chọn
  
  
  for (var i = 0; i < buttons.length; i++) {
  
  var red = makeColourValue();
  var green = makeColourValue();
  var blue = makeColourValue();
  //phối 3 màu
  setButtonColour(buttons[i], red, green, blue);// set màu cho nút thứ i
  
  if (i === answerButton) {
      heading.innerHTML =`(${red}, ${green}, ${blue})`;;//trả về giá trị màu đã chọn nếu chọn đúng
  }
  
  buttons[i].addEventListener('click', function(){//sự kiện khi click vào nút
      if (this === buttons[answerButton]) {
          answerMessage.innerHTML = "Correct!";
          setBodyColour(body,red,green, blue);// thay đổi giá trị

      } else {
          answerMessage.innerHTML = "Wrong answer! Guess again!";// xuất ra khi sai
      }
  });
  
  }
}
document.getElementById('resetButton').addEventListener('click', startGame);

