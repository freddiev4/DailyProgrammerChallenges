import java.util.Scanner;

/**
 *
 * @author metti
 */

/************
 * Pythagoras' Theorem : c^2 = a^2 + b^2
 ************/

public class Solution {

    
    public static void main(String[] args) {
       double a;
       double b;
       double c;
       int opt =0;
       
       Scanner reader = new Scanner(System.in); 
       
       System.out.println("Please choose an option: ");
       while(opt ==0){        
            System.out.println("     1.) Enter 1 for c unknown(the longest side of the triangle), \n     2.) Enter 2 for one of the shorter ones unknown ");
            opt = reader.nextInt();

            if(opt == 1){
                System.out.println("Please enter the size of the side a (in cm) :");
                a = reader.nextFloat();
                System.out.println("Please enter the size of the side b (in cm) :");
                b = reader.nextFloat();
                c = Math.sqrt((a*a) + (b*b));
                c = (double) Math.round(c * 100) / 100;

                System.out.println("The side c has size" +c+ "cms");
            }
            if(opt == 2){
                System.out.println("Please enter the size of the longer side (in cm) :");
                c = reader.nextFloat();
                System.out.println("Please enter the size of the shorter side  (in cm) :");
                b = reader.nextFloat();
                a = Math.sqrt((c*c) - (b*b));
                a = (double) Math.round(a * 100) / 100;

                System.out.println("The third side has size" +a+ "cms" );
            }
            else if(opt != 1 && opt != 2){
                System.out.println("Please select option 1 or 2!");
                opt = 0;
            }
       }
    }
    
}
