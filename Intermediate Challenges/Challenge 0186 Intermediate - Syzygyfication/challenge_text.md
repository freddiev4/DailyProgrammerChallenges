# [](#IntermediateIcon) **(Intermediate)**: Syzygyfication

In astronomical terms, a *syzygy* is when 3 or more objects line up in a straight line. The classic example of this is an *eclipse* (not the IDE, thankfully.) If the Sun, the Moon and the Earth (in that order) line up in a straight line, then the Moon is directly in-between the Sun and the Earth, meaning the view of the Sun is occluded - a solar eclipse. Another example of a syzygy is a *transit*. This is like an eclipse, but when a planet goes in front of the sun instead; for example, [in this image](http://upload.wikimedia.org/wikipedia/commons/6/64/Mercury_transit_2.jpg), the big yellow disc is (predictably) the Sun and the circular black spot in the middle is Mercury. It's like a mini-eclipse. Besides these two examples, syzygy can occur without the Sun. The dots in [this image here](https://upload.wikimedia.org/wikipedia/commons/c/c2/Three_Planets_Dance_Over_La_Silla.jpg) are the planets Mercury, Venus and Jupiter. They do not form a perfect syzygy  - the chance of that occurring is next to nothing - but they line up close enough that they're within a few degrees of each other in the sky.

The Wikipedia page for syzygy is here: [en.wikipedia.org/wiki/Syzygy_(astronomy)](https://en.wikipedia.org/wiki/Syzygy_%28astronomy%29)

Today, you'll have two challenges. The first one is to pronounce **syzygyfication**. The second one will be to determine if a syzygy is occurring at a given time, for a given solar system.

## Simplification

This challenge as stated would require a load of mathematics to solve. For this programming challenge, we will assume that the planets orbit the Sun in perfect circles on the same plane, that the Sun does not move at all, and the planets all start off with zero degrees rotation (ie. all in syzygy with each other.)

# Formal Inputs and Outputs

## Required Data

You will need this data of the Solar system. An AU (astronomical unit) is the distance from the Earth to the Sun. The orbital period is the time it takes for the planet to complete its orbit; a value of eg. `2` means the planet completes an orbit around the Sun every 2 years.

| Object      | Orbit Radius (AU) | Orbital Period (Earth year) |
| :-          |                -: |                          -: |
| Sun         |             0.000 |                       *n/a* |
| Mercury     |             0.387 |                       0.241 |
| Venus       |             0.723 |                       0.615 |
| Earth       |             1.000 |                       1.000 |
| Mars        |             1.524 |                       1.881 |
| Jupiter     |             5.204 |                      11.862 |
| Saturn      |             9.582 |                      29.457 |
| Uranus      |            19.189 |                      84.017 |
| Neptune     |            30.071 |                     164.795 |

## Input Description

You are to accept a number, which is a number of years after the starting time.

## Output Description

You are to output which of the planets, **or the Sun**, are in syzygy at the given time (in no particular order). For example:

    Venus-Sun-Earth syzygy occurring.

A syzygy should be when the objects are within 1 degree of each other in the sky. Remember, syzygy can also occur when the Sun is in-between the two objects. In this case, this is called 'opposition'.

# Sample Inputs and Outputs

An example 4-syzygy occurs at 3.30085 years, where Mercury, Earth, Mars and Jupiter line up. [A visual example of this is here](http://i.imgur.com/gkD863d.png). Some more syzygy occurrences are:

| Time (Earth year) | Syzygy |
|-:|:-|
| 3.30085 | Mercury-Earth-Mars-Jupiter |
| 9.12162 | Sun-Mercury-Mars, Mercury-Venus-Saturn |
| 18.0852 | Sun-Mars-Saturn, Mercury-Earth-Saturn-Neptune |
| 31.0531 | Sun-Earth-Saturn, Venus-Earth-Mars |
| 40.2048 | Sun-Venus-Mars, Mercury-Mars-Saturn, Earth-Mars-Uranus |
| 66.2900 | Sun-Venus-Earth-Uranus |
# Extension

If your programming language supports it, draw a view of the Solar system at the given time, to show the objects in syzygy (like the image above.)