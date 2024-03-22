#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main() 
{
    pid_t pid = fork(); // Create a child process

    // After fork, two copies of this code are running: parent and child.
    // The pid compare determines if code is for parent or child.
    
    // If pid == 0, then it is the child process.
    // This first part is run by the child, not the parent.
    if (pid == 0)
    {
        // Child process reporting:
        printf("Child process reporting:\n");
        printf("Child : Child's PID %d\n", getpid()); // Print child's PID
        printf("Child : Parent's PID %d\n", getppid()); // Print parent's PID
    }
    else
    {
        // Parent process reporting:
        printf("Parent process reporting: \n");
        printf("Parent : Parent's PID %d\n", getpid()); // Print parent's PID
        printf("Parent : Child's PID %d\n", pid); // Print child's PID

        // If no wait, parent terminates "first" and child is orphaned, given to PPID 1
        wait(NULL); // Wait for child process to terminate
    }
    return 0;
}

