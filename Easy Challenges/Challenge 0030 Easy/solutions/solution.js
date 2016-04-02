/* https://github.com/tlseabra */

function targetSum(list, target){
  var i,j;
  for(i = 0; i < list.length - 1; i++){
    for(j = i+1; j < list.length; j++){
      if(list[i] + list[j] == target)
        return [list[i], list[j]];
    }
  }

  return null;
}
