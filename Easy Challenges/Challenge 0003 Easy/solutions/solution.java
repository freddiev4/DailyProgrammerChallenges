/**
 *
 * @author coderMato
 */
import java.util.Scanner;

public class DailyProgrammerChallenges {

    public static void main(String[] args) {
        Scanner textScan = new Scanner(System.in);
        System.out.println("Please enter a string");
        String string = textScan.nextLine();
        Scanner intScan = new Scanner(System.in);
        System.out.println("Enter the shift, integer.");
        int offset = intScan.nextInt(); // key of cipher
        System.out.println("Enter 0 to encrypt string, 1 to decrypt string");
        if(intScan.nextInt() == 0) {
            crypt(string, offset);
        }
        else{
            crypt(string, -offset);
        }
    }

    /**
     *
     * @param string - string to encrypt/decrypt
     * @param offset - a key(shift) to the cipher.
     * @return
     */
    public static String crypt(String string, int offset){
        String s = "";
        for(int i=0; i < string.length(); i++){
            char c = (char) string.charAt(i);
            if (c >= 'A' && c <= 'Z') {
                s += (char)((c - 'A' + offset) % 26 + 'A');
            }
            else if (c >= 'a' && c <= 'z') {
                s += (char)((c - 'a' + offset) % 26 + 'a');
            }
            else{
                s += c;
            }
        }
        System.out.println(s);
        return s;
    }
}
