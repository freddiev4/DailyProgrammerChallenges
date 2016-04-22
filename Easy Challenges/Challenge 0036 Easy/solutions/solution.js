/* https://github.com/tlseabra */

var numLockers = 1000;
var lockers = [];

for(var i=0; i <= numLockers; i++)
  lockers.push(false);

for(i=1; i <= numLockers; i++)
  for(var j=1; j <= numLockers; j++)
    if(!(j%i))
      lockers[j] = !lockers[j];

console.log("Number of open lockers: " + lockers.reduce((total, a) => a ? total + a : total, 0));
for(i=1; i <= numLockers; i++)
  if(lockers[i])
    console.log(i);
