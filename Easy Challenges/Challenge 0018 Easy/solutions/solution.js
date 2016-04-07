/* https://github.com/tlseabra */

function convertString(input){
  output = input.split("");
  var convert = [2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9];

  for(var i=0; i < output.length; i++){
    if(output[i].charCodeAt(0) >= 65 && output[i].charCodeAt(0) <= 90)
      output[i] = convert[ output[i].charCodeAt(0) - 65].toString();
  }
  output.splice(9, 0, "-");

  return output.join("");
}
