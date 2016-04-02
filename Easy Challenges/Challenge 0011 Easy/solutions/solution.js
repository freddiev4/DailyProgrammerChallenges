/* https://github.com/tlseabra */

//Only works with numbers as inputs. No zero padding in the output string.
function getWeekDay(day, month, year){
  var weekDays = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];

  return weekDays[new Date(year, month - 1, day).getDay()];
}

var day = prompt("Please enter the day of the month:"),
    month = prompt("Please enter the month as a number:"),
    year = prompt("Please enter the year:");

alert(day + "/" + month + "/" + year + " is/was a " + getWeekDay(day, month, year) + "!");
