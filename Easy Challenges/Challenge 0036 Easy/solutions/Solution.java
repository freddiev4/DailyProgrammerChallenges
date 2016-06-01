/*
** Author: MohammedShabbar Manek
** Github: msmanek
** Website: msmanek.me
**
** Note that this is a very brute force way of solving the problem
*/

public class Solution {
	public static void main (String[] args) {
		boolean[] doors = new boolean[1000];

		//initially, close all doors (false means closed)
		for (int i = 0, j = doors.length; i < j; i++) {
			doors[i] = false;
		}

		System.out.println(doors[0]);

		for (int i = 0, numDoors = doors.length; i < numDoors; i++) {

			for (int k = 0; k < numDoors; k++) {

				if ((k + 1) % (i + 1) == 0) {
					if (doors[k] == true) {
						doors[k] = false;
					} else {
						doors[k] = true;
					}
				}

			}
		}

		for (int i = 0, j = doors.length; i < j; i++) {
			System.out.print("Locker " + (i + 1) + ": ");
			if (doors[i] == true) {
				System.out.println("Open");
			} else {
				System.out.println("Closed");
			}
		}
	}
}
