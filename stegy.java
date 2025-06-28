import java.util.Scanner;

public class stegy{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.printf("Do you have a beard?: ");
        String beard = scanner.nextLine();

        if(beard.equals("yes")){
            System.out.println("aaahhhh!! I'm scared, I hate beards");
            System.out.printf("Hamilys: boing, boing");
        }
        else if(beard.equalsIgnoreCase("no")){
            System.out.println("Stegy: Hello Abu!👋");
        }
        else{
            System.out.println("Error: yes or no?");
            System.out.println("Stegy: Whimper");
        }

        scanner.close();
    }
}
// hehe!! better at java than you 😁 