# Description

Tablature is a common form of notation for guitar music. It is good for beginners as it tells you exactly how to play a note. The main drawback of tablature is that it does not tell you the names of the notes you play. We will be writing a program that takes in tablature and outputs the names of the notes.

In music there are 12  notes named A A# B C C# D D# E F# G and G#. The pound symbol represents a sharp note. Each one of these notes is separated by a semitone. Notice the exceptions are that a semitone above B is C rather than B sharp and a semitone above E is F.


# Input Description
In tabs there are 6 lines representing the six strings of a guitar. The strings are tuned so that not pressing down a fret gives you these notes per string:
    


       E |-----------------|
       B |-----------------|
       G |-----------------|
       D |-----------------|
       A |-----------------|
       E |-----------------|

Tabs include numbers which represent which fret to press down. Numbers can be two digits. Pressing frets down on a string adds one semitone to the open note per fret added. For example, pressing the first fret on the A string results in an A#, pressing the second fret results in a B.
   

## Sample Input 1


    E|------------------------------------|
    B|------------------------------------|
    G|------------------------------------|
    D|--------------------------------0-0-|
    A|-2-0---0--2--2--2--0--0---0--2------|
    E|-----3------------------------------|
## Sample Input 2

    E|-----------------|-----------------|-----------------|-----------------|
    B|-----------------|-----------------|-----------------|-----------------|
    G|-7-7---7---------|-7-7---7---------|-------------7---|-----------------|
    D|---------9---7---|---------9---7---|-6-6---6-9-------|-6-6---6-9--12---|
    A|-----------------|-----------------|-----------------|-----------------|
    E|-----------------|-----------------|-----------------|-----------------|

# Output Description

Output the names of the notes in the order they appear from left to right.

## Sample Output 1

    B A G A B B B A A A B D D

## Sample Output 2

    D D D B A D D D B A G# G# G# B D G# G# G# B D

# Bonus

Notes with the same name that are of different higher pitches are separated by octaves. These octaves can be represented with numbers next to the note names with a higher number meaning a high octave and therefore a higher pitch. For example, here's the tuning of the guitar with octave numbers included. The note C is the base line for each octave, so one step below a C4 would be a B3.


       E4 |-----------------|
       B3 |-----------------|
       G3 |-----------------|
       D3 |-----------------|
       A2 |-----------------|
       E2 |-----------------|

Modify your program output to include octave numbers

## Bonus Sample Input


    E|---------------0-------------------|
    B|--------------------1--------------|
    G|------------------------2----------|
    D|---------2-------------------------|
    A|----------------------------0------|
    E|-0--12-----------------------------|

## Bonus Sample Output

    E2 E3 E3 E4 C4 A3 A2

#Finally

Have a good challenge idea like /u/themagicalcake?

Consider submitting it to /r/dailyprogrammer_ideas