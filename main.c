#include "main.h"
#define UNUSEDVAR __attribute__((unused))
/**
 * main - Simple_shell for holberton
 *
 * @UNUSEDVAR: unused argc
 * @UNUSEDVAR: unused argv
 * Return: 0 (Success)
 */
int main(int ac UNUSEDVAR, char **av UNUSEDVAR)
{

	char *string;
	char **tokens;
	char *path, **splitPath;
	int status = 1;

	path = _getenv("PATH");
	splitPath = split_str(path, ":\n");

	while (status)
	{
		signal(SIGINT, handler);
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "($) ", 4);

		string = read_line(splitPath);
		tokens = split_str(string, " \t\n\r");
		status = execute_arg(tokens, splitPath, string);

		free(string);
		free(tokens);
	}
	free(splitPath);
	return (0);
}
