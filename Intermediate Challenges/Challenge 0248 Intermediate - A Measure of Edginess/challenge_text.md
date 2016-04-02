Want to write a program that actually understands images it sees? 

One of the mainstays of the computer vision toolkit is *[edge
detection](https://en.wikipedia.org/wiki/Edge_detection)* -- a series
of different approaches to find places where color/brightness in an
image changes abruptly. It is a process that takes a regular image as
input, and returns an image that highlights locations at which "edges"
exist. 

On Monday we [took a
look](https://www.reddit.com/r/dailyprogrammer/comments/3zfajl/20160104_challenge_248_easy_draw_me_like_one_of/)
at how the Netpbm image format works, and built a very simple drawing
program using PPM images.  Let's use the same format (as it is very
simple to read/write without any special libraries) to handle this
challenge.

# Formal Input

The input to your program is an image in PPM format. Because edge
detection requires images that are larger than can be comfortably
typed or copy/pasted, you may want to input this from a file.

**Sample input:** [PNG
version](https://github.com/fsufitch/dailyprogrammer/raw/master/ideas/edgedetect/valve_original.png),
[PPM (P3, RGB color)
version](https://github.com/fsufitch/dailyprogrammer/raw/master/ideas/edgedetect/valve_original.ppm)
(3.1 MB). Image courtesy of
[Wikipedia](https://en.wikipedia.org/wiki/Sobel_operator#/media/File:Valve_original_\(1\).PNG).

# Formal Output

The output must be a ~~black and white~~ *grayscale* (edited for clarification) image of the same size as the
input. Edges from the input image must be highlighted in white.

This is not a strict "right or wrong answer" challenge. There are many
ways to do edge detection, and they each may yield a different
result. As such, expect outputs to vary. In general though, try to aim
for crisp (thin) edges, with little noise from non-edges.

**Sample output:**
[Converted to PNG](https://raw.githubusercontent.com/fsufitch/dailyprogrammer/master/ideas/edgedetect/valve_sobel.png). This
is the sample output that Wikipedia gives for the application of a
Sobel filter -- one of the most basic forms of edge detection.

# Challenge Inputs

- Taters:
  [JPG](https://github.com/fsufitch/dailyprogrammer/raw/master/ideas/edgedetect/potatoes.jpg),
  [PPM](https://github.com/fsufitch/dailyprogrammer/raw/master/ideas/edgedetect/potatoes.ppm)
- Utah teapot:
  [JPG](https://github.com/fsufitch/dailyprogrammer/raw/master/ideas/edgedetect/utah_teapot.jpg),
  [PPM](https://github.com/fsufitch/dailyprogrammer/raw/master/ideas/edgedetect/utah_teapot.ppm)
- Advice dog:
  [JPG](https://github.com/fsufitch/dailyprogrammer/raw/master/ideas/edgedetect/advice_dog.jpg),
  [PPM](https://github.com/fsufitch/dailyprogrammer/raw/master/ideas/edgedetect/advice_dog.ppm)

# Hints / guidance

*If you prefer to figure it out / research it yourself, do not read
this section*.

While the Wikipedia article on edge detection has plenty of details
about how to approach it, it is a bit overwhelming for the purpose of
a daily challenge. As such, here's a quick overview of how one of the
simpler edge detection approaches, the **Sobel operator**:

The Sobel operator focuses on finding edges based on the
"brightness" of the image, requiring each pixel in the image to have a
"brightness" value. In other words, it requires a grayscale, not color
image. The first step, then, is to convert the input (RGB color) image to
grayscale -- perhaps by averaging the red, green, and blue values.

Next, we can actually apply the Sobel transformation. That involves
iterating through each pixel and figuring out how "edgy" it is. This
is done by looking at the pixels around it. Suppose our current pixel
is `X` in the table below, while its surrounding pixels are `a` to `h`.

    a b c
	d X e
	f g h

Since at this point each of these values are integers, we can just do
some simple arithmetic to figure out how much this selection of 9
pixels is changing horizontally. We'll just subtract the rightmost
three pixels from the leftmost ones (and give the central ones, `d`
and `e` a bit more weight since they're closer and more relevant to
how edgy `X` is).

    Edge_horizontal = E_h = (c + 2*e + h) - (a + 2*d + f)

Similarly, we can calculate the edginess in a vertical direction.

    Edge_vertical = E_v = (f + 2*g + h) - (a + 2*b + c)

If we imagine these horizontal and vertical edges as the sides of a
right triangle, we can calculate the overall edginess (and thus, the
value of `X`) by using the Pythagorean theorem.

    X = sqrt((E_h * E_h) + (E_v * E_v))

That's it. When we apply this calculation for every pixel in the
image, the outcome will be something like the problem's sample
output. We can then print out the PPM image using the same value for
red, green, and blue, giving us the grayscale output we want.


# Finally...

**Have any cool ideas for challenges?** Come post them over in
  /r/dailyprogrammer_ideas! 

**Got feedback?** We (the mods) would like to know how we're doing!
  Are the problems too easy? Too hard? Just right? Boring/exciting?
  Varied/same? Anything you would like to see us do that we're not
  doing? Anything we're doing that we should just stop? Come by this
  [feedback thread](https://redd.it/3zgexx) and let us know! 
