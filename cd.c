#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

// function to print current directory

#define PRMTSIZ 255
#define MAXARGS 100

void takeinput()
{
    char cwd[1024];
    getcwd(cwd, sizeof(cwd));
    printf("\nDir: %s", cwd);
}