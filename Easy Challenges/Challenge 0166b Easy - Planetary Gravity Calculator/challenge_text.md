# Description

Welcome to this week's rebooted challenges. While this challenge is very simple at its core (which I think gives it an Easy rating), it gives me a chance to teach a bit of physics while I'm at it, so I may as well!
Newton's Law of Universal Gravitation says that:
Any two objects in the universe attract **each other** gravitationally...
With a force that's proportional to the product of their masses, and...
Inversely proportional to the square of the distance between them. (distance is measured from the center of the object - so if you're standing on Earth, you are about 6353 km away from it.
Because this is only a proportionality (not an equality), you will need a constant multiplier - this is called G, the gravitational constant.
This gives us the remarkably simple formula:
```
                mass of first object × mass of second object
    force = G × --------------------------------------------
                     (distance between objects)²
```
This force is applied on both objects equally and in opposite directions, toward each other. The value of G is currently known to be about **6.67e-11** which is why gravity is so weak - you can overcome the force of the entire planet just by jumping!
These 4 simple rules were used to describe gravity in nearly its entirety before Albert Einstein found out it was incomplete and discovered Special and General relativity - which you won't need today! Anyway, this is the only bit of physics you'll need for today's challenge - the rest is basic maths.

We're going to assume all planets are perfect spheres. This means you can find the volume of a planet, given its radius, with the fomula `V = 4/3 × π × radius³` like a normal sphere. We'll also assume they are made of a material which has the exact same density everywhere - so a handful of material from one bit of the planet weighs the same as any other. This means, given a density (in kilograms per cubic metre), and using the volume you worked out, you can compute the mass of the planet with the formula `mass = volume × density`. Assume the units you are using are kilograms and metres. Sorry, imperial folk!

Now, in case you are new to physics, you may need to know a little bit about forces. Forces are measured in Newtons (N) and measure, essentially, how hard an object is pushing another object. The object could be pushing physically - eg. pushing a lawn mower - or via an elementary force, such as Earth's gravity pushing you toward it. They can all be measured in Newtons. The force of a planet on something due to gravity is called weight - which is not to be confused with [mass](https://en.wikipedia.org/wiki/Mass), which is measured in kilograms and is a measure of how much matter something contains. As we saw before, the more mass two objects have, the greater the force they exert on each other. As gravitational force is dependent on the product of the masses of both objects, an object will weigh more if either the object itself, or the planet, is heavier - which is why you weigh less on the Moon!

Anyway, after that lengthy backstory, the challenge for you today is, given the dimensions of several planets and an object's mass, calculate how much force is applied on the object at the surface of the planet. Pretend the object is quite small for simplicity of your caluclations.

This is certainly a lot of physics to get your teeth into, so if you need any help, leave a comment and either I or someone else should be happy to help you out.

## Input Description

You will be given a number M which is the mass of an object in kilograms, on its own line, for example:
```
100
```
  
Followed by a number N:
```
4
```
  
You will then, on separate lines, be given a list of N planets. This will be given as its name, its radius (in metres), and its average density (in kilograms per cubic metre), like so:
```
Mercury, 2439700, 5427
```

## Output Description

Print the weight (in Newtons) of the object if it were at the surface of each planet, like so:
```
Mercury: 314.623
```

#Example Inputs and Outputs

## Example Input
```
100
4
Tantalus, 3104500, 5009
Reach, 7636500, 4966
Circumstance, 4127000, 4132
Tribute, 2818000, 4358
```
## Example output
```
Tantalus: 434.467
Reach: 1059.536
Circumstance: 476.441
Tribute: 343.117
```
# Challenge

## Challenge Input

```
75
9
Mercury, 2439700, 5427
Venus, 6051900, 5243
Earth, 6367445, 5515
Mars, 3386000, 3934
Jupiter, 69173000, 1326
Saturn, 57316000, 687
Uranus, 25266000, 1270
Neptune, 24553000, 1638
Pluto, 1173000, 2050
```

## Expected Challenge Output

```
Mercury: 277.442
Venus: 664.886
Earth: 735.845
Mars: 279.124
Jupiter: 1922.011
Saturn: 825.103
Uranus: 672.382
Neptune: 842.741
Pluto: 50.388
```

(These values are all very nearly exact!)

# Notes

You have a chance to utilise some OOP here. If your programming language supports it, you may want to create a *Planet* object.
