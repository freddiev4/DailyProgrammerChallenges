/* https://github.com/tlseabra */

function removeDuplicates(input){
  var output = [];
  input = input.split("");

  for(var i=1; i < input.length; i++)
    if(input[i] === input[i-1]) output.push(input.splice(i--, 1));

  return [input.join(""), output.join("")];
}
