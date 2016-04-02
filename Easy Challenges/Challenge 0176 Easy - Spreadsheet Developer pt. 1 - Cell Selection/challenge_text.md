# [](#EasyIcon) _(Easy)_: Spreadsheet Developer pt. 1: Cell Selection

Today and on Wednesday we will be developing a terminal-based spreadsheet package somewhat like [ed](http://en.wikipedia.org/wiki/Ed_%28text_editor%29) used to be. Today we'll be taking a look at the mechanism for selecting ranges of cells from textual data.

In the spreadsheet, each cell may be represented by one of two systems:

* Co-ordinate in memory. This looks like `[X, Y]` and represents the cell's position in the internal array or memory structure. X and Y begin at 0.

* Column-row syntax. This looks like `A3`, `B9` or `AF140` and is created from the row's alphabetical header and the column number, starting from 1. You may be more familiar with this syntax in programs such as Excel, Lotus 1-2-3 (lol as if) or LibreOffice Calc. Pay close attention to the naming of the columns - it's not a simple Base-26 system as you may expect. It's called [bijective Base-26](http://en.wikipedia.org/wiki/Hexavigesimal#Bijective_base-26).

Now to select a range, we need another syntax. The following symbols apply in order of precedence, top-to-bottom:

* A formula may have one or more `:`s (colons) in it. If so, a rectangle of cells is selected. This behaves the same way in Excel. Such a selection is called a **range**. For example, [`A3:C7` looks like this](http://i.imgur.com/yfdT43W.png).

* A formula may have one or more `&`s (ampersands) in it. If so, both the cell/range specified to the left and right are selected. This is just a concatenation. For example, [`A1:B2&C3:D4` looks like this](http://i.imgur.com/rnYmCtG.png).

* A formula may have one `~` (tilde) symbol in it. If so, any cells specified *before* the tilde are added to the final selection, and any cells *after* the tilde are removed from the final selection of cells. For example, if I enter `A1:C3~B2` then all cells from A1 to C3 *except* B2 are selected, [which looks like this](http://i.imgur.com/7fop7wJ.png). (This acts like a [relative complement](http://en.wikipedia.org/wiki/Complement_%28set_theory%29#Relative_complement) of the right hand side in the left hand side.)

Your challenge today will be, given a selection string like `A3:C6&D1~B4&B5`, print the co-ordinates of all of the selected cells, along with the count of selected cells.

# Formal Inputs and Outputs

## Input Description

You will be given a selection string like `A3:C6&D1~B4&B5` on one line.

## Output Description

First, print the number of cells selected (eg. if 50 cells are selected, print `50`.)

Then, on separate lines, print the co-ordinates of each selected cell.

# Example Inputs and Outputs

## Example Input

    B1:B3&B4:E10&F1:G1&F4~C5:C8&B2

## Example Output

    29
    1, 0
    1, 2
    1, 3
    1, 4
    1, 5
    1, 6
    1, 7
    1, 8
    1, 9
    2, 3
    2, 8
    2, 9
    3, 3
    3, 4
    3, 5
    3, 6
    3, 7
    3, 8
    3, 9
    4, 3
    4, 4
    4, 5
    4, 6
    4, 7
    4, 8
    4, 9
    5, 0
    6, 0
    5, 3