#include <stdio.h>

void displayMenu() {
    printf("\nMenu:\n");
    printf("1. Say Hello\n");
    printf("2. Say Goodbye\n");
    printf("3. Exit\n");
}

int getChoice() {
    int choice;
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);
    return choice;
}

int main() {
    int choice;

    do {
        displayMenu();
        choice = getChoice();

        switch(choice) {
            case 1:
                printf("Hello!\n");
                break;
            case 2:
                printf("Goodbye!\n");
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}
