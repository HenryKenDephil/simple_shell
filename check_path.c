#include "main.h"
/**
 * check_path - Check if argument is executable
 * @firstArg: argument to execute
 * @splitPath: path value
 * Return: Executable argument
 */
char *check_path(char *firstArg, char **splitPath)
{
	char *newArg;
	int i = 0;
	struct stat st;

	if (firstArg[0] == '.' || firstArg[0] == '/')
	{
		if (stat(firstArg, &st) == 0)
			return (firstArg);
	}
	else
	{
		while (splitPath[i])
		{
			newArg = _strcat(splitPath[i], firstArg);
			if (stat(newArg, &st) == 0)
				return (newArg);
			i++;
		}
		free(newArg);
	}
	return (NULL);
}
