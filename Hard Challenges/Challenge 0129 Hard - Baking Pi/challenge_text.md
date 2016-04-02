# Description

[Pi (π)](http://en.wikipedia.org/wiki/Pi), the super-cool irrational number, can be computed through a variety of ways. One way is using [continued fractions](http://en.wikipedia.org/wiki/Continued_fraction), which computes a more and more precise value of Pi over each iteration. The problem with this approach is you cannot distribute the work across several machines, because the computation itself cannot be split into smaller independent computations.

This is where [Spigot Algorithms](http://en.wikipedia.org/wiki/Spigot_algorithm) shine: you can compute the subset of base-16 digits for some constants (like Pi) independently across many machines. More specifically, the [Bailey–Borwein–Plouffe](http://en.wikipedia.org/wiki/Bailey%E2%80%93Borwein%E2%80%93Plouffe_formula) formula allows you to compute digits of Pi without having to compute any preceding digits.

Your goal is to write an application that computes base-16 digits of Pi across multiple machines over the Internet. You will have to implement a master dispatcher service, that sends out work commands and receives results, to networked machines that implement the BBP formula. The implementation details are up to you, including the network protocol and platform you want to write for. You must support at minimum four (4) machines computing in parallel, though for demonstration purposes you may run the processes locally on one machine.

**Bonus:** As an extra bonus challenge, implement a verification feature (e.g. machine 1 computes a digit, then machines 2 & 3 verify it is valid).

**Reddit Gold:** To thank Reddit for hosting such an awesome community, the first two valid solutions posted will win one-month of [Reddit Gold](http://www.reddit.com/gold/about).

**Special Thanks:** Special thanks to Daily Programmer's Elite6809 for clarifying why this challenge must compute in base-16 (or in a base that's a power of two), and not in the original description's base-10. The challenge text has been updated to reflect the fix.

# Formal Inputs & Outputs

## Input Description

There is no formal input description, though this is the desired behavior:
You launch your main dispatcher-application on Computer A. You then launch the computing-applications on Computer W, X, Y and Z. Computer A wants to compute the first four digits of Pi, and sends the appropriate network commands, one to each computer. Computer Y returns a result first, so the dispatcher receives the data, saves in your output file the line "0:2", and then gives the command to compute the 5th digit of Pi. Computers X, Z, W finish in that order, returning the results to the dispatcher, which in turn saves in the same format. They are then asked to compute digits 6, 7, and 8. This repeats until your dispatcher application sends a "stop" or "kill" command to the computing processes. It is up to you how many hexadecimal digits each process computes.

## Output Description

For each computed base-16 (hexadecimal) digit of Pi, write to a file a line of text in the format of \<Digit-Index\>:\<Computed-Digit\>. The order does not matter, and you may skip digits. An example of the file, after eight computed digits, would be as follows:
```
0:2
1:4
2:3
3:F
4:6
5:A
6:8
7:8
```

# Notes

There are a few sites that already have large numbers of hexadecimal digits of Pi pre-computed; make sure to use them as a resource to validate your work! [Here's a great example on CalcCrypto](http://calccrypto.wikidot.com/math:pi-hex). Remember that these digits are in the Mantissa, so you compute the decimal values with negative exponent. As an example, the first 8 binary digits of Pi's Significand is "00100100". What would the decimal value be? Use the algebraic conversion formula:
```
0 * 2^-1 + 0 * 2^-2 + 1 * 2^-3 + 0 * 2^-4 + 0 * 2^-5 + 1 * 2^-6 + 0 * 2^-7 + 0 * 2^-8
```

The result here is "0.140625" (decimal), where the first two digits in the Significant are correct! We can apply the same for the above computed hex digits: (note how F was changed to 15 and A changed to 10, as appropriate)
```
2 * 16^-1 + 4 * 16^-2 + 3 * 16^-3 + 15 * 16^-4 + 6 * 16^-5 + 10 * 16^-6 + 8 * 16^-7 + 8 * 16^-8
```
The result is "0.14159265346" (decimal), 9 decimal digits matching with Pi!
