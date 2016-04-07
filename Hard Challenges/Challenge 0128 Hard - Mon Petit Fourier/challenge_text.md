# [](#HardIcon) *(Hard)*: Mon Petit Fourier

[Fast Fourier Transform](http://en.wikipedia.org/wiki/Fast_Fourier_transform) is an extremely powerful algorithm. Fourier transforms can convert a signal (used loosely here) between its time / space domain to its frequency domain. A less-technical explanation is that it's an algorithm that can take the signal made from a sum of sinusoidal waves, and returns a set of simple sinusoidal wave functions that, if summed, closely match the original signal given. [This YouTube video](http://www.youtube.com/watch?v=ObklYbQaX24) does a great rundown on what an FFT is.

Here's a simple example: imagine you are given a series of 100 plot points, where these points are on the plot formed by the function f(t) = 3 x sin(2 x t) + 0.5 x cos(10 x t). Assume that you're *only* given these points and not the equation, yet you still want to derive / find what the original equation was. Using an FFT, you can compute the original set of equation's sinusoidal frequency and amplitude, giving you back the original signal-components!

FFT is often used in data compression algorithms: JPEG, the image format, uses an FFT-like algorithm to take discrete color location information and creates generalized signals from them. If you're interested in the details, JPEG uses the [DCT algorithm](http://en.wikipedia.org/wiki/Discrete_cosine_transform) rather than FFT.

Your goal is to write a simple FFT tool that takes a set of 100 points from an unknown signal, and then decomposes them into the discrete frequency domain. Once your sinusoidal functions are generated from this original signal, print the percentage-difference between what you compute vs. the original signal.

# Formal Inputs & Outputs
## Input Description

You will be given 200 floating-point numbers, two space-delimited values on each line (so 100 lines total). The first number is the x-position of the point, with the second being the y-position. These points are guaranteed to be on a graph only composed of the sum of at most 8 sinusoidal functions.

## Output Description

After applying the FFT algorithm on these points, print the set of sinusoidal equations you believe are the original signal's components. Then, print the percentage difference between your results versus the given data.

# Sample Inputs & Outputs
## Sample Input

    0 0.5
    0.1 0.866159145
    0.2 0.960181609
    0.3 1.198931172
    0.4 1.825246462
    0.5 2.666244047
    0.6 3.276202401
    0.7 3.333300317
    0.8 2.925970792
    0.9 2.465977762
    1 2.308356516
    1.1 2.42770206
    1.2 2.448316521
    1.3 2.000227506
    1.4 1.07333306
    1.5 0.043516068
    1.6 -0.65395217
    1.7 -0.904204975
    1.8 -0.997402976
    1.9 -1.341221364
    2 -2.066366455
    2.1 -2.888591947
    2.2 -3.354786635
    2.3 -3.247489521
    2.4 -2.776404323
    2.5 -2.381171418
    2.6 -2.326904306
    2.7 -2.464362867
    2.8 -2.375102847
    2.9 -1.767835303
    3 -0.76112077
    3.1 0.20810297
    3.2 0.766759295
    3.3 0.927985717
    3.4 1.058054916
    3.5 1.519113694
    3.6 2.317021747
    3.7 3.078831313
    3.8 3.381295838
    3.9 3.128951502
    4 2.634605709
    4.1 2.328522031
    4.2 2.363804067
    4.3 2.480747944
    4.4 2.254673233
    4.5 1.49901645
    4.6 0.45258077
    4.7 -0.421841458
    4.8 -0.843052513
    4.9 -0.949141116
    5 -1.149580318
    5.1 -1.728546964
    5.2 -2.564974798
    5.3 -3.227467658
    5.4 -3.357463607
    5.5 -2.988907242
    5.6 -2.510923134
    5.7 -2.308052164
    5.8 -2.408895717
    5.9 -2.466115366
    6 -2.085925244
    6.1 -1.203738665
    6.2 -0.160058945
    6.3 0.593817432
    6.4 0.890458091
    6.5 0.979274185
    6.6 1.276396816
    6.7 1.96224277
    6.8 2.797556956
    6.9 3.327782198
    7 3.288481669
    7.1 2.839568594
    7.2 2.413348036
    7.3 2.316277157
    7.4 2.450614873
    7.5 2.411739155
    7.6 1.871361732
    7.7 0.893867554
    7.8 -0.10564059
    7.9 -0.723706024
    8 -0.918903572
    8.1 -1.028922968
    8.2 -1.439481198
    8.3 -2.210286177
    8.4 -3.002712849
    8.5 -3.376380797
    8.6 -3.182549421
    8.7 -2.693102974
    8.8 -2.346846852
    8.9 -2.346518016
    9 -2.476998548
    9.1 -2.311682198
    9.2 -1.61691909
    9.3 -0.582206634
    9.4 0.336122761
    9.5 0.814718409
    9.6 0.939729562
    9.7 1.106623527
    9.8 1.636246738
    9.9 2.460931653

## Sample Output

    3 * SIN(2 * X) 
    0.5 * COS(10 * X)
    0% Deviation

# Author's Notes

I'm new-ish to FFT, so if I've borked any of the descriptions, or have a poorly-formed challenge, please feel free to discuss it here. I'm not 100% sure if you can compute both the amplitude *and* frequency.