/* https://github.com/tlseabra */

var variable = prompt("F=m*a calculator. Which variable do you want to calculate (F, m, a)?", 'f');
var f, a, m;

switch(variable.toLowerCase()){
  case('f'):  m = prompt("Mass value:");
              a = prompt("Accelaration value:");
              alert("F = " + m*a + " N");
              break;
  case('m'):  f = prompt("Force value:");
              a = prompt("Accelaration value:");
              alert("m = " + f/a + " kg");
              break;
  case('a'):  f = prompt("Force value:");
              m = prompt("Mass value:");
              alert("a = " + f/m + " m s^-2");
              break;
  default:    alert("There seems to be a problem with your input. Oops.");
}
