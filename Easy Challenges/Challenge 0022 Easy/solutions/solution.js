/* https://github.com/tlseabra */

function append(a, b){
  for(var i=0; i < b.length; i++)
    if( a.indexOf(b[i]) === -1)  a.push(b[i]);

  return a;
}
