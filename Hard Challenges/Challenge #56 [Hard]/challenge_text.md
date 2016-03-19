Arguably the worlds most famous fractal is the so-called [Mandelbrot set](http://en.wikipedia.org/wiki/Mandelbrot_set), but even though many people have seen it, very few know the actual definition. Which is a shame, since the definition is actually quite simple.

The Mandelbrot set is the set of all complex numbers C such that the expression Z(n) = Z(n-1)^2 + C (with Z(0) = 0) remains bounded for all n, as n goes to infinity. The famous "squashed bug" image of the Mandelbrot set is simply all such points C plotted in the [complex plane](http://en.wikipedia.org/wiki/Complex_plane), i.e. a graph with the x-axis representing the real part of C and the y-axis the imaginary part of C. 

Your task today is to create a program that will draw the Mandelbrot set. Your program does not need to include colors, it is fine to simply have black and white pixels indicating or not that pixel is part of the Mandelbrot set.

However you want to output it is fine. You can save it as an image file, draw it on the screen, make an HTML5 webpage, whatever you like. Hell, you can even draw a really low-def version of it on the terminal if you really want to. If you do save it as an image file, I encourage you to upload it to imgur so that the rest of us can see your creation. [Here](http://imgur.com/MQl8y) is my feeble attempt. 

If you need more details on the Mandelbrot set, I highly encourge visiting the [wikipedia page](http://en.wikipedia.org/wiki/Mandelbrot_set), as it provides an excellent discussion of it. 