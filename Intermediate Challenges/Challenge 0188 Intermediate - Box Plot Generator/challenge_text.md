# [](#IntermediateIcon) **(Intermediate)**: Box Plot Generator

A [box plot](http://en.wikipedia.org/wiki/Box_plot) is a convenient way of representing a set of univariate (one-variable) numerical data, while showing some useful statistical info about it at the same time. To understand what a box plot represents you need to learn about quartiles.

## Quartiles

Quartiles show us some info on the distribution of data in a data set. For example, here's a made-up data set representing the number of lines of code in 30 files of a software project, arranged into order.

    7 12 21 28 28 29 30 32 34 35 35 36 38 39 40 40 42 44 45 46 47 49 50 53 55 56 59 63 77 191

The three quartiles can be found at the quarter intervals of a data set. For this example, the number of data items is 30, so the lower quartile (**Q1**) is item number (`30/4=8` - round up) which the value is `32`. The median quartile (**Q2**) is item number (`2*30/4=15`) which the value is `40`. The upper quartile (**Q3**) is item number (`3*30/4=23` - round up) which the value is `50`. The bit between **Q1** and **Q3** is called the **inter quartile range** or **IQR**. To demonstrate the fact that this splits the data set into 'quarters' the quartiles here are displayed.

    7 12 21 28 28 29 30 32 34 35 35 36 38 39 40 40 42 44 45 46 47 49 50 53 55 56 59 63 80 191
                        ||                   ||                      ||
    --- 1st quarter ----Q1--- 2nd quarter ---Q2---- 3rd quarter -----Q3--- 4th quarter -----
                         \           inter quartile range            /

The value of the **IQR** here is `50-32=18` (ie. **Q3**-**Q1**.) This forms the 'box' part of the box plot, with the line in the moddle of it representing the median **Q2** point. The 'whiskers' of the box plot are also fairly easy to work out. They represent the rest of the data set that isn't an **outlier** (anomalous). For example, here the 191-line-long file is an anomaly among the rest, and the 7-ling-long file might be too. How do we say for sure what is an anomaly and what isn't? If the data point is at the lower end of the data set, you work out if the value is less than 1.5 times the inter-quartile range from **Q1** - ie. if `x < Q1 - 1.5 * IQR`. If the data point is at the higher end of the data set, you work out of the value is more than 1.5 times the inter-quartile range from **Q3** - ie. if `x > Q3 + 1.5 * IQR`. Here, for 7, `Q1 - 1.5 * IQR` is `32 - 27 = 5`, and `7 > 5`, so 7 is not an outlier. But for 191, `Q3 + 1.5 * IQR` is `50 + 27 = 77`, and both 90 and 191 are greater than 77, so they are outliers. The end of the 'whiskers' on the box plot (the endmost bits) are the first and last values that *aren't* outliers - any outlying points are represented as crosses `x` outside of the plot.

Note: in reality, a better method than rounding up the quartile indices is usually used.

# Formal Inputs and Outputs

## Input Description

The program is to accept any number of numerical values, separated by whitespace.

## Output Description

You are to output the box plot for the input data set. You have some freedom as to how you draw the box plot - you could dynamically generate an image, for example, or draw it ASCII style.

# Sample Inputs and Outputs

## Sample Input

The example above: `7 12 21 28 28 29 30 32 34 35 35 36 38 39 40 40 42 44 45 46 47 49 50 53 55 56 59 63 80 191`

Unique traffic data for this sub:

    2095 2180 1049 1224 1350 1567 1477 1598 1462  972 1198 1847
    2318 1460 1847 1600  932 1021 1441 1533 1344 1943 1617  978
    1251 1157 1454 1446 2182 1707 1105 1129 1222 1869 1430 1529
    1497 1041 1118 1340 1448 1300 1483 1488 1177 1262 1404 1514
    1495 2121 1619 1081  962 2319 1891 1169

# Sample Output

Sample output from my solution here: http://i.imgur.com/RIfoQ54.png (fixed now, sorry.)

# Extension (intermediate)

What about if you wish to compare two data sets? Allow your program to accept two or more data-sets, plotting the box plots such that they can be compared visually.