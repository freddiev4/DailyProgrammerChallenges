#Description:

Your company has built its own telephone network. This allows all your remote locations to talk to each other. It is your job to implement the program to establish calls between locations.


Calls are dedicated bandwidth on your network. It uses up resources on the network connection between locations. Because of this building a call between two locations on the network can be tricky. As a call is built it continues to use resources and new calls might have to route differently to find a way to reach the source and destination. If there are no ways to build a call then the call will fail.

#Input:

There will be two sets of input. First set deals with what your phone network looks like. The second set will be the series of calls you must handle.

##Network Input:

You must be able to read in network connections. They will be letter names for locations and a number. The number represents how many calls can go across the network link between these two locations. So for example if you have location A and location B and you can have 2 calls between these you will read in a link as:

    A B 2


Example of list of links for a telephone network:

    A B 2
    A C 2
    B C 2
    B D 2
    C E 1
    D E 2
    D G 1
    E F 2
    F G 2

##Call Input:

You then have a list of calls to be placed on the network. Each call builds in the order you enter it and it is unknown if the resources will be there or not. You must read in all the calls. The calls simply have pairs listing the source and destination of the call. So for example if you wanted Location C to call Location G you would read in the call as:

    C G

Example of calls to be placed on your example network:

    A G
    A G
    C E
    G D
    D E
    A B
    A D

#Output:

Your program will build the call if it can and list back the route the call took. If the call cannot be placed due to too many calls taking up resources it will indicate the "Call Failed".


##Example output given the above inputs:

    Call A G -- placed A B D G
    Call A G -- placed A C E F G
    Call C E -- placed C B D E
    Call G D -- placed G F E D
    Call D E -- failed
    Call A B -- A B
    Call A D -- failed


#Understanding the Bandwidth:

So a link A B has a unit of "2" - if a call goes across this connection then the amount of calls the link can handle is reduced down to 1. If 1 more call crosses the link then the resource is 0 and the link is full. Any calls trying to be placed cannot cross this link as the bandwidth does not exist to support the call.

Links between locations can support calls in any direction. So a link A B exists the call can go A to B or B to A. In some cases you might have a call that is going over this link as A B and another call going B A.


#Example 2:

    A B 1
    B C 2
    C D 2
    D E 2
    E F 2
    F G 2
    G A 2
    E H 1
    H D 1

    A C
    A D
    A D
    F D
    B D
    B D
    B E
    C F


Output could vary but you should be able to build 5 calls with 2 failed.
