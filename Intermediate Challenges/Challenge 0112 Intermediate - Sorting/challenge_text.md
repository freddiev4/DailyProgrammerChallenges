**Description:**

Your boss has just given you a list of dates that need to be sorted. Since it's Friday night, and you don't want to come in on Saturday, you want to write a little application that sorts these dates for you! Fortionatly, these dates are all written in a text file, where all of the date strings are on individual lines (un-sorted), and follow a standard format. All dates are guaranteed to be in the format of "YYYY MM DD hh:mm:ss", where "YYYY" is a year from 1800 to 2020, "MM" is from 01 to 12, "DD" is from 01 to 31, "hh" is from 00 to 23, "mm" is from 01 to 60, and "ss" is from 01 to 60.

**Formal Inputs & Outputs:**

*Input Description:*

String InputData - A string of the input file, where each date is on its own separate line, following the above date-time standard.

*Output Description:*

Your application must print all dates sorted, from the oldest date (i.e. 1800's) the modern dates (i.e. 2012), to future dates (i.e. 2020s").

**Sample Inputs & Outputs:**

*The following is the string given to your function*

2012 12 02 23:02:12
1899 03 02 14:04:42
1969 07 20 02:25:30
2019 11 02 00:13:01

*The following is the output from the above input:*

1899 03 02 14:04:42
1969 07 20 02:25:30
2012 12 02 23:02:12
2019 11 02 00:13:01

**Notes:**

Most solutions may either write a comparison function that keeps comparing elements from left-to-right until different values are found, or a date can be converted into a standard integer value and have that value used for comparison.