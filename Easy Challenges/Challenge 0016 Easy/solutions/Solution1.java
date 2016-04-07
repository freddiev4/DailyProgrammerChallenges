import java.util.Scanner;

public class Solution1 {

	public static void main(String[] args) {
		String str1 = null;
		String str2 = null;
		
		Scanner reader = new Scanner(System.in);
		
		System.out.println("Please enter the first string!");
		str1 = reader.nextLine();
		System.out.println("Please enter the characters to be removed!");
		str2 = reader.nextLine();
				
			for(int i=0;i<str2.length();i++){
				for(int j=0;j<str1.length();j++){
					if(str2.toLowerCase().charAt(i) == str1.toLowerCase().charAt(j)){			
						str1 = str1.replaceFirst(String.valueOf(str1.charAt(j)), "");
					}
				}
			}
			
		System.out.println(str1);
	}
}
