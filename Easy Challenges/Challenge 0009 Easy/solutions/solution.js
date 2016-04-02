/* https://github.com/tlseabra */

function willSort(input){
  var = nums = [], str = [], output = [],
        i;

  input = input.split(",");

  for(i=0; i < input.length; i++){
    if( !isNaN(+input[i]) )
      nums.push(parseInt(input[i]));
    else
      str.push(input[i]);
  }

  nums.sort(function(a, b){return a-b});
  str.sort(function(a, b){return a.toLowerCase().localeCompare(b.toLowerCase)});

  output = nums.concat(str);

  for(i=0; i < output.length; i++)
    console.log(output[i]);

}

var input = prompt("Please input a series of digits/strings, limited by a comma:"),
