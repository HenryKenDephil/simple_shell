#include "main.h"
/**
 * _isdigit - check if c is an integer
 * @c: integer
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);
}
/**
 * _puts - check if c is an integer
 * @string: argv[1]
 * Return: error
 */
int _puts(const char *string)
{
	return (write(1, string, _strlen(string)));
}

