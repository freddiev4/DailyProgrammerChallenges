import java.util.ArrayList;
import java.util.Scanner;

/*
 * @author https://github.com/Hoenn
 */
public class Challenge_4
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		System.out.println("Input a mathematical expression of integers using the 4 basic operators +,-,*,/");
		String expression = input.nextLine().trim();
		
		//remove all spaces
		expression = expression.replaceAll("\\s", "");
		
		System.out.println(calculate(expression));
		
		input.close();
	}
	public static double calculate(String expression)
	{		
		//Using doubles here to avoid integer divison later
		ArrayList<Double> numList = new ArrayList<Double>();
		ArrayList<Character> operatorList= new ArrayList<Character>();
		
		int pos = 0;
		String digits="";
		while (pos<expression.length())
		{
			//For getting multiple character numbers like 66
			if(Character.isDigit(expression.charAt(pos)))
			{
				digits+=expression.charAt(pos);
			}
			else
			{
				numList.add(Double.parseDouble(digits));
				digits="";
				operatorList.add(expression.charAt(pos));
			}
			pos++;
		}
		//The last part of the String is sure to be a number
		//having an operator there will throw an error
		numList.add(Double.parseDouble(digits));

		while(operatorList.size()>0)
		{
			//Running total
			double a = numList.get(0);
			//Next number in line
			double b = numList.remove(1);
			//Next operator in line
			char operator = operatorList.remove(0);
			switch (operator)
			{
				case '+' : numList.set(0, a+b);
							break;
				case '-' : numList.set(0, a-b);
							break;
				case '*' : numList.set(0, a*b);
							break;
				case '/' : numList.set(0,  a/b);
			}
		}
		return numList.get(0);
	}
}