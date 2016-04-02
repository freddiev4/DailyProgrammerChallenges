/* https://github.com/tlseabra */

function findPrimes(input){
  var primes = [2];
  var flag;

  for(var i = 3; i < input; i += 2){
    flag = true;
    for(var j = 3; j < i/2 ; j += 2 ){
        if(i%j == 0){flag = false; break;}
    }

    if(flag)
      primes.push(i);
  }

  return primes;
}


function sieve(input){
  var primes = [], i, p = 2, flag = true;

  for(i=2; i <= input; i++){
    primes[i-2] = i;
  }

  while(flag){
    flag = false;
    for(i = 2*p; i <= input; i += p)
      primes[i-2] = - 1;

    for(i = p + 1; i <= input; i++){
      if(primes[i-2] > 0){ flag = true; p = i; break;}
    }
  }

  var output = [];
  for(i=0; i < primes.length; i++){
    if(primes[i] > 0) output.push(primes[i]);
  }

  return output;
}
