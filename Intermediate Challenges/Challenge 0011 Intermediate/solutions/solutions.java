import java.util.ArrayList;

/*
 * @author https://github.com/Hoenn
 */
public class Challenge_11
{
	public static String[] noFlip = {"2", "3", "4","5", "7"};
	
	public static void main(String args[])
	{
		ArrayList<Integer> upsideDown;
		
		upsideDown=getUpsideDownNumbers(10000);
		for(Integer i: upsideDown)
		{
			System.out.println(i);
		}
	}
	private static ArrayList<Integer> getUpsideDownNumbers(int maximum)
	{
		ArrayList<Integer> upsideDown= new ArrayList<Integer>();
		
		for(int i=0; i<maximum; i++)
		{
			if(isUpsideDownNumber(i))
				upsideDown.add(i);
		}
		
		return upsideDown;
	}
	private static boolean isUpsideDownNumber(int i)
	{
		
		String num = String.valueOf(i);
		
		//If a String contains any characters that aren't able to appear in 
		//upside down numbers then return false
		//2, 3, 4. 5, 7,
		for(int a = 0; a<noFlip.length; a++)
		{
			if(num.contains(noFlip[a]))
				return false;
		}
		
		
		//Replace 6->9 and 9->6, then reverse the string to 
		//see if it is the same "upside down"
		StringBuilder upsideDown = new StringBuilder(num);

		for(int c =0; c<upsideDown.length(); c++)
		{
			if(upsideDown.charAt(c)=='9')
			{
				upsideDown.setCharAt(c, '6');
			}
			else if(upsideDown.charAt(c)=='6')
			{
				upsideDown.setCharAt(c, '9');
			}
		}		
		
		upsideDown.reverse();
		
		
		return num.equals(upsideDown.toString());
	}
}