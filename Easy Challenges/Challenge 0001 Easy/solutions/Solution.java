/*
** Author: MohammedShabbar Manek
** Github: msmanek
** Website: msmanek.me
*/

import java.io.BufferedReader;
import java.io.File;
import java.io.IOException;
import java.io.InputStreamReader;

public class Solution {
	
	public static BufferedReader input = new BufferedReader(new InputStreamReader(System.in));

	public static void main(String[] args) {

		//getting the inputs from the user and saving them approriately
		String name = getString("What is your name? ");
		int age = getInteger("What is your age? ", 0, Integer.MAX_VALUE);
		String redditUsername = getString("What is your reddit username? ");

		//printing out the appropriate outputs
		System.out.println("\nyour name is " + name + ", you are " + age + " years old, and your username is " + redditUsername);
	}
	
	
	public static String getString(String prompt) {
		String userStringInput = "";
		boolean done = false;
		
		do {
			System.out.print(prompt);
			
			try { 
				userStringInput = input.readLine();
				done = true;
			}//end try
			catch (IOException e) {System.out.print("\nERROR: Input must be a valid string!\n\n");}
			
		} while(!done);
		
		return userStringInput;
	}//end getString function
	
	public static int getInteger(String prompt, int LB, int UB) {
		int userIntInput = -1; //random number to satisfy compiler
		boolean done = false; //boolean flag
		
		do {
			System.out.print(prompt);
			
			//try catch to get correct input
			try {
				
				userIntInput = Integer.parseInt(input.readLine());
				done = true;
				
				//if statement to catch an int that is not in the correct bound
				if (LB > userIntInput || userIntInput > UB) {
					integerErrorMessage(LB, UB);
					done = false;
				}//end if
				
			}//end try
			catch (IOException|NumberFormatException e) {	
				integerErrorMessage(LB, UB);
			}
			
		} while(!done); //end of do-while loop
		
		return userIntInput;
		
	}//end getInteger function
	
	public static void integerErrorMessage (int LB, int UB) {		
		//series of if statements to catch if LB/UB is max/min of int
		if (LB == Integer.MAX_VALUE && UB == Integer.MIN_VALUE)
			System.out.printf("\nERROR: Input must be an integer in [-infinity, infinity]!\n\n");
		else if (LB == Integer.MAX_VALUE)
			System.out.printf("\nERROR: Input must be an integer in [-infinity, %d]!\n\n", UB);
		else if (UB == Integer.MAX_VALUE)
			System.out.printf("\nERROR: Input must be an integer in [%d, infinity]!\n\n", LB);
		else
			System.out.printf("\nERROR: Input must be an integer in [%d, %d]!\n\n", LB, UB);
		
	}//end integerErrorMessage function

}//end BasicFunctions Class
