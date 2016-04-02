We'd like to write a list of people, ordered so that no one appears in the list before anyone he or she is less smart than.

The input will be a list of pairs of names, one pair per line, where the first element in a pair names a person smarter than the person named by the second element of the pair.   That is, each input line looks like:

smarter-person : less-smart-person

For example:


Einstein : Feynmann  
Feynmann : Gell-Mann  
Gell-Mann : Thorne  
Einstein : Lorentz  
Lorentz : Planck  
Hilbert : Noether  
Poincare : Noether

There is no limit to the number of lines of input.   Your output should be a list of all the distinct input names, without duplicates, one per line, ordered as described above.   For example, given the input shown above, one valid output would be:

Einstein  
Feynmann  
Gell-Mann  
Thorne  
Lorentz  
Planck  
Hilbert  
Poincare  
Noether

Note that the "smarter than" relation supplied as input will not, in general, specify a total order that would allow us to write out the desired list in strictly decreasing order of smartness.   For example, the following output is also valid for the input shown above:

Hilbert  
Einstein  
Feynmann  
Gell-Mann  
Poincare  
Thorne  
Lorentz  
Planck  
Noether

* from a programming contest