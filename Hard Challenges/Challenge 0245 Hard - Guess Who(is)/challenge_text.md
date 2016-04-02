Guess Who(is)?
==============

You are working as the only software engineer at a small but
successful startup. One day, though, there is a problem. You got this
e-mail from the CEO:

> My dearest programmer,
> 
> Wonderful news! It looks like our website exploded in popularity
> last night! We are going to be rich! We have hundreds to thousands
> of people accessing the site every second, and growing fast.
>
> To capitalize on this, we need to immediately identify who the
> biggest sources of traffic are. Fortunately, my friend Quincy has
> sent me this huge list of internet addresses coupled with associated
> names. Isn't that cool?
>
> Can you write something that takes our huge amount of visitors,
> compares it against this list of addresses/names, and creates some
> statistics? I dunno, a list of names with a count of how many visits
> they each paid us?
>
> Do this and I'll throw a pizza party for everyone!
>
> Toodles!
>
> /u/Blackshell
>
> <attachment: ip_ranges.txt, 33 MB>

The attached file looks like it contains a list of IP address ranges
and names. Using your server administration skills, you are also able
to extract a file with a long list of IPs of visitors to your
company's website. That means it's all in your capable hands now. Can
you write a program that can *look up more than 1000 IPs per second*,
generate statistics, save the day, and get pizza?

Formal Input
============

The input comes in two pieces. The first is a text file containing
Quincy's IP ranges. These come as one entry per line, with two
space-separated IPs and a name.

The second file is just a list of IPs, one per line, that must be
looked up.

Sample Input IPs
----------------

The input is composed of a large number of lines that contain two IPs,
followed by the name of whatever/whoever is associated with the IP
range.

	123.45.17.8 123.45.123.45 University of Vestige
	123.50.1.1 123.50.10.1 National Center for Pointlessness
	188.0.0.3 200.0.0.250 Mayo Tarkington
	200.0.0.251 200.0.0.255 Daubs Haywire Committee
	200.0.1.1 200.255.255.255 Geopolitical Encyclopedia
	222.222.222.222 233.233.233.233 SAP Rostov
	250.1.2.3 250.4.5.6 Shavian Refillable Committee
	123.45.100.0 123.60.32.1 United Adverbs
	190.0.0.1 201.1.1.1 Shavian Refillable Committee
	238.0.0.1 254.1.2.3 National Center for Pointlessness

