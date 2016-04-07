
# [](#EasyIcon) *(Easy)*: Date Localization
Localization of software is the process of adapting code to handle special properties of a given language or a region's standardization of date / time formats.

As an example, in the United States it is common to write down a date first with the month, then day, then year. In France, it is common to write down the day and *then* month, then year.

Your goal is to write a function that takes a given string that defines how dates and times should be ordered, and then print off the current date-time in that format.

*Author: nint22*
# Formal Inputs & Outputs
## Input Description
Your function must accept a string "Format". This string can have any set of characters or text, but you must explicitly replace certain special-characters with their equivalent date-time element. Those special characters, and what they map to, are as follows:

"%l": Milliseconds (000 to 999)
"%s": Seconds (00 to 59)
"%m": Minutes (00 to 59)
"%h": Hours (in 1 to 12 format)
"%H": Hours (in 0 to 23 format)
"%c": AM / PM (regardless of hour-format)
"%d": Day (1 up to 31)
"%M": Month (1 to 12)
"%y": Year (four-digit format)
## Output Description
The output must be the given string, but with the appropriate date-time special-characters replaced with the current date-time of your system. All other characters should be left untouched.
# Sample Inputs & Outputs
## Sample Input
    "%s.%l"
    "%s:%m:%h %M/%d/%y"
    "The minute is %m! The hour is %h."
## Sample Output
    "32.429"
    "32:6:9 07/9/2013"
    "The minute is 32! The hour is 6."
# Challenge Input
*None needed*
## Challenge Input Solution
*None needed*
# Note
There are several standards for this kind of functionality in many software packages. ISO has a well documented standard that follows similar rules, which this exercise is based on.
				