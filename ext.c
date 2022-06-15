#include "main.h"
/**
 * exit_terminal - exit the program
 * @args: arguments to execute
 * @splitPath: path value
 * @string: string input from read_line
 * Return: 0
 */
int exit_terminal(char **args, char **splitPath, char *string)
{
	int i;

	if (args[1] == NULL || _strcmp(args[1], "0") == 0)
	{
		free(args);
		free(splitPath);
		free(string);
		exit(EXIT_SUCCESS);
	}
	i = _atoi(args[1]);
	if (args[1] != NULL && i != 0)
	{
		free(args);
		free(splitPath);
		free(string);
		exit(i);
	}
	else
	{
		_puts("./hsh: 1: exit: Illegal number: ");
		_puts(args[1]);
		_puts("\n");
		exit(2);
	}
	return (1);
}
