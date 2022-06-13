#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

// function to take input

#define PRMTSIZ 255
#define MAXARGS 100

int takeInput( char* str)
{
    char* buf;
    buf = readline("\n>>>");
    if (strlen(buf) != 0)
    {
        add_previous(buf);
        strcpy(str, buf);
        strcat(str, buf);
        return 0;
    }
    else 
    {
        return 1;
    }
}