import java.util.InputMismatchException;
import java.util.Random;
import java.util.Scanner;

public class Solution3 {
	
		 
	public static int length = 0;	
		
	public static void main(String[] args) {
		
		scan();
		generate();
	}
	
		public static void scan(){
			Scanner reader = new Scanner(System.in);
			
			System.out.println("Enter the required length of the password!");
			
			try{
				length = reader.nextInt();
			}
			catch(InputMismatchException ime){				
				System.err.println("Error! Enter a number!\n");
				scan();
			}
			if(length < 6 ){				
				System.err.println("The required length is too small! Please Enter a bigger number!");
				scan();
			}
			if(length > 16){
				System.err.println("The required length is too big! Please Enter a smaller number!");
				scan();
			}
		}
		
		
		public static void generate(){
			
			Random rand = new Random();			
			String chars = "abcdefghijklmnopqrstuvwxyzABCDEFGRHIJKLMNOPQRSTUVWXYZ0123456789";
			String pswd = "";
			
			for(int i=0;i<length;i++){
				pswd += chars.charAt(rand.nextInt(chars.length()));	
			}
			System.out.println("Your password is: " + pswd.toString());
		}
		

}
