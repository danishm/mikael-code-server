import java.util.Scanner;

public class weather {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Is there a storm nearby: ");
        String storm = scanner.nextLine();

        if (storm.equalsIgnoreCase("yes")) {
            System.out.println("Probaly don't go outside today");
        }

        string yea;
        int cyea = Integer.parseInt(yea);
        else if (storm.equalsIgnoreCase("no")) {
            System.out.println("What is the temp in celcius");

            if(cyea <= -5) {
               System.out.println("Bbbbbrrrrrrrrr, probably don\'t go outside and if you do be sure to really bundle up wear 2-3 down jackets");

            }
            else if(cyea <= 0) {
                System.out.println("Layer up ")
            }
        }
        
    }
}