# [](#EasyIcon) _(Easy)_: Friendly Date Ranges

The goal of this challenge is to implement a way of converting two dates into a more friendly date range that could be presented to a user. It must not show any redundant information in the date range. For example, if the year and month are the same in the start and end dates, then only the day range should be displayed. Secondly, if the starting year is the current year, and the ending year can be inferred by the reader, the year should be omitted also (see below for examples).

# Formal Inputs and Outputs

## Input Description

The input will be two dates in the `YYYY-MM-DD` format, such as:

1. `2015-07-01 2015-07-04`
2. `2015-12-01 2016-02-03`
3. `2015-12-01 2017-02-03`
4. `2016-03-01 2016-05-05`
5. `2017-01-01 2017-01-01`
6. `2022-09-05 2023-09-04`

## Output Description

The program must turn this into a human readable date in the `Month Day, Year` format (omitting the year where possible). These outputs correspond to the above inputs:

1. `July 1st - 4th`
2. `December 1st - February 3rd`
3. `December 1st, 2015 - February 3rd, 2017`
4. `March 1st - May 5th, 2016`
5. `January 1st, 2017`
6. `September 5th, 2022 - September 4th, 2023`

## Edge Case 1

If the starting year is the current year, **but the ending year isn't** and **the dates are at least a year apart**, then specify the year in both. For example, this input:

    2015-04-01 2020-09-10

Must not omit the 2015, so it should output `April 1st, 2015 - September 10th, 2020`, and **NOT** `April 1st - September 10th, 2020`, which would otherwise be ambiguous.

Of course if the dates are less than a year apart, as in the case of `2015-12-01 2016-02-03`, then you can safely omit the years (`December 1st - February 3rd`), as that makes it clear that it's the February next year.

## Edge Case 2

Similarly, if the starting year is the current year, **but the two dates are exactly one year apart**, also specify the year in both. For example, this input:

    2015-12-11 2016-12-11

Must specify both years, i.e. `December 11th, 2015 - December 11th, 2016`.
    
# Bonus (Intermediate)

Of course, not all users will want to read a `Month Day, Year` format. To fix this, allow your program to receive hints on how to format the dates, by accepting a date format as a third parameter, for example:

1. `2015-07-01 2015-07-04 DMY`
2. `2016-03-01 2016-05-05 YDM`
3. `2022-09-05 2023-09-04 YMD`
    
would produce:

1. `1st - 4th July`
2. `2016, 1st March - 5th May`
3. `2022, September 5th - 2023, September 4th`
    
You only need to handle date format strings `DMY`, `MDY`, `YMD` and `YDM`.

# Special Thanks

Special thanks to /u/pogotc for creating this challenge in /r/DailyProgrammer_Ideas! If you have your own idea for a challenge, submit it there, and there's a good chance we'll post it.