#include "main.h"
/**
 * read_line - reads line from input
 * @splitPath: path value
 * Return: string
 */
char *read_line(char **splitPath)
{
	char *string;
	int input;
	size_t bufsize = 1;

	string = (char *)malloc(sizeof(char) * bufsize);
	if (string == NULL)
	{
		perror("./hsh");
	}

	input = getline(&string, &bufsize, stdin);
	if (input == -1)
	{
		free(splitPath);
		free(string);
		exit(0);
	}
	return (string);
}
