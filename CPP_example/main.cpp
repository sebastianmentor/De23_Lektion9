#include <iostream>

void displayMenu() {
    std::cout << "\nMenu:" << std::endl;
    std::cout << "1. Say Hello" << std::endl;
    std::cout << "2. Say Goodbye" << std::endl;
    std::cout << "3. Exit" << std::endl;
}

int getChoice() {
    int choice;
    std::cout << "Enter your choice (1/2/3): ";
    std::cin >> choice;
    return choice;
}

int main() {
    int choice;

    do {
        displayMenu();
        choice = getChoice();

        switch(choice) {
            case 1:
                std::cout << "Hello!" << std::endl;
                break;
            case 2:
                std::cout << "Goodbye!" << std::endl;
                break;
            case 3:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice! Please select a valid option." << std::endl;
                break;
        }
    } while (choice != 3);

    return 0;
}
