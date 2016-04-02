/* https://github.com/tlseabra */

function encrypt(str, shift){
  var new_str = "";

  for(var i = 0; i < str.length; i++){

    if( !((str.charCodeAt(i) >= 65 && str.charCodeAt(i) <= 90) || (str.charCodeAt(i) >= 97 && str.charCodeAt(i) <= 122))){
      new_str = new_str + str.charAt(i);
      continue;
    }

    if(str.charCodeAt(i) + shift < 65)    // goes below 'A'
      new_str = new_str + String.fromCharCode(90 + shift + (str.charCodeAt(i) - 64));

    else if(str.charCodeAt(i) + shift > 122)  //goes over 'z'
      new_str = new_str + String.fromCharCode(97 + shift + (str.charCodeAt(i) - 123));

    else if(str.charAt(i) == str.charAt(i).toLowerCase() && str.charCodeAt(i) + shift < 97)   //goes below 'a'
      new_str = new_str + String.fromCharCode(122 + shift + (str.charCodeAt(i) - 96));

    else if(str.charAt(i) == str.charAt(i).toUpperCase() && str.charCodeAt(i) + shift > 90)   //goes over 'Z'
      new_str = new_str + String.fromCharCode(65 + shift + (str.charCodeAt(i) - 91));

    else
      new_str = new_str + String.fromCharCode(str.charCodeAt(i) + shift);
  }

    return new_str;
}

function main() {
  var str = prompt("Please enter your message to be encrypted:");
  var shift = parseFloat(prompt("Please enter how much you want it to be shifted (integer from -25 to 25):"));

  if(Math.floor(shift) !== shift || shift < -25 || shift > 25)
    return;

  new_str = encrypt(str, shift);

  alert("Here is your encrypted message:\n" + new_str);
}

main();
