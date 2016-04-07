# [](#EasyIcon) _(Easy)_: Sad Cycles

Take a number, and add up the square of each digit. You'll end up with another number. If you repeat this process over and over again, you'll see that one of two things happen:

* You'll reach one, and from that point you'll get one again and again.
* You'll reach a cycle of 4, 16, 37, 58, 89, 145, 42, 20, 4, 16, 37, ...

For example, starting with the number 12:

* 1^(2)+2^(2)=5
* 5^(2)=25
* 2^(2)+5^(2)=29
* 2^(2)+9^(2)=85
* 8^(2)+5^(2)=89
* 8^(2)+9^(2)=145
* From this point on, you'll join the cycle described above.

However, if we start with the number 13:

* 1^(2)+3^(2)=10
* 1^(2)+0^(2)=1
* 1^(2)=1
* 1^(2)=1
* We get the number 1 forever.

The sequence of numbers that we end up with is called a *sad cycle*, and it depends on the number you start with. If you start the process with a number **n**, the sad cycle for **n** is the cycle which ends up eventually repeating itself; this will either just be the cycle `1`, or the cycle `4, 16, 37, 58, 89, 145, 42, 20`.

But what if we cube the digits instead of squaring them? This gives us a different set of cycles all together. For example, starting with 82375 and repeatedly getting the sum of the *cube* of the digits will lead us to the cycle `352, 160, 217`. Other numbers gravitate toward certain end points. These cycles are called *3-sad cycles* (as the digits are raised to the power 3). This can be extended toward higher powers. For example, the 7-sad cycle for 1060925 is `5141159, 4955606, 5515475, 1152428, 2191919, 14349038, 6917264, 6182897, 10080881, 6291458, 7254695, 6059210`. Your challenge today,  will be to find the *b*-sad cycle for a given *n*.

# Formal Inputs and Outputs

## Input Description

You will input the base ***b*** on the first line, and the starting number ***n*** on the second line, like so:

    5
    117649

## Output Description

Output a comma-separated list containing the ***b***-sad cycle for ***n***. For example, the 5-sad cycle for 117649 is:

    10933, 59536, 73318, 50062

The starting point of the cycle doesn't matter - you can give a circularly permuted version of the cycle, too; rotating the output around, wrapping from the start to the end, is also a correct output. The following outputs are equivalent to the above output:

    59536, 73318, 50062, 10933
    73318, 50062, 10933, 59536
    50062, 10933, 59536, 73318

# Sample Inputs and Outputs

## Sample 1

### Input

    6
    2

### Output

    383890, 1057187, 513069, 594452, 570947, 786460, 477201, 239459, 1083396, 841700

## Sample 2

### Input

    7
    7

### Output

    5345158, 2350099, 9646378, 8282107, 5018104, 2191663

## Sample 3

### Input

    3
    14

### Output

    371

## Sample 4

### Input

    11
    2

### Output

    5410213163, 416175830, 10983257969, 105122244539, 31487287760, 23479019969, 127868735735, 23572659062, 34181820005, 17233070810, 12544944422, 31450865399, 71817055715, 14668399199, 134844138593, 48622871273, 21501697322, 33770194826, 44292995390, 125581636412, 9417560504, 33827228267, 21497682212, 42315320498, 40028569325, 40435823054, 8700530096, 42360123272, 2344680590, 40391187185, 50591455115, 31629394541, 63182489351, 48977104622, 44296837448, 50918009003, 71401059083, 42001520522, 101858747, 21187545101, 10669113941, 63492084785, 50958448520, 48715803824, 27804526448, 19581408116, 48976748282, 61476706631

# Comment Order

Some people have notified us that new solutions are getting buried if you're not one of the first to submit. This is valid concern, so today we're trialling a method of **setting the suggested sort order to** ***new*** (suggested sorts are a newly introduced feature on Reddit). We'll take feedback on this and see how it goes. This means newer solutions will appear at the top.

If you don't like this new sorting, you can still change the method back to **sort by** ***best***, which is the default.

# Notes

I wasn't aware that /u/AnkePluff has made a [similar challenge suggestion](http://www.reddit.com/r/dailyprogrammer_ideas/comments/2ydta5/easy_happy_numbers/) already - seems like we're on the same wavelength!