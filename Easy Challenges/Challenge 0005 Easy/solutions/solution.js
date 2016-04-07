/* https://github.com/tlseabra */

var correctUser = "daniel",
    correctPass = "qwerty";

var user = prompt("Username:");
var password = prompt("Password:");

(user === correctUser && password === correctPass) ? alert("Welcome to this useless program!") : alert("Access Denied!");
