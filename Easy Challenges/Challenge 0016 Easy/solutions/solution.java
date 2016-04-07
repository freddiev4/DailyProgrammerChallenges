import java.util.Scanner;

/**
 * Created by coderMato on 3/24/2016.
 */
public class Challenge16 {
    public static void main(String[] args){
        Scanner textScan = new Scanner(System.in);
        String firstString, secondString, result ="";
        System.out.println("Please enter the first string");
        firstString = textScan.nextLine();
        System.out.println("Please enter the second string");
        secondString = textScan.nextLine();
        for(int i = 0; i < firstString.length(); i++){
            for(int j = 0; j < secondString.length(); j++){
                if(firstString.charAt(i) == secondString.charAt(j)){
                    break;
                }
                if(firstString.charAt(i) != secondString.charAt(j) && j == secondString.length() - 1){
                    result = result + firstString.charAt(i); // if the char is not in the second string then concatenate it with result string
                }
            }
        }
        System.out.println(result); // This is a version where 'a'!='A' in term of comparison characters between two strings.
    }
}
