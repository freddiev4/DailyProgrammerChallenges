# [](#EasyIcon) _(Easy): Unit Calculator

You have a 30-centimetre ruler. Or is it a 11.8-inch ruler? Or is it even a 9.7-attoparsec ruler? It means the same thing, of course, but no-one can quite decide which one is the standard. To help people with this often-frustrating situation you've been tasked with creating a calculator to do the nasty conversion work for you.

Your calculator must be able to convert between metres, inches, miles and [attoparsecs](https://www.google.com/search?q=attoparsec). It must also be able to convert between kilograms, pounds, ounces and [hogsheads of Beryllium](http://www.wolframalpha.com/input/?i=mass+of+1+hogshead+of+berylliumm).
    
## Input Description

You will be given a request in the format: **N** oldUnits to newUnits

For example:

    3 metres to inches
    
## Output Description

If it's possible to convert between the units, print the output as follows:

    3 metres is 118.1 inches

If it's not possible to convert between the units, print as follows:

    3 metres can't be converted to pounds

# Notes

Rather than creating a method to do each separate type of conversion, it's worth storing the ratios between all of the units in a 2-D array or something similar to that.