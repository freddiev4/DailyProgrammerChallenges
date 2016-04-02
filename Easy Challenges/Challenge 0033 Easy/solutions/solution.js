/* https://github.com/tlseabra */

function checkAnswers(questions, answers){
  var i, size = questions.length, input;

  do{
    i = Math.floor(Math.random() * size);
    input = prompt(questions[i]);
    if(input.toLowerCase() !== answers[i] && input !== "exit")
      alert("The right answer is: " + answers[i]);
  }
  while(input !== "exit")
}
