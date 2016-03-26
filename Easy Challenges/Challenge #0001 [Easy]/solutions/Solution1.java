import java.util.Scanner;

/**
 *
 * @author metti
 */
public class Solution1 {
    
    public static void main(String[] args) {
        String name = null;
        String age = null;
        String uname = null;
        
        Scanner reader = new Scanner(System.in);   
        
        System.out.println("Hi github user!");
        while(name == null){
            System.out.println("What is your name?");  
            name = reader.nextLine(); 
            if(!name.contains(" ") ){
                name = null;
                System.out.println( "Enter your full name!");
            }
            else if(name.matches(".*\\d.*")){
                name = null;
                System.out.println( "Enter a valid name!");
            }
        }
        
        while(age == null){
            System.out.println("How old are you?");            
            age = reader.next();  
            if(!age.matches("[0-9]+")){
                age = null;
                System.out.println("Enter a valid age!");
            } 
            else if(age.length() >= 3 || age.contains("-") || age.equals("0")){
                age = null;
                System.out.println("Your age must be between 1 and 99 !");
            }
        }    
        
        while(uname == null){
                System.out.println("What's your username?");
                uname = reader.next();
            if(uname.length() < 6){
                uname = null;
                System.out.println("Enter a valid username!A username must contain at least 6 chracters");
            }
        }
        
        System.out.println("your name is " + name + ", you are " + age + " years old, and your username is " + uname );
    }
}
