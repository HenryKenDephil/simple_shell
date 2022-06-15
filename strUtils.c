#include "main.h"
/**
 * _strlen - counts string length of s
 * @s: parameter
 * Return: int
 */
int _strlen(const char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 on success
 */
int _strcmp(const char *s1, const char *s2)
{
	unsigned int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;

	return (s1[i] - s2[i]);
}
/**
 * _strcat - concatenates two strings
 * @s1: destination
 * @s2: source
 * Return: (pointer to dest)
 */
char *_strcat(char *s1, char *s2)
{
	unsigned int i, j, k;
	char *string;

	i = _strlen(s1);
	j = _strlen(s2);
	string = malloc(sizeof(char) * (i + j + 2));
	if (string == NULL)
		return (NULL);
	for (k = 0; k < (i + j + 2); k++)
	{
		if (k < i)
			string[k] = s1[k];
		else if (k == i)
			string[k] = '/';
		else
			string[k] = s2[k - i - 1];
	}
	return (string);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _atoi - converts a character string to an integer
 * @c: string
 * Return: the converted integral number as an int value
 */
int _atoi(char *c)
{
	int value = 0;
	int sign = 1;

	if (*c == '+' || *c == '-')
	{
		if (*c == '-')
			sign = -1;
		c++;
	}
	while (_isdigit(*c))
	{
		value *= 10;
		value += (int)(*c - '0');
		c++;
	}
	return (value * sign);
}
