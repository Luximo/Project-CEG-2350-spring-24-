#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{	
    // ZOMBIE:
    // Created when child exits, but parent is busy and hasn't called WAIT.
    
    // fork returns process id in parent process.
    pid_t child_pid = fork();

    // Parent process
    // if child_pid > 0, then it is the parent process.
    // This first part won't run by the child, only by the parent.
    if (child_pid > 0){
        // Increment this time to force parent to not call wait on child.
        printf("I am the parent process, PID %d\n.", getpid());
        printf("Instead of wait, I am going to sleep.\n");
        sleep(500); // Parent process sleeps for 500 seconds.
    }
    // Child process
    else {
        printf("I am the child process, PID %d\n", getpid());
        printf("I am going to exit, and see if PARENT PID %d notices me.\n", getppid());
        printf("Use `ps au` in another terminal to see the zombie!\n");
        exit(0); // Child process exits.
    }
    return 0;
}

