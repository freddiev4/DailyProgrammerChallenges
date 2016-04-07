/* https://github.com/tlseabra */

function strClear(input, clear){
  for(var i=0; i < clear.length; i++)
    input = input.replace( new RegExp(clear.charAt(i), "g"), "");

  return input;
}
