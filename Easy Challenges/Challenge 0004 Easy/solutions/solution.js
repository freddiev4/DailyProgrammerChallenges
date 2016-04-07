/* https://github.com/tlseabra */

var chars = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890",
  numPasswords = parseInt(prompt("How many passwords do you want to generate?")),
  numChars = parseInt(prompt("How many characters do you want your password(s) to have?")),
  password = new Array(),
  printStr = "",
  i,
  j;

for(j=0; j < numPasswords; j++ ){
  password[j] = "";
  for(i=0; i < numChars; i++)
    password[j] += chars.charAt(Math.floor(Math.random()*chars.length));
}

for(i = 0; i < numPasswords; i++)
  printStr += password[i] + "\n";

alert("Here are your generated password(s):\n" + printStr);
