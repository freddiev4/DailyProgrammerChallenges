/* https://github.com/tlseabra */

/* Heavily based on http://www.graemeboy.com/string-permutations */
function strPerm(rest, soFar) {
    var next,
        remaining,
        i;

    if (rest == "")
        console.log(soFar);

    else {
        for (i = 0; i < rest.length; i++) {
            remaining = rest.substr(0,i) + rest.substr(i+1,rest.length-1);
            next = soFar + rest[i];

            strPerm(remaining, next);     //recursion is weird
        }
    }
}
