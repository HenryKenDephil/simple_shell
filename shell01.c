#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define PRMTSIZ 255
#define MAXARGS 100

int main (void)
{
    char input[PRMTSIZ + 1]= { 0X0 };
    char *ptr = input;
    char *args[MAXARGS + 1] = { NULL };

    // prompting the command line using fgets
    fgets(input, PRMTSIZ, stdin);

    // converting input line to list of arguments

    for (int i = 0; i < sizeof(args) && *ptr; ptr++)
    {
        if (*ptr == ' ') continue;
        if ( *ptr == '\n') break;
        for (args[i++] = ptr; *ptr && *ptr != '\n'; ptr++)
        *ptr = '\0';
    }
    execvp(args[0], args);
    
}