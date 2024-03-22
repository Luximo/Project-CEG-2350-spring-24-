#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() 
{
    pid_t pid = fork(); // Create a child process

    // After fork, two copies of this code are running: parent and child.
    // The pid compare determines if code is for parent or child.
    // If pid == 0, then it is the child process. Else, it is the parent process.
    if (pid == 0)
    {
        // Child process reporting:
        printf("Child process reporting:\n");
        printf("Child : Child's PID %d\n", getpid()); // Print child's PID
        printf("Child : Parent's PID %d\n", getppid()); // Print parent's PID
        sleep(500); // Child process sleeps for 500 seconds
    }
    else
    {
        // Parent process reporting:
        printf("Parent process reporting: \n");
        printf("Parent : Parent's PID %d\n", getpid()); // Print parent's PID
        printf("Parent : Child's PID %d\n", pid); // Print child's PID
	sleep(30);

        // If no wait, parent may terminate "first" and child is orphaned, given to PPID 1
        // This code does not have a wait, so the parent could finish execution and terminate
        // before the child process, which would make the child an orphan process.
    }
    return 0;
}

