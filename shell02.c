#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

// handle command lines with arguments

#define PRMTSIZ 255
#define MAXARGS 100

//use protoype void type_prompt() to handle display

void type_prompt()
{
    static int first_time = 1;
    if (first_time)                  //clear screen for the first time
    {
        const char* CLEAR_SCREEN_ANSI = "\e[1; 1H\e[2j";
        write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
        first_time = 0;
    }
    printf("#");    // this command will display prompt
    
}