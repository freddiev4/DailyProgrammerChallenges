/* https://github.com/tlseabra */

function fizzBuzz(n){
  for(var i=1; i <= n; i++)
    console.log( !(i%3) && !(i%5)  ? "FizzBuzz" : !(i%3) ? "Fizz" : !(i%5) ? "Buzz" : i);
}
