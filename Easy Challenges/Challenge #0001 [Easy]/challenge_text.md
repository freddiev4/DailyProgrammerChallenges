import java.util.Scanner;

/**
 *
 * @author metti
 */
public class EasyChallange0001 {
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        String name;
        int age;
        String uname;
        
        Scanner reader = new Scanner(System.in);
        
        System.out.println("Hi github user!What is your name?");
        name = reader.nextLine();
        System.out.println("How old are you?");
        age = reader.nextInt();
        System.out.println("What's your username?");
        uname = reader.next();
        System.out.println("your name is " + name + ", you are " + age + " years old, and your username is " + uname );
    }
    
}
