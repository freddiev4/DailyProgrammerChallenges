# [](#IntermediateIcon) _(Intermediate)_: Average Speed Cameras

In the UK, a common safety measure on motorways is the so-called [average speed cameras](http://en.wikipedia.org/wiki/SPECS_%28speed_camera%29). These, unlike normal speed cameras which measure a vehicle's speed instantaneously, have several connected cameras at intervals along a motorway. The speed of a vehicle can be determined by dividing the distance between two cameras by the time it takes the vehicle to get from one to another. This can be used to stop vehicles breaking the speed limit over long stretches of roads, rather than allowing vehicles to speed up after they are out of range. The Home Office has contacted you to replace the aging software system in the cameras with something more up to date.

In this challenge, you will be given a number of speed cameras and their positions along a road, along with the speed limit. You will then be given the camera logs for each camera in turn. From this data, you will work out which vehicles are breaking the speed limit.

# Formal Inputs and Outputs
    
## Input Description

The first section of the input will contain the speed limit and the position of the speed cameras. The speed limit may be in miles per hour or kilometres per hour. The lines will be in the format:

    Speed limit is <limit> mph.

OR

	Speed limit is <limit> km/h.

The lines describing the positions of the speed cameras will look like:

	Speed camera <number> is <distance> metres down the motorway.

Speed camera number 1 will always have a distance of 0.

After this, you will get logs for each speed camera, like this:

	Start of log for camera <number>:
	Vehicle <registration number> passed camera <number> at <time>.
	Vehicle <registration number> passed camera <number> at <time>.
	...

Example inputs and outputs can be found below.
    
## Output Description

For each vehicle that breaks the speed limit, print a line like so:

    Vehicle <registration number> broke the speed limit by <amount>.

Where `<amount>` is in the local units.

# Sample Inputs and Outputs

## Sample Input

	Speed limit is 60.00 mph.
	Speed camera number 1 is 0 metres down the motorway.
	Speed camera number 2 is 600 metres down the motorway.
	Speed camera number 3 is 855 metres down the motorway.
	Speed camera number 4 is 1355 metres down the motorway.
	Start of log for camera 1.
	Vehicle G122 IVL passed camera 1 at 09:36:12.
	Vehicle H151 KEE passed camera 1 at 09:36:15.
	Vehicle U109 FIJ passed camera 1 at 09:36:20.
	Vehicle LO04 CHZ passed camera 1 at 09:36:23.
	Vehicle I105 AEV passed camera 1 at 09:36:28.
	Vehicle J828 EBC passed camera 1 at 09:36:29.
	Vehicle WF EP7 passed camera 1 at 09:36:32.
	Vehicle H108 KYL passed camera 1 at 09:36:33.
	Vehicle R815 FII passed camera 1 at 09:36:34.
	Vehicle QW04 SQU passed camera 1 at 09:36:34.
	Start of log for camera 2.
	Vehicle G122 IVL passed camera 2 at 09:36:42.
	Vehicle LO04 CHZ passed camera 2 at 09:36:46.
	Vehicle H151 KEE passed camera 2 at 09:36:51.
	Vehicle QW04 SQU passed camera 2 at 09:36:53.
	Vehicle J828 EBC passed camera 2 at 09:36:53.
	Vehicle R815 FII passed camera 2 at 09:36:55.
	Vehicle U109 FIJ passed camera 2 at 09:36:56.
	Vehicle H108 KYL passed camera 2 at 09:36:57.
	Vehicle I105 AEV passed camera 2 at 09:37:05.
	Vehicle WF EP7 passed camera 2 at 09:37:10.
	Start of log for camera 3.
	Vehicle LO04 CHZ passed camera 3 at 09:36:55.
	Vehicle G122 IVL passed camera 3 at 09:36:56.
	Vehicle H151 KEE passed camera 3 at 09:37:03.
	Vehicle QW04 SQU passed camera 3 at 09:37:03.
	Vehicle J828 EBC passed camera 3 at 09:37:04.
	Vehicle R815 FII passed camera 3 at 09:37:09.
	Vehicle U109 FIJ passed camera 3 at 09:37:11.
	Vehicle H108 KYL passed camera 3 at 09:37:12.
	Vehicle I105 AEV passed camera 3 at 09:37:20.
	Vehicle WF EP7 passed camera 3 at 09:37:23.
	Start of log for camera 4.
	Vehicle LO04 CHZ passed camera 4 at 09:37:13.
	Vehicle QW04 SQU passed camera 4 at 09:37:24.
	Vehicle J828 EBC passed camera 4 at 09:37:26.
	Vehicle G122 IVL passed camera 4 at 09:37:28.
	Vehicle R815 FII passed camera 4 at 09:37:28.
	Vehicle H151 KEE passed camera 4 at 09:37:29.
	Vehicle H108 KYL passed camera 4 at 09:37:36.
	Vehicle I105 AEV passed camera 4 at 09:37:42.
	Vehicle WF EP7 passed camera 4 at 09:37:44.
	Vehicle U109 FIJ passed camera 4 at 09:37:45.

## Sample Output

    Vehicle LO04 CHZ broke the speed limit by 3.4 mph.
    Vehicle LO04 CHZ broke the speed limit by 2.1 mph.
    Vehicle QW04 SQU broke the speed limit by 10.6 mph.
    Vehicle R815 FII broke the speed limit by 3.9 mph.

# Challenge

## Challenge Input

A long pastebin containing a huge data set is [available here](https://gist.githubusercontent.com/Quackmatic/e75d61c1ecc319f721a2/raw/average-speed-cameras.txt), to stress-test your input if nothing else.

# Notes

You may want to use regular expressions again for this challenge.