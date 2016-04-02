/* https://github.com/tlseabra */

function isLeapYear(input){
  return (input % 4 != 0 || (input % 100 == 0 && input % 400 != 0)) ? false : true;
}

function century(input){
  return Math.floor((input - 1)/100) + 1;
}

var year = prompt("Please input a year");
console.log("Year: " + year + "\nCentury: " + century(year) + "\nLeap Year: " + ((isLeapYear(year)) ? "Yes" : "No"));
