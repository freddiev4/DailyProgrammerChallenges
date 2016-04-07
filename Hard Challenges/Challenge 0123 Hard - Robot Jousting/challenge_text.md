# [](#HardIcon) *(Hard)*: Robot Jousting

You are an expert in the new and exciting field of *Robot Jousting*! Yes, you read that right: robots that charge one another to see who wins and who gets destroyed. Your job has been to work on a simulation of the joust matches and compute *when* there is a collision between the two robots and *which* robot would win (the robot with the higher velocity), thus preventing the destruction of very expensive hardware.

Let's define the actual behavior of the jousting event and how the robots work: the event takes place in a long hallway. Robots are placed initially in the center on the far left or far right of the hallway. When robots start, they choose a given starting angle, and keep moving forward until they hit a wall. Once a robot hits a wall, they stop movement, and rotate back to the angle in which they came into the wall. Basically robots "reflect" themselves off the wall at the angle in which they hit it. For every wall-hit event, the robot loses 10% of its speed, thus robots will slow down over time (but never stop until there is a collision).

[Check out these two images as examples of the described scene](http://imgur.com/a/NSzpY). Note that the actual robot geometry you want to simulate is a perfect circle, where the radius is 0.25 meters, or 25 centimeters.

# Formal Inputs & Outputs
## Input Description

You will be given three separate lines of information: the first has data describing the hallway that the robots will joust in, and then the second and third represent information on the left and right robots, respectively.

The first line will contain two integers: how long and wide the hallway is in meters. As an example, given the line "10 2", then you should know that the length of the hallway is 10 meters, while the width is just 2 meters.

The second and third lines also contain two integers: the first is the initial angle the robot will move towards (in degrees, as a signed number, where degree 0 always points to the center of the hallway, negative points to the left, and positive points to the right). The second integer is the speed that the robot will initially move at, as defined in millimeters per second. As an example, given the two lines "45 5" and "-45 2", we know that the left robot will launch at 45 degrees to its left, and that the second robot will launch 45 degrees to its left (really try to understand the angle standard we use). The left robot starts with an initial speed of 5 mm/s with the right robot starting at 2 mm/s. Assume that the robot radius will always be a quarter of a meter (25 centimeters).

## Output Description

Simply print "Left robot wins at X seconds." or "Right robot wins at X seconds." whenever the robots collide: make sure that the variable X is the number of seconds elapsed since start, and that the winning robot is whichever robot had the higher velocity. In case the robots never hit each other during a simulation, simply print "No winner found".

# Sample Inputs & Outputs
## Sample Input

    10 2
    30 5
    -10 4

## Sample Output

*Please note that this is FAKE data; I've yet to write my own simulation...*

    Left robot wins at 32.5 seconds.

# Challenge Note

Make sure to keep your simulation as precise as possible! Any cool tricks with a focus on precision management will get bonus awards! This is also a very open-ended challenge question, so feel free to ask question and discuss in the comments section.