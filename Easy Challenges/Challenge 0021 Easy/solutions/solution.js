/* https://github.com/tlseabra */

function strPerm(rest, soFar, total) {
    var next,
        remaining,
        i;

    if (rest == "")
        total.push(parseInt(soFar));

    else {
        for (i = 0; i < rest.length; i++) {
            remaining = rest.substr(0,i) + rest.substr(i+1,rest.length-1);
            next = soFar + rest[i];
            strPerm(remaining, next, total);     //recursion is weird
        }
    }
}

function nextInteger(input){
  var numberStr = input.toString();
  var total = [], uniques = [];

  strPerm(numberStr,"", total);
  total.sort(function(a, b){return a-b});

  for(var i=0; i < total.length; i++){
    if( uniques.indexOf(total[i]) === -1)
      uniques.push(total[i]);
  }

  if(uniques.indexOf(input) + 1 == uniques.length)
    return input;
  else
    return uniques[ uniques.indexOf(input) + 1 ];
}
