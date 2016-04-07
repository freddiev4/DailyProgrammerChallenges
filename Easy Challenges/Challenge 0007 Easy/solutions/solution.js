/* https://github.com/tlseabra */

function morse2alphabet(input, x){  //x set to 0 for alphabet -> morse
  var morse = [".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---",
              ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."],
      output= "",
      i;

  if(!x){     //alphabet -> morse
    input = input.toLowerCase();

    for(i = 0; i < input.length; i++){
      if(input.charAt(i) == " "){
        output += "/ ";
        continue;
      }

      output += morse[(input.charCodeAt(i) - 97)] + " ";
    }

    output += "\b";
  }

  else {    //morse -> alphabet
    input = input.split(" ");

    for(i = 0; i < input.length; i++){
      if(input[i] == "/"){
        output += " ";
        continue;
      }

      output += String.fromCharCode(morse.indexOf(input[i]) + 97);
    }
  }

  return output;
}
