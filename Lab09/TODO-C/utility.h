#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100 // Define a constant for the maximum number of tasks.
#define MAX_NAME_LENGTH 50 // Define a constant for the maximum length of task names.

// Function prototypes for the to-do list application:

/*
 * Function:  displayMenu
 * --------------------
 * Displays the main menu options for the to-do list application.
 *
 * No parameters.
 *
 * returns: void.
 */
void displayMenu();

/*
 * Function:  addTask
 * --------------------
 * Adds a new task to the to-do list.
 *
 * No parameters.
 *
 * returns: void.
 */
void addTask();

/*
 * Function:  markTaskAsCompleted
 * --------------------
 * Marks a specified task as completed.
 *
 * No parameters.
 *
 * returns: void.
 */
void markTaskAsCompleted();

/*
 * Function:  removeTask
 * --------------------
 * Removes a specified task from the to-do list.
 *
 * No parameters.
 *
 * returns: void.
 */
void removeTask();

/*
 * Function:  viewTodoList
 * --------------------
 * Displays all tasks in the to-do list.
 *
 * No parameters.
 *
 * returns: void.
 */
void viewTodoList();