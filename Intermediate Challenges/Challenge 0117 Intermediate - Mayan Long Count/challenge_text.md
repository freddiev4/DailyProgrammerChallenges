# [](#IntermediateIcon) *(Intermediate)*: Mayan Long Count
The [Mayan Long Count](http://en.wikipedia.org/wiki/Maya_calendar#Long_Count) calendar is a counting of days with these units: "* The Maya name for a day was k'in. Twenty of these k'ins are known as a winal or uinal. Eighteen winals make one tun. Twenty tuns are known as a k'atun. Twenty k'atuns make a b'ak'tun.*". Essentially, we have this pattern:

 * 1 **kin** = 1 day

 * 1 **uinal** = 20 kin

 * 1 **tun** = 18 uinal

 * 1 **katun** = 20 tun

 * 1 **baktun** = 20 katun

The long count date format follows the number of each type, from longest-to-shortest time measurement, separated by dots. As an example, '12.17.16.7.5' means 12 baktun, 17 katun, 16 tun, 7 uinal, and 5 kin. This is also the date that corresponds to January 1st, 1970. Another example would be December 21st, 2012: '13.0.0.0.0'. This date is completely valid, though shown here as an example of a "roll-over" date.

Write a function that accepts a year, month, and day and returns the Mayan Long Count corresponding to that date. You must remember to take into account leap-year logic, but only have to convert dates after the 1st of January, 1970.


*Author: skeeto*
# Formal Inputs & Outputs
## Input Description
Through standard console, expect an integer N, then a new-line, followed by N lines which have three integers each: a day, month, and year. These integers are guaranteed to be valid days and either on or after the 1st of Jan. 1970.
## Output Description
For each given line, output a new line in the long-form Mayan calendar format: <Baktun>.<Katun>.<Tun>.<Uinal>.<Kin>.
# Sample Inputs & Outputs
## Sample Input
    3
    1 1 1970
    20 7 1988
    12 12 2012
## Sample Output
    12.17.16.7.5
    12.18.15.4.0
    12.19.19.17.11
# Challenge Input
None needed
## Challenge Input Solution
None needed
# Note

* Bonus 1: Do it without using your language's calendar/date utility. (i.e. handle the leap-year calculation yourself).

* Bonus 2: Write the inverse function: convert back from a Mayan Long Count date. Use it to compute the corresponding date for `14.0.0.0.0`.

				