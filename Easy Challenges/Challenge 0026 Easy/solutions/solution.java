import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		String str1 = "";
		String str2 = "";
		
		Scanner reader = new Scanner(System.in);
		
		System.out.println("Please enter your string!");
		str1 = reader.nextLine();				
				
		for(int i=0;i<str1.length()-1;i++){
			if(str1.toLowerCase().charAt(i) == str1.toLowerCase().charAt(i+1)){					
				str2 += str1.charAt(i+1);
				str1 = str1.substring(0, i+1) + str1.substring(i+2, str1.length());
			}
		}
		System.out.println("\n" + str1 + "  " + str2);		
	}
	
}
}
