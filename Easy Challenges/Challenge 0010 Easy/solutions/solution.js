/* https://github.com/tlseabra */

function isNumberValid(input){
  var re = /\d{10}|\d{3}\.\d{3}\.\d{4}|\d{3}\-\d{3}\-\d{4}|\(\d{3}\) ?\d{3}\-\d{4}/;
  return re.test(input) ? true : false;
}

isNumberValid(prompt("Please insert a Phone Number:")) ? alert("Valid!") : alert("Not Valid!");
