#include "utility.h"

// Define a struct to represent a task.
typedef struct {
    char name[MAX_NAME_LENGTH]; // Store the name of the task.
    int completed; // Store the completion status of the task: 0 for incomplete, 1 for complete.
} Task;

Task tasks[MAX_TASKS]; // Array to store tasks.
int numTasks = 0; // Counter for the number of tasks currently in the list.

/*
 * Function:  displayMenu
 * --------------------
 * Displays the main menu options for the to-do list application.
 *
 * No parameters.
 *
 * returns: void.
 */
// Display the main menu to the user.
void displayMenu() {
    printf("\n===== To-Do List Menu =====\n"); // Print the header for the menu.
    printf("1. Add Task\n"); // Option to add a new task.
    printf("2. Mark Task as Completed\n"); // Option to mark a task as completed.
    printf("3. Remove Task\n"); // Option to remove an existing task.
    printf("4. View To-Do List\n"); // Option to view all current tasks.
    printf("5. Exit\n"); // Option to exit the program.
}

/*
 * Function:  addTask
 * --------------------
 * Prompts the user for a task name and adds it to the to-do list if there is space.
 *
 * No parameters.
 *
 * returns: void.
 *          Prints a message if the to-do list is full.
 */
// Add a new task to the list.
void addTask() {
    if (numTasks >= MAX_TASKS) { // Check if the list is already full.
        printf("Cannot add more tasks. To-do list is full.\n"); // Inform the user the list is full.
        return; // Exit the function.
    }

    printf("Enter task name: "); // Prompt the user to enter a task name.
    fgets(tasks[numTasks].name, MAX_NAME_LENGTH, stdin); // Read the task name from input.
    tasks[numTasks].name[strcspn(tasks[numTasks].name, "\n")] = '\0'; // Remove the newline character.
    tasks[numTasks].completed = 0; // Set the task as incomplete by default.
    numTasks++; // Increment the task counter.
    printf("Task added to the to-do list.\n"); // Confirm the task has been added.
}

/*
 * Function:  markTaskAsCompleted
 * --------------------
 * Prompts the user for a task name and marks the task as completed if found.
 *
 * No parameters.
 *
 * returns: void.
 *          Prints a message if the task is not found.
 */
// Mark an existing task as completed.
void markTaskAsCompleted() {
    char taskName[MAX_NAME_LENGTH]; // Buffer to store the name of the task to be marked as completed.
    printf("Enter task name to mark as completed: "); // Ask the user for the task name.
    fgets(taskName, MAX_NAME_LENGTH, stdin); // Read the task name from input.
    taskName[strcspn(taskName, "\n")] = '\0'; // Remove the newline character.

    for (int i = 0; i < numTasks; i++) { // Loop through the list of tasks.
        if (strcmp(tasks[i].name, taskName) == 0) { // Check if the current task matches the given name.
            tasks[i].completed = 1; // Mark the task as completed.
            printf("Task marked as completed.\n"); // Inform the user of the completion.
            return; // Exit the function.
        }
    }

    printf("Task not found in the to-do list.\n"); // Inform the user if the task was not found.
}

/*
 * Function:  removeTask
 * --------------------
 * Prompts the user for a task name and removes the task from the to-do list if found.
 *
 * No parameters.
 *
 * returns: void.
 *          Prints a message if the task is not found.
 */
// Remove an existing task from the list.
void removeTask() {
    char taskName[MAX_NAME_LENGTH]; // Buffer to store the name of the task to be removed.
    printf("Enter task name to remove: "); // Ask the user for the task name.
    fgets(taskName, MAX_NAME_LENGTH, stdin); // Read the task name from input.
    taskName[strcspn(taskName, "\n")] = '\0'; // Remove the newline character.

    for (int i = 0; i < numTasks; i++) { // Loop through the list of tasks.
        if (strcmp(tasks[i].name, taskName) == 0) { // Check if the current task matches the given name.
            // Move tasks after the removed task one position to the left.
            for (int j = i; j < numTasks - 1; j++) {
                strcpy(tasks[j].name, tasks[j + 1].name); // Copy the name from the next task.
                tasks[j].completed = tasks[j + 1].completed; // Copy the completion status from the next task.
            }
            numTasks--; // Decrement the task counter.
            printf("Task removed from the to-do list.\n"); // Inform the user of the removal.
            return; // Exit the function.
        }
    }

    printf("Task not found in the to-do list.\n"); // Inform the user if the task was not found.
}

/*
 * Function:  viewTodoList
 * --------------------
 * Displays all tasks in the to-do list, indicating whether each task is completed or not.
 *
 * No parameters.
 *
 * returns: void.
 */
// Display all tasks in the list.
void viewTodoList() {
    printf("\n===== To-Do List =====\n"); // Print the header for the to-do list.
    for (int i = 0; i < numTasks; i++) { // Loop through the list of tasks.
        // Print the task number, name, and completion status.
        printf("%d. %s - %s\n", i + 1, tasks[i].name, tasks[i].completed ? "Completed" : "Not Completed");
    }
}