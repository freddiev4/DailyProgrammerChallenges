/* https://github.com/tlseabra */

function rightTriangle(input){
  var sum = 0, str = [];
  for(var i = 1; sum + i <= input; i++){
    str[i-1] = "";
    for(var j = 0; j < i; j++)
      str[i-1] += (sum + j + 1) + " ";
    sum += i;
  }
  for(i = str.length - 1; i >= 0; i--)
    console.log(str[i]);
}
