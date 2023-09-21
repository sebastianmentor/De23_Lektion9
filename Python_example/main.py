def display_menu():
    print("\nMenu:")
    print("1. Say Hello")
    print("2. Say Goodbye")
    print("3. Exit")

    choice = int(input("Enter your choice (1/2/3): "))
    return choice

def main():
    while True:
        choice = display_menu()

        if choice == 1:
            print("Hello!")
        elif choice == 2:
            print("Goodbye!")
        elif choice == 3:
            print("Exiting...")
            break
        else:
            print("Invalid choice! Please select a valid option.")

if __name__ == "__main__":
    main()
