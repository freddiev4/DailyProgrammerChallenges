# [](#IntermediateIcon) *(Intermediate)*: Simple Ray-Casting

[Ray Casting](http://en.wikipedia.org/wiki/Ray_casting) is a method of [rendering 3D computer graphics](http://en.wikipedia.org/wiki/Rendering_(computer_graphics\)), popular in the early/mid 90's. Famous games like [Wolfenstein](http://en.wikipedia.org/wiki/Wolfenstein_3D) and [Doom](http://en.wikipedia.org/wiki/Doom_(video_game\)) are great examples of ray-casting based graphics. Real-time computer graphics today are based on hardware-accelerated polygon [rasterization](http://en.wikipedia.org/wiki/Rasterisation), while film-quality computer graphics are based on [ray-tracing](http://en.wikipedia.org/wiki/Ray_tracing_(graphics\)) (a more advanced and finer-detailed ray-casting derivative).

Your goal is to implement a single ray-cast query within a 2D world: you will be given the ray's origin and direction, as well as a top-down view of a tile-based world, and must return the position of the first wall you hit. The world will be made of a grid of tiles that are either occupied (as defined by the 'X' character), or empty (as defined by the space ' ' character). **[Check out these graphics as a visualization of example 1; it should help clarify the input data](http://imgur.com/a/pUOKb).** Real ray-casting applications do many of these wall-collision hits, generally one per column of pixels you want to render, but today you only have to solve for a single ray!

*Original author: /u/nint22*

# Formal Inputs & Outputs
## Input Description

On standard console input you will be given two integers, N and M. N is the number of columns, while M is the number of rows. This will be followed by M rows of N-characters, which are either 'x' or ' ' (space), where 'x' is a wall that you can collide with or ' ' which is empty space. After this world-definition data, you will be given three space-delimited floating-point values: X, Y, and R. X and Y are world positions, following [this coordinate system description](http://imgur.com/a/pUOKb), with R being a radian-value degree representing your ray direction (using the unit-circle definition where if R is zero, it points to the right, with positive R growth rotation counter-clockwise). R is essentially how much you rotate the ray from the default position of X+ in a counter-clockwise manner.

## Output Description

Simply print the collision coordinate with three-digit precision.

# Sample Inputs & Outputs
## Sample Input

*Note that this input is rendered and explained in more detail [here](http://imgur.com/a/pUOKb).*

    10 10
    xxxxxxxxxx
    x  x x   x
    x  x x   x
    x    x xxx
    xxxx     x
    x  x     x
    x        x
    x  x     x
    x  x    xx
    xxxxxxxxxx
    6.5 6.5 1.571

## Sample Output

    6.500 1.000