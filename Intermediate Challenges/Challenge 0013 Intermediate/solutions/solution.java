import java.util.Scanner;
import java.util.Stack;

/*
 * Create a program that will take input and write it out 
 * reversed to a text file
 *
 * Contains different methods and crude timing comparison 
 * 
 * @author: https://github.com/Hoenn
 */
public class Challenge_13 {
  public static void main(String args[]) 
  {
    Scanner input = new Scanner(System.in);
    System.out.println("Enter text to be reversed");
    String text = input.nextLine();
    input.close();
    System.out.println("Method 1 (Using a stack) results: "+reverse(text));   
    System.out.println("Method 2 (Using 2 char arrays) results: "+arrayReverse(text));
    System.out.println("Method 3 (Using StringBuilder reverse) results: "+ new StringBuilder(text).reverse());
    System.out.println("Method 4 (Using a stack with String builder) results: "+builderReverse(text));
    
    long startTime = System.nanoTime();
    reverse(text);
    long endTime= System.nanoTime();
    long duration = (endTime-startTime);///1000000;
    System.out.println("String concat with a stack took: "+duration+" ns");
    
    startTime= System.nanoTime();
    builderReverse(text);
    endTime=System.nanoTime();
    duration= (endTime-startTime);///1000000;
    System.out.println("String builder with a stack took: "+duration+" ns");
    
    startTime= System.nanoTime();
    new StringBuilder(text).reverse();
    endTime=System.nanoTime();
    duration= (endTime-startTime);///1000000;
    System.out.println("String builder built in reverse took: "+duration+" ns");
    
  }
  public static String builderReverse(String text)
  {
    StringBuilder result= new StringBuilder();
    
    Stack<Character> charStack = new Stack<Character>();
    
    for(int i=0; i<text.length(); i++)
    {
      charStack.push(text.charAt(i));
    }
    
    while(!charStack.isEmpty())
    {
      result.append(charStack.pop());
    }
    
    
    return result.toString();
  }
  public static String reverse(String text)
  {
    String result= "";
    
    Stack<Character> charStack = new Stack<Character>();
    
    for(int i=0; i<text.length(); i++)
    {
      charStack.push(text.charAt(i));
    }
    
    while(!charStack.isEmpty())
    {
      result+=(charStack.pop());
    }
    
    
    return result;
  }
  public static String arrayReverse(String text)
  {
    char[] textArray = text.toCharArray();    
    char[] reversed = new char[textArray.length];
    
    for(int i=0; i<textArray.length; i++)
    {
      reversed[textArray.length-i-1] = textArray[i];
    }
    return new String(reversed);
  }
  
}