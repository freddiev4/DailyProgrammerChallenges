/* https://github.com/tlseabra */

function revealWinner(input){
  var sum = input.reduce( (a,b) => a + b, 0 );

  for(var i=0; i < input.length; i++){
    if(input[i] >= Math.ceil(sum/2)){
      console.log("The winner is candidate " + String.fromCharCode(65 + i) + "!");
      return;
    }
  }

  console.log("There is no winner!");
}
