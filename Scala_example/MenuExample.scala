object MenuExample extends App {

  val scanner = new java.util.Scanner(System.in)
  var choice = 0

  def displayMenuAndGetChoice(): Int = {
    // Display the menu
    println("\nMenu:")
    println("1. Say Hello")
    println("2. Say Goodbye")
    println("3. Exit")

    // Get the user's choice
    print("Enter your choice (1/2/3): ")
    scanner.nextInt()
  }

  choice = displayMenuAndGetChoice()

  while (choice != 3) {
    // Execute the choice
    choice match {
      case 1 => println("Hello!")
      case 2 => println("Goodbye!")
      case 3 => println("Exiting...")
      case _ => println("Invalid choice! Please select a valid option.")
    }

    if (choice != 3) {
      choice = displayMenuAndGetChoice()
    }
  }

  scanner.close()
}
