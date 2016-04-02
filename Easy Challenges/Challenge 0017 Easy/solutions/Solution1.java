import java.util.InputMismatchException;
import java.util.Scanner;

public class Solution1 {

		static int height = 0;
		static String s = "@";
		
	public static void main(String[] args) {		
		scan();
		draw();
		drawReversed();
	}
		
	public static void scan(){
		Scanner reader = new Scanner(System.in);
		
		System.out.println("Please enter the height of the triangle!");
		try{
			height = reader.nextInt();
			
		}catch(InputMismatchException ime){
			System.err.println("Please enter a valid number!\n");
			height = 0;
			scan();
		}
		if(height > 10){
			System.err.println("Please choose a smaller number!");
			scan();
		}
		if(height <= 0){
			System.err.println("Please choose a bigger number!");
			scan();
		}
	}
		
	public static void draw(){
		
		System.out.println("The requested triangle:\n");
		for(int i=0;i<height;i++){
			System.out.println(s);
			s += s;
		}
	}
	
	public static void drawReversed(){

		System.out.println("\n\nThe reversed triangle:\n");
		s = "@";
		for(int j = 0;j<height-1;j++){			
			s+=s;
		}
		
		for(int i=0;i<height;i++){
			System.out.println(s);
			s = s.substring(s.length()/2);
		}		
	}
	
}
