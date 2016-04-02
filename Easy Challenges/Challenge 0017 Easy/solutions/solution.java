import java.util.Scanner;

/**
 * Created by coderMato on 3/23/2016.
 */
public class PrintTriangle {
    public static void main(String[] args){
        Scanner intScan = new Scanner(System.in);
        System.out.println("Enter the height of the triangle: ");
        int n = intScan.nextInt(); // the height of the triangle
        System.out.println("Enter 0 for Left-Justified triangle and 1 for Right-Justified traingle");
        int z = intScan.nextInt(); // 0/1 to decide of left/right

        if(z == 0) { // left-justified triangle
            for(int x = 0; x != n; x++){
                for (int y = 0; y != (int) Math.pow(2, x); y++) {
                    System.out.print("@");
                }
                System.out.println("");
            }
        }
        else{
            String spaces = new String(new char[(int) Math.pow(2,n-1)]).replace('\0', ' '); // create string of n spaces.
            for(int x = 0; x != n; x++){
                System.out.print(spaces.substring(0, (int) (Math.pow(2, n-1) - Math.pow(2, x))));
                for(int y = 0; y != (int) Math.pow(2,x);y++){
                    System.out.print("@");
                }
                System.out.println("");
            }
        }
    }
}
