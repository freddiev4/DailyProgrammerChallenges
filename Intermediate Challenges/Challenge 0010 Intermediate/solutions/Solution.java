import java.util.ArrayList;

/*
 * @author https://github.com/Hoenn
 *
 *Need a distraction today? Not only does 12+1=11+2, but the letters “twelve plus one”
 * rearrange to give you “eleven plus two”
 * Your task is to write a program that finds equations similar to Tyson’s that form anagrams 
 * both in their symbols and in their letters.
 */
public class Challenge_10 {
	
	private static String[] specialNames = 
		{
			"",
			"thousand",
			"million",
			"billion",
			"trillion",
			"quadrillion",
			"quintillion"
		};
	private static String[] numberNames =
		{
			"",
			"one",
			"two",
			"three",
			"four", 
			"five", 
			"six",
			"seven",
			"eight",
			"nine",
			"ten",
			"eleven",
			"twelve",
			"thirteen",
			"fourteen",
			"fifteen",
			"sixteen",
			"seventeen",
			"eighteen",
			"nineteen",
		};
	private static String[] tensNames =
		{
			"",
			"ten",
			"twenty",
			"thirty",
			"fourty",
			"fifty",
			"sixty",
			"seventy",
			"eighty",
			"ninety,"
		};
	public static void main(String args[])
	{
		//System.out.println(isAnagram("zero times eleven", "ten times zero"));
		//System.out.println(isAnagram(spokenEnglish(11)+" plus "+spokenEnglish(2), (spokenEnglish(12)+" plus "+spokenEnglish(1))));
		ArrayList<String> plusList = generateTysonEquationPlus(250,"*");
		for(String s: plusList)
		{
			System.out.println(s);
		}
	}
	public static ArrayList<String> generateTysonEquationPlus(int maximum, String operator)
	{
		ArrayList<String> writtenEquations = new ArrayList<String>();
		
		switch(operator)
		{
		case "+": for(int leftFirst=0; leftFirst<maximum; leftFirst++)
					for(int leftSecond=0; leftSecond<maximum; leftSecond++)
						for(int rightFirst=0; rightFirst<maximum; rightFirst++)
							for(int rightSecond=0; rightSecond<maximum; rightSecond++)
							{
								if(leftFirst!=rightFirst && leftFirst != rightSecond && leftSecond!=rightFirst && leftSecond!=rightSecond)
									if(leftFirst+leftSecond==rightFirst+rightSecond)
									{
										String leftSide = spokenEnglish(leftFirst).trim()+" plus "+spokenEnglish(leftSecond).trim();
										String rightSide = spokenEnglish(rightFirst).trim()+" plus "+spokenEnglish(rightSecond).trim();
										if(!leftSide.equals(rightSide)&& isAnagram(leftSide,rightSide))
										{
											writtenEquations.add(leftSide+" = "+rightSide);
										}
									}
							}
					break;
		case "-":  for(int leftFirst=0; leftFirst<maximum; leftFirst++)
					for(int leftSecond=0; leftSecond<maximum; leftSecond++)
						for(int rightFirst=0; rightFirst<maximum; rightFirst++)
							for(int rightSecond=0; rightSecond<maximum; rightSecond++)
							{
								if(leftFirst!=rightFirst && leftFirst != rightSecond && leftSecond!=rightFirst && leftSecond!=rightSecond)
									if(leftFirst-leftSecond==rightFirst-rightSecond)
									{
										String leftSide = spokenEnglish(leftFirst).trim()+" minus "+spokenEnglish(leftSecond).trim();
										String rightSide = spokenEnglish(rightFirst).trim()+" minus "+spokenEnglish(rightSecond).trim();
										if(!leftSide.equals(rightSide)&& isAnagram(leftSide,rightSide))
										{
											writtenEquations.add(leftSide+" = "+rightSide);
										}
									}
							}
					break;
		case "*": for(int leftFirst=0; leftFirst<maximum; leftFirst++)
					for(int leftSecond=0; leftSecond<maximum; leftSecond++)
						for(int rightFirst=0; rightFirst<maximum; rightFirst++)
							for(int rightSecond=0; rightSecond<maximum; rightSecond++)
							{
								if(leftFirst!=rightFirst && leftFirst != rightSecond && leftSecond!=rightFirst && leftSecond!=rightSecond)
									if(leftFirst*leftSecond==rightFirst*rightSecond)
									{
										String leftSide = spokenEnglish(leftFirst).trim()+" times "+spokenEnglish(leftSecond).trim();
										String rightSide = spokenEnglish(rightFirst).trim()+" times "+spokenEnglish(rightSecond).trim();
										if(!leftSide.equals(rightSide)&& isAnagram(leftSide,rightSide))
										{
											writtenEquations.add(leftSide+" = "+rightSide);
										}
									}
							}
					break;
		case "/":  for(int leftFirst=0; leftFirst<maximum; leftFirst++)
					for(int leftSecond=0; leftSecond<maximum; leftSecond++)
						for(int rightFirst=0; rightFirst<maximum; rightFirst++)
							for(int rightSecond=0; rightSecond<maximum; rightSecond++)
							{
								if(leftFirst!=rightFirst && leftFirst != rightSecond && leftSecond!=rightFirst && leftSecond!=rightSecond)
									if(leftFirst/leftSecond==rightFirst/rightSecond)
									{
										String leftSide = spokenEnglish(leftFirst).trim()+" divided by "+spokenEnglish(leftSecond).trim();
										String rightSide = spokenEnglish(rightFirst).trim()+" divided by "+spokenEnglish(rightSecond).trim();
										if(!leftSide.equals(rightSide)&& isAnagram(leftSide,rightSide))
										{
											writtenEquations.add(leftSide+" = "+rightSide);
										}
									}
							}
					break;
		default:	throw new IllegalArgumentException("Invalid operator");
		}	
		return writtenEquations;
	}
	private static boolean isAnagram(String a, String b)
	{
		boolean isAnAnagram=true;
		int pos = 0;
		//If the words are not the same length they cannot be an anagram
		if(a.length()!= b.length())
			return false;
		
		//if at any point one letter in one word cannot be found in the other word
		//this will fail
		//and because they MUST be the same size, having repeated letters doesn't 
		//affect the outcome.
		while(pos<a.length() && isAnAnagram)
		{
			if(b.indexOf(a.charAt(pos))<0)
			{
				isAnAnagram=false;
			}
			pos++;
		}
		pos=0;
		while(pos<b.length() && isAnAnagram)
		{
			if(a.indexOf(b.charAt(pos))<0)
			{
				isAnAnagram=false;
			}
			pos++;
		}
		
		return isAnAnagram;
	}
	private static String spokenEnglish(int number)
	{
		String result = "";
		if(number==0)
			return "zero";
		//magnitude refers to the special name
		//million, billion, etc.
		int magnitude=0;
		do
		{
			//Starting from the right side of the number
			//Take each three digit chunk and put send to
			//lessThanOneThousand helper method
			int n = number%1000;
			if(n!=0)
			{
				String temp = lessThanOneThousand(n);
				result= temp+" "+specialNames[magnitude]+" "+result;
			}
			magnitude++;
			//remove the first three digits and continue with 
			//the remaining digits until nothing remains and number==0
			number/=1000;
			
			
			
		}while(number>0);
		
		
		return result;
	}
	
	private static String lessThanOneThousand(int number)
	{
		String temp="";
		if(number%100 <20)
		{
			//If the tens/ones place is under twenty
			//use their special name whose index
			//is equal to their value;
			temp= numberNames[number%100];
			number /= 100;
		}
		else
		{
			//Else get the ones place
			temp= numberNames[number%10];
			//Remove the ones places
			number/= 10;
			//get the tens place and add the ones place to it
			temp= tensNames[number%10]+temp;
			number/=10;
			//Remove the tens place
		}
		if(number==0)
			return temp;
		//All that should be left is the digit in 
		//the hundreds position
		return numberNames[number]+" hundred "+temp;
	}
}
