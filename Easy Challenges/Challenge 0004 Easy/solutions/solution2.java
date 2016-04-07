/**
 * @coderMato https://github.com/coderMato
 */

import java.util.Scanner;


public class solution {
	private static Scanner scanner;
	public static void main(String[] args){
		scanner = new Scanner(System.in);
		int passwordLength, passwordCount;
		System.out.println("How many passwords?");
		passwordCount = scanner.nextInt();
		System.out.println("How long should be the password be?");
		passwordLength = scanner.nextInt();
		String password;
		for(int x = 0; x < passwordCount; x++){
			password = "";
			for(int i = 0; i < passwordLength; i++){
				password += randomNumber(0 + (int)(Math.random() * ((1 - 0) + 1)));
			}
			System.out.println(password);
		}
	}
	public static char randomNumber(int number){  //number decides whether the letter is upper or lower case.
		if(number == 0){
			return (char) (65 + (int)(Math.random() * ((90 - 65) + 1))); // return random char from 'A-Z'
		}
		else{
			return (char) (97 + (int)(Math.random() * ((122 - 97) + 1))); // return random char from 'a-z'
		}
	}
}
