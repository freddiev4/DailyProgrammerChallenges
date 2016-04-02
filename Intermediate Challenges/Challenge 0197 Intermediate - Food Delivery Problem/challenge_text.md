#Description:

You are owner of a new restaurant that is open 24 hours a day 7 days a week. To be helpful to your customers you deliver. To make sure you are the best in business you offer a guarantee of the fastest delivery of food during your hours of operation (which is all the time)

Our challenge this week is to build a program our delivery people can use to help pick the fastest route in time to get from a source to a destination in the town of our restaurant.

#City Routes

The city has many streets connected to many intersections. For the sake of naming we will label intersections with letters. Streets between intersections will use their street name.

#Time Intervals

The data for each street has 4 values of time in minutes. They represent the time it takes one to travel that street based on a fixed interval of time of day to travel on that street. The varied time is due to different traffic loads on that street.

* T1 = 0600-1000 (6 am to 10 am)
* T2 = 1000 - 1500 (10 am to 3 pm) 
* T3 = 1500 - 1900 (3 pm to 7 pm)
* T4 = 1900 - 0600 (7 pm to 6 am)

#Data Format

(Start Intersection) (Stop Intersection) (Name of street) (T1) (T2) (T3) (T4)

     (Start Intersection) - The letter of that unique intersection
     (Stop Intersection) - The letter of that unique intersection
     (Name of Street) - Name of the street with this time data
     (T1 to T4) are the minutes it takes to travel based on fixed time intervals (described above)


#Data

The data:

     A B "South Acorn Drive" 5 10 5 10
     B C "Acorn Drive" 15 5 15 5
     C D "North Acorn Drive" 7 10 15 7
     H G "South Almond Way" 10 10 10 10
     G F "Almond Way" 15 20 15 20
     F E "North Almond Way" 5 6 5 6
     I J "South Peanut Lane" 8 9 10 11
     J K "Peanut Lane" 11 10 9 8
     K L "North Peanut Lane" 7 5 7 5
     P O "South Walnut" 6 5 6 5
     O N "Walnut" 10 8 10 8
     N M "North Walnut" 9 6 9 6
     D E "West Elm Street" 10 8 12 7
     E L "Elm Street" 12 11 12 8
     L M "East Elm Street" 5 4 5 4
     C F "West Central Avenue" 9 8 9 8
     F K "Central Avenue" 5 4 5 4
     K N "East Central Avenue" 9 9 9 9
     B G "West Pine Road" 7 6 7 6
     G J "Pine Road" 9 8 9 8 
     J O "East Pine Road" 6 5 6 5
     A H "West Oak Expressway" 9 8 7 7
     H I "Oak Expressway" 10 10 10 10
     I P "East Oak Expressway" 8 7 8 7 

#Time Changes and Routes

It is possible that a route might take you long enough that it might cross you over a time change such that the route times get change. To make this easier just please consider the time between intersections based on the start time of the drive. So say I pick 5:50am - and if the route would take us into 6am hour you don't have to compute the route times for 6am to 10am but just keep the route computed based on 7pm to 6am since our starting time was 5:50am.

#Challenge Input: 

You will be given start and end intersections and time of day to compute a route.

#Challenge Output:

List the route direction street by street and time. This must be the "Fastest" route from start to end at that time of day. Also list the time it took you in minutes.

#Challenge Routes to solve:

    A M 0800
    A M 1200
    A M 1800
    A M 2200


    P D 0800
    P D 1200
    P D 1800
    P D 2200

