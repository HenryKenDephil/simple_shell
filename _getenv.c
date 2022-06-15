#include "main.h"
/**
 * _getenv - gets environment variable
 * @name: variable name
 * Return: selected environment variable
 */
char *_getenv(const char *name)
{
	unsigned int i;

	if (environ == NULL || name[0] == '\0')
		return (NULL);

	i = 0;
	if (name)
	{
		while (environ[i] != NULL)
		{
			if (_strstr(environ[i], name) != NULL)
				return (environ[i] + _strlen(name) + 1);

			i++;
		}
	}

	return (NULL);
}
/**
 * _strstr - finds the needle in haystack
 * @haystack: string
 * @needle: substring
 * Return: char*
 */
char *_strstr(char *haystack, const char *needle)
{
	while (*haystack)
	{
		char *Begin = haystack;
		const char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return (Begin);

		haystack = Begin + 1;
	}
	return (NULL);
}
