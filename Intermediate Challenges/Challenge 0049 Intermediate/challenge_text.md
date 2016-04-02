Your task today is to create a program that graphically plots some equation y = f(x), in some specified range of values for x. 

The output can be whatever you want: if you want to output it as an image, that's fine, but if you don't want to deal with graphical libraries, you can just as well just output the plot as text, either to the terminal or to a text-file. You do not need to include axes in your plot.

For instance, if you wished to plot a simple sine wave (i.e. y = sin(x)) for x values from -2\*pi to 2\*pi, you could either output an image ([like this](http://i.imgur.com/NcEwT.png)), or print out something like this:


           ######                                  ######                           
         ##      ##                              ##      ##                         
       ##          ##                          ##          ##                       
      #              #                        #              #                      
     #                #                      #                #                     
    #                  ##                  ##                  ##                  #
                         #                #                      #                # 
                          #              #                        #              #  
                           ##          ##                          ##          ##   
                             ##      ##                              ##      ##     
                               ######                                  ######       

Note that the point of this challenge is just to plot the functions, not necessarily to write a program that can parse a mathematical equation. It's perfectly acceptable to "hard-code" the function you want to plot into the code. Also, I've used a sine wave as an example, but you can use whatever equation you want. 

***

Bonus: If you *do* choose to output the plot as an image, make the plot into an animated gif by introducing a variable that changes frame by frame. For instance, [here is an animated gif](http://i.imgur.com/06BmQ.gif) of y = k\*sin(x) as k varies from 1 to -1 and then back again (i.e. for each frame, k takes a different value, starting at 1, going to -1 and then back to 1 again), and [here is an animated gif](http://i.imgur.com/ZXjqQ.gif) of y = sin(k\*x) as k varies from 1 to 10 and then back again. 

Again, I used a sine wave as an example, but you may plot whatever equation you want. 
