package Challenge_39;

/*
 * @author https://github.com/Hoenn
 * 
 * Determine if a number is a Kaprekar number
 */
import java.util.Scanner;

public class Challenge_39 {
	public static void main(String args[]) {
		System.out.println("Enter a number to check: ");
		Scanner input = new Scanner(System.in);
		
		int num = input.nextInt();
		int sqr = (int)(Math.pow(num, 2));
		
		String sqrString = String.valueOf(sqr);
		//left half
		int left = Integer.valueOf(sqrString.substring(0, sqrString.length()/2));
		//right half
		int right = Integer.valueOf(sqrString.substring(sqrString.length()/2));

		
		if((left+right) == num) {
			System.out.println("Yes! "+num+" is indeed a Kaprekar number.");
			System.out.println(num+"^2 = "+sqr+" then "+left+"+"+right+"= "+num);
		}
		else {
			System.out.println("No, "+num+" is not a Kaprekar number. '9' is a good example of a Kaprekar number");
		}
		
		input.close();
	}
}
