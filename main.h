#ifndef HEADER_FILE
#define HEADER_FILE

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

/**
 * struct built_in - struct built_in
 * @cmd: The command
 * @f: built-in function
 */
typedef struct built_in
{
	char *cmd;
	int (*f)(char **args, char **splitPath, char *string);
} built_in;

extern char **environ;
char *_getenv(const char *name);
char *_strstr(char *haystack, const char *needle);
char *_strcat(char *s1, char *s2);
int _strcmp(const char *s1, const char *s2);
char *_strstr(char *haystack, const char *needle);
int print_env(char **args, char **splitPath, char *string);
int _strlen(const char *s);
char *check_path(char *firstArg, char **splitPath);
int execute_arg(char **args, char **splitPath, char *string);
char *read_line(char **splitPath);
char **split_str(char *input, char *delimiter);
int _putchar(char c);
void handler(int num);
int exit_terminal(char **args, char **splitPath, char *string);
int _atoi(char *c);
int _isdigit(int c);
int check_built_in(char **args, char **splitPath, char *string);
int _puts(const char *string);

#endif
