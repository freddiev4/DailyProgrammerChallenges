/* https://github.com/tlseabra */

function from26ToDecimal(input){
  var i, result = 0;
  input = input.split("").reverse();

  for(i=0; i < input.length; i++)
    result += (input[i].charCodeAt(0) - 65) * Math.pow(26, i);

  return result;
}

function fromDecimalTo26(input){
  var i=1, result = [];

  while(input >= Math.pow(26, i)) i++;

  for(--i; i >= 0; i--){
    result.push(String.fromCharCode(Math.floor(input/Math.pow(26, i)) + 65 ));
    input = input % Math.pow(26, i);
  }

  return result.join("");
}

function multiply26(a, b){
  return fromDecimalTo26( from26ToDecimal(a) * from26ToDecimal(b));
}
