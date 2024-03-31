#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"

/*
 * Function:  main
 * --------------------
 * The entry point of the program.
 *
 * No parameters.
 *
 * returns: 0 upon exiting the program.
 */
int main() {
    int choice; // Variable to store the user's menu choice.

    while (1) { // Infinite loop to keep the program running until the user decides to exit.
        displayMenu(); // Call the function to display the menu options.
        printf("Enter your choice (1-5): "); // Prompt the user for their choice.
        scanf("%d", &choice); // Read the user's choice from standard input.
        getchar(); // Consume the newline character to prevent it from being read in the next loop.

        switch (choice) { // Switch statement to handle the user's choice.
            case 1:
                addTask(); // Call the function to add a new task.
                break; // Break out of the switch statement.
            case 2:
                markTaskAsCompleted(); // Call the function to mark a task as completed.
                break; // Break out of the switch statement.
            case 3:
                removeTask(); // Call the function to remove a task.
                break; // Break out of the switch statement.
            case 4:
                viewTodoList(); // Call the function to view the to-do list.
                break; // Break out of the switch statement.
            case 5:
                printf("Exiting program. Goodbye!\n"); // Inform the user that the program is exiting.
                return 0; // Return 0 to the operating system and exit the program.
            default:
                printf("Invalid choice. Please enter a number from 1 to 5.\n"); // Inform the user of an invalid choice.
        }
    }

    return 0; // Return statement to satisfy the compiler, though it will never be reached.
}