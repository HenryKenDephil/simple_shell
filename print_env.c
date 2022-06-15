#include "main.h"
#define UNUSEDVAR __attribute__((unused))
/**
 * print_env - prints environment
 * @UNUSEDVAR: unused args
 * Return: none
 */

int print_env(char **args UNUSEDVAR, char **splitPath UNUSEDVAR,
			  char *string UNUSEDVAR)
{
	int i = 0;

	while (environ[i])
	{
		_puts(environ[i++]);
		_putchar('\n');
	}
	return (1);
}
