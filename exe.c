#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

// function for executing system command

#define PRMTSIZ 255
#define MAXARGS 100

void execArgs(char** parsed)
{
    // fork the child process
    pid_t pid = fork();
    if (pid == -1)
    {
        printf("\nchild process failed");
        return;
    }
    else if(pid == 0)
    {
        if (execvp(parsed[0], parsed) <0)
        {
            printf("\ncommand could not be executed..");
        }
        exit(0);
    }
    else
    {
        // wait for the child to terminate 
        wait(NULL);
        return;
    }
}