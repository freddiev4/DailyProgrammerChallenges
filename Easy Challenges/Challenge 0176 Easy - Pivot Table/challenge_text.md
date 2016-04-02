#Description:

An interesting way to represent data is a pivot table. If you use spreadsheet programs like Excel you might have seen these before. If not then you are about to enjoy it.

Say you have data that is related in three parts. We can field this in a table with column and rows and the middle intersection is a related field. For this challenge you will need to make a pivot table for a wind energy farm. These farms of wind mills run several windmills with tower numbers. They generate energy measured in kilowatt hours (kWh).

You will need to read in raw data from the field computers that collect readings throughout the week. The data is not sorted very well. You will need to display it all in a nice pivot table.

Top Columns should be the days of the week.
Side Rows should be the tower numbers and the data in the middle the total kWh hours produced for that tower on that day of the week.

#input:

The challenge input is 1000 lines of the computer logs. You will find it [HERE - gist of it](https://gist.github.com/coderd00d/ca718df8e633285885fa)

The log data is in the format:

    (tower #) (day of the week) (kWh)

#output:

A nicely formatted pivot table to report to management of the weekly kilowatt hours of the wind farm by day of the week.


#Code Solutions:

I am sure a clever user will simply put the data in Excel and make a pivot table. We are looking for a coded solution. :)

