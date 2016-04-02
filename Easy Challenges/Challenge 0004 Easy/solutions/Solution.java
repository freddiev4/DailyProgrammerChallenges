/*
** Author: MohammedShabbar Manek
** Github: msmanek
** Website: msmanek.me
*/

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.Math;
import java.lang.Character;

public class Solution {
	
	public static BufferedReader input = new BufferedReader(new InputStreamReader(System.in));

	public static void main(String[] args) {

		int numChars = 0;
		String password;

		//getting the inputs from the user and saving them approriately
		int numPasswords = getInteger("How many passwords would you like? ", 1, Integer.MAX_VALUE);

		for(int i = 1; i <= numPasswords; i++) {
			numChars = getInteger("\nHow many characters would you like password " + i + " to be? ", 1, Integer.MAX_VALUE);
			password = generatePassword(numChars);
			System.out.println("Password " + i + ": " + password);
		}
	}

	public static String generatePassword(int numChars) {
		//StringBuilder helps us build our string one character at a time
		StringBuilder sb = new StringBuilder(numChars);
		int rand = 0;
		char randomChar;

		for(int i = 0; i < numChars; i++) {
			rand = (int)(Math.random() * 94) + 33; //generate random num in std ASCII Range
			randomChar = Character.toChars(rand)[0];//toChars returns a char array
			sb.append(randomChar);
		}
		return sb.toString();
	}	
		
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

}//end Solutions Class
