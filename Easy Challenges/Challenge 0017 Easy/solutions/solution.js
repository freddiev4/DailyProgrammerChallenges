/* https://github.com/tlseabra */

/* iterative version */
function tree(input){
  for(var i=0; i < input; i++){
    var str = "";
    for(j=0; j < Math.pow(2, i); j++)
      str += "@";
    console.log(str);
  }
}

/* recursive version */
function printLine(height){
  if(height == 0)
    return "@";
  else
    return printLine(height - 1).concat(printLine(height - 1));
}

function drawTree(input){
  for(var i = 0; i < input; i++)
    console.log(printLine(i));
}
