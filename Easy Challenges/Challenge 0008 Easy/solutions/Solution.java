
public class Solution {

	
	public static void main(String[] args){
		int count = 99;
		
		for(int i=count;i>0;i--){
			if(count == 1){
				System.out.println(count + " bottle of beer on the wall," + count + " bottle of beer.\nTake one down and pass it around, no more bottles of beer on the wall.\n");
			}	
			else if(count == 2){
				System.out.println(count + " bottles of beer on the wall," + count + " bottles of beer.\nTake one down and pass it around, " + (count-1) + " bottle of beer on the wall.\n");
			}
			else{
				System.out.println(count + " bottles of beer on the wall," + count + " bottles of beer.\nTake one down and pass it around, " + (count-1) + " bottles of beer on the wall.\n");
			}
			count--;
		}
		System.out.println("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.");
			
	}
}
