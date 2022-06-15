#include "main.h"
/**
 * check_built_in - check built in functions
 * @args : arguments to execute
 * @splitPath: path value
 * @string: string input from read_line
 * Return: return value from the specified function
 */
int check_built_in(char **args, char **splitPath, char *string)
{
	built_in fncs[] = {
		{"exit", exit_terminal},
		{"env", print_env},
		{NULL, NULL}
	};

	int i;

	if (args != NULL)
	{
		for (i = 0; fncs[i].cmd != NULL; i++)
		{
			if (_strcmp(fncs[i].cmd, args[0]) == 0)
			{
				return ((fncs[i].f)(args, splitPath, string));
			}
		}
	}
	return (0);
}

