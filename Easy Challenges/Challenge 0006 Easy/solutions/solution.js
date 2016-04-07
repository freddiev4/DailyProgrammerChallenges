/* https://github.com/tlseabra */

//using math.js package - http://mathjs.org/examples/bignumbers.js.html

// configure the default type of numbers as BigNumbers
math.config({
  number: 'bignumber',  // Default type of number:
                        // 'number' (default), 'bignumber', or 'fraction'
  precision: 50         // Number of significant digits for BigNumbers
});

var pi = math.bignumber(0),
    iter = 90,  //number of iterations
    i;

//Newton's algorithm for pi
for(i = 0; i < iter; i++ ){
  pi = math.add(pi,
       math.bignumber(
       math.divide(math.factorial(math.multiply(math.bignumber(2), math.bignumber(i))),
       math.multiply(math.multiply(math.pow(math.bignumber(2), math.add(math.multiply(math.bignumber(4), math.bignumber(i)), math.bignumber(1))), math.pow(math.factorial(math.bignumber(i)), math.bignumber(2))),
       math.add(math.multiply(math.bignumber(2), math.bignumber(i)), math.bignumber(1))))));
}

pi = math.multiply(pi, math.bignumber(6));

console.log("Here is a calcualtion of pi up to 35 decimal digits:\n");
console.log("My pi:\t\t" + math.format(pi, 36) + "\nActual pi:\t3.14159265358979323846264338327950288");
