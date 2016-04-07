package dailyprogrammerchallenges;

import static java.lang.Math.sqrt;
import java.util.Scanner;

/**
 *
 * @author coderMato
 */
public class PrimeNumbers {
    public static void main(String[] args){
        int prime,i,j;
        System.out.println("2");
        for(i=3; i <= 2000; i++){
            for(j=2; j <= (int) sqrt(i) + 1; j++){
                if(i % j != 0 && j == (int) sqrt(i) + 1){
                    System.out.println(i);
                }
                if (i%j == 0){
                    break;
                }
            }
        }
    }
}
