# *(Easy):* Word Ladder steps
The development of cellular automata (CA) systems is typically attributed to Stanisław Ulam and John von Neumann, who were both researchers at the Los Alamos National Laboratory in New Mexico in the 1940s. Ulam was studying the growth of crystals and von Neumann was imagining a world of self-replicating robots. That’s right, robots that build copies of themselves. Once we see some examples of CA visualized, it’ll be clear how one might imagine modeling crystal growth; the robots idea is perhaps less obvious. Consider the design of a robot as a pattern on a grid of cells (think of filling in some squares on a piece of graph paper). Now consider a set of simple rules that would allow that pattern to create copies of itself on that grid. This is essentially the process of a CA that exhibits behavior similar to biological reproduction and evolution. (Incidentally, von Neumann’s cells had twenty-nine possible states.) Von Neumann’s work in self-replication and CA is conceptually similar to what is probably the most famous cellular automaton: Conways “Game of Life,” sometimes seen as a screen saver. CA has been pushed very hard by Stephen Wolfram (e.g. Mathematica, Worlram Alpha, and "A New Kind of Science").
CA has a number of simple "rules" that define system behavior, like "If my neighbors are both active, I am inactive" and the like. The rules are all given numbers, but they're not sequential for historical reasons.
The subject rule for this challenge, Rule 90, is one of the simplest, a simple neighbor XOR. That is, in a 1 dimensional CA system (e.g. a line), the next state for the cell in the middle of 3 is simply the result of the XOR of its left and right neighbors. E.g. "000" becomes "1" "0" in the next state, "100" becomes "1" in the next state and so on. You traverse the given line in windows of 3 cells and calculate the rule for the next iteration of the following row's center cell based on the current one while the two outer cells are influenced by their respective neighbors. Here are the rules showing the conversion from one set of cells to another:


| `111`        | `101`          | `010`   | `000` | `110` |`100`| `011` |`001` |
| ------------- |-------------| -----|-----|-----|-----|-----|-----|
| 0      | 0 | 0 |0| 0      | 0 | 0 |0| 0      | 0 |

# Sample input
You'll be given an input line as a series of 0s and 1s.

Input: `1101010`

# Sample output
Your program should emit the states of the cellular automata for 25 steps. Example from above, in this case I replaced 0 with a blank and a 1 with an X:
```
xx x x
xx    x
xxx  x
x xxx x
  x x
 x   x
```

### Bonus 1
Challenge input:

`00000000000000000000000000000000000000000000000001000000000000000000000000000000000000000000000000`

Challenge output:
```
                                             x
                                            x x
                                           x   x
                                          x x x x
                                         x       x
                                        x x     x x
                                       x   x   x   x
                                      x x x x x x x x
                                     x               x
                                    x x             x x
                                   x   x           x   x
                                  x x x x         x x x x
                                 x       x       x       x
                                x x     x x     x x     x x
                               x   x   x   x   x   x   x   x
                              x x x x x x x x x x x x x x x x
                             x                               x
                            x x                             x x
                           x   x                           x   x
                          x x x x                         x x x x
                         x       x                       x       x
                        x x     x x                     x x     x x
                       x   x   x   x                   x   x   x   x
                      x x x x x x x x                 x x x x x x x x
                     x               x               x               x
                    x x             x x             x x             x x
```

### Credits
*Author: jnazario*
