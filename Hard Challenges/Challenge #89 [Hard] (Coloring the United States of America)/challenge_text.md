On wikipedia, you can find [this lovely blank map](http://en.wikipedia.org/wiki/File:Blank_US_Map.svg) of the United States. What makes it so lovely? Well, first off all, it's in the [SVG format](http://en.wikipedia.org/wiki/File:Blank_US_Map.svg), which means that you can download it and edit it quite easily, even with a computer program you write yourself (SVG is nothing but XML, after all).

Second, the kind mapmaker has gone to the extra trouble of labelling all the states in the code with their proper abbreviation (so "AR" for "Arkansas" and "MT" for "Montana"). For instance, look at the source file for that image, and you'll see that the first path that is defined has the id "HI", so we know it represents Hawaii. 

By parsing that file, noting the "id" attributes of the various "path" tags, you can then change the color of a specific state by changing the "style" attribute. For instance, if we change Hawaii's style attribute from

    fill:#d3d3d3;stroke:#ffffff;stroke-opacity:1;stroke-width:0.75;stroke-miterlimit:4;stroke-dasharray:none
    
to

    fill:#ff0000;stroke:#ffffff;stroke-opacity:1;stroke-width:0.75;stroke-miterlimit:4;stroke-dasharray:none
    
then Hawaii will stand out as bright red. 

Your task today is to write a program that will read in that SVG file, then assign colors to all the different US states, such that no states that share a border has the same color.  [Here is an example](http://i.imgur.com/QN3sG.png). You don't have to figure out what states border which other states from the SVG file, you can just put that as a table in your code, or use any other solution you can come up with. 

If you finish, please upload your image, or a PNG of your image, to imgur, so the rest of us can see what it looks like!

Bonus: By the [4-color theorem](http://en.wikipedia.org/wiki/4-color_theorem) all maps like this can be colored using at most 4 colors, so that no two regions that share a border have the same color. Color the map using only four different colors.

**NOTE:** Look out for Michigan! Michigan is tricky. 

***

Edit: to make it easier for everyone, [here's a list of what states borders other states](http://pastebin.com/uNJAEfgr). I compiled it myself, so I can't guarantee accuracy (though I'm fairly sure it's accurate, and it works fine in my program). To be clear, a line like

    ND <- MN, SD, MT

Means that North Dakota borders Minnesota, South Dakota and Montana. 