import java.util.Scanner;

public class MenuExample {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int choice;

        do {
            // Display the menu
            System.out.println("\nMenu:");
            System.out.println("1. Say Hello");
            System.out.println("2. Say Goodbye");
            System.out.println("3. Exit");

            // Get the user's choice
            System.out.print("Enter your choice (1/2/3): ");
            choice = scanner.nextInt();

            // Execute the choice
            switch (choice) {
                case 1:
                    System.out.println("Hello!");
                    break;
                case 2:
                    System.out.println("Goodbye!");
                    break;
                case 3:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid choice! Please select a valid option.");
                    break;
            }
        } while (choice != 3);

        scanner.close();
    }
}
