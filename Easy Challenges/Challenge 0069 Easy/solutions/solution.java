import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/*
 * @coderMato
 */
public class Solution {
  	private static int length = 0;
  	public static void main(String[] args){
    		Scanner textScan = new Scanner(System.in);
    		String title, item = "";
    		System.out.println("Please enter a title");
    		title = textScan.nextLine();
    		length = title.length() + 2; // used for saving length of the longest string.
    		List<String> necessities = new ArrayList<String>();
    		System.out.println("Please insert the strings, EOF to exit.");
    		// takes input and saves the longest string.
    		while(textScan.hasNext()){
      			item = textScan.nextLine();
      			if(item.length() + 2 > length){  // length is the lenght of the string + 2(whitespaces).
      				    length = item.length() + 2;
      			}
      			necessities.add(item);
  		}

  		//now printing header
  		System.out.println("");
  		printLine();
  		System.out.print("| ");
  		printChar((length - title.length() - 1) / 2 , ' ');
  		System.out.print(title);
  		printChar((length - title.length()) / 2, ' ');
  		System.out.println("|");
  		printLine();
  		//now printing body.
  		for(String str: necessities){
    			System.out.print("| " + str);
    			printChar(length-str.length()-1,' '); //one whitespace is already printed.
    			System.out.println("|");
  		}
  		printLine();
  	}
  	//prints the line with *---------*
  	public static void printLine(){
    		System.out.print('+');
    		printChar(length, '-');
    		System.out.print('+');
    		System.out.println("");
  	}
  	//recursion to print n times char c.
  	public static void printChar(int n, char c){
    		if(n > 0){
      			System.out.print(c);
      			printChar(n-1, c);
    		}
  	}
}
