import java.util.Scanner;

/**
 * Created by Matej Gazda on 3/24/2016.
 */
public class Solution {
    public static void main(String[] args){
        Scanner textScan = new Scanner(System.in);
        System.out.println("Please enter a year");
        String text = textScan.nextLine();
        int year = Integer.parseInt(text);
        if(year%100 != 0) {
            System.out.println((Integer.parseInt(text.substring(0, 2)) + 1) + "th century");
        }
        else{
            System.out.println(Integer.parseInt(text.substring(0, 2)) + "th century");
        }
        if((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 100 == 0 & year % 400 == 0)){
            System.out.println("Leap year!");
        }
        else{
            System.out.println("Not a Leap year!");
        }
    }
}