As a visual representation of it, I have made a [quick whiteboard
doodle](https://i.imgur.com/AL6cASf.png) of the ranges in relation to each other (not to scale). A
couple of things to note: 

* These IP ranges are **not guaranteed to be IPv4 "subnets"**.
  This means that they may not be accurately represented by
  prefix-based
  [CIDR blocks](https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing#CIDR_blocks).
  
* The ranges may (and probably do) overlap. Possibly more than two
  layers deep.

* There may be multiple ranges associated with the same name.

*If you are unfamiliar with how IPs addresses work, see the section at the bottom of the post.*

Sample Input Lookups
--------------------

	250.1.3.4
	123.50.1.20
	189.133.73.57
	123.50.1.21
	250.1.2.4
	123.50.1.21
	250.1.3.100
	250.1.3.5
	188.0.0.5
	123.50.1.100
	123.50.2.34
	123.50.1.100
	123.51.100.52
	127.0.0.1
	123.50.1.22
	123.50.1.21
	188.0.0.5
	123.45.101.100
	123.45.31.52
	230.230.230.230


	

Formal Output
=============

You must output a reverse-ordered list of the total number of times the varying institutions/people visited your website. Each visitor IP should only count once, and it should count for the **smallest** range it is a member of. IPs that were not found in the given rangescan count as `<unknown>`.

	8 - National Center for Pointlessness
	4 - Shavian Refillable Committee
	3 - Mayo Tarkington
	2 - University of Vestige
	1 - SAP Rostov
	1 - United Adverbs
	1 - <unknown>

Explanation
-----------

Here's each input IP and which name it mapped to:

    National Center for Pointlessness
	123.50.1.20
	123.50.1.21
	123.50.1.22
	123.50.1.21
	123.50.1.21
	123.50.1.100
	123.50.1.100
	123.50.2.34

	Shavian Refillable Committee
	250.1.2.4
	250.1.3.4
	250.1.3.5
	250.1.3.100

	Mayo Tarkington
	188.0.0.5
	188.0.0.5
	189.133.73.57

	University of Vestige
	123.45.101.100
	123.45.31.52

	SAP Rostov
	230.230.230.230

    United Adverbs
    123.51.100.52

	<unknown>
	127.0.0.1


The Catch / The Challenge
=========================

This seems simple, right? Well... Make your program work efficiently
for the below inputs. The target speed (per your CEO's email) is at
least 1,000-2,000 queries per second. Target run time is listed for 
each query file, assuming 1,500 queries per second. You should try
to hit that run time even using the largest IP range file.

**IP range files:**

* [500 ranges](https://raw.githubusercontent.com/fsufitch/dailyprogrammer/master/ideas/whois/ips500.txt)
* [2,500 ranges](https://github.com/fsufitch/dailyprogrammer/raw/master/ideas/whois/ips2500.txt)
* [10,000 ranges](https://github.com/fsufitch/dailyprogrammer/raw/master/ideas/whois/ips10k.txt)
* [300,000 ranges](https://github.com/fsufitch/dailyprogrammer/raw/master/ideas/whois/ips300k.txt) (file size warning: 15 MB)
* [1,000,000 ranges](https://github.com/fsufitch/dailyprogrammer/raw/master/ideas/whois/ips1mil.txt) (file size warning: 49 MB)

**Query files:**

* [100 queries](https://github.com/fsufitch/dailyprogrammer/raw/master/ideas/whois/query100.txt); Target: 0.07 sec
* [1,000 queries](https://github.com/fsufitch/dailyprogrammer/raw/master/ideas/whois/query1k.txt); Target: 0.67 sec
* [10,000 queries](https://github.com/fsufitch/dailyprogrammer/raw/master/ideas/whois/query10k.txt); Target: 6.67 sec

You can mix and match the IP range files and the query files; they are
purely random, not constructed to trip anything in particular up.

**Food for thought**: you may want to split the program into two steps:
one for parsing / recording / organizing the IP ranges into a database
(or something similar), and another for performing lookups against the
database. 

**Bonus points:** 

* Modify your solution to work for [IPv6 (128-bit) addresses](https://en.wikipedia.org/wiki/IPv6_address) in addition to IPv4 (32-bit) addresses.
* Test your solution against some super-huge data sets (10-100 million IP ranges). You will have to generate those inputs yourself, though. You can use my [generation script](https://github.com/fsufitch/dailyprogrammer/blob/master/ideas/whois/ipgen2.py) if you  would like.

Background: How IP Addresses Work
=================================

An IP address is a string composed of 4 numbers between 0 and 255
(8 bit, or 1 byte), with periods between them.

At its core is fundamentally a 32 bit integer formatted
in chunks, to make it more readable/memorable. For example, the
standard for calling your own computer is the address
`127.0.0.1`. That address is the same as the number `2130706433`, but
it's much easier to remember. How did we get that?

Let's convert the components of `127.0.0.1` to 8-bit binary:

- `127` = `011111111`
- `0` = `00000000`
- `0` = `00000000`
- `1` = `00000001`

Then, concatenate them: `01111111000000000000000000000001`. Converting
that number back to decimal (base 10), we get `2130706433`. We can go
in the opposite direction to go from a 32 bit integer to an IP
address.

**Counting and ranges.** Since IP addresses are basically numbers, we can
count from one to the next. The biggest difference is that they "carry
over" into the next byte when you reach `256`:

    127.0.0.1
	127.0.0.2
	127.0.0.3
	...
	127.0.0.254
	127.0.0.255
	127.0.1.0
	127.0.1.1
	...
	127.255.255.253
	127.255.255.254
	127.255.255.255
	128.0.0.0

That means that the IP address `127.0.0.100` is inside the range
`127.0.0.1 - 127.0.1.1`, for example.

For the purposes of this challenge though, since the output does not
contain any IP addresses, it is safe to convert all input IPs to
integers and forget about it. Here's some
[sample C code](https://gist.github.com/fsufitch/ba893ce1eefd93bd1f9c)
to do it, given the address's four component bytes. Some languages,
like Python 3.x, even include
[IP address libraries](https://docs.python.org/3/howto/ipaddress.html)
to make your life easier. However, keep in mind that the more complex 
and "feature-filled" your tools are, the slower they are more likely to be --
which may negatively impact your lookup speed.

Finally
-------

Do you have a cool idea for a programming challenge? Head on over to /r/dailyprogrammer_ideas and let us know!