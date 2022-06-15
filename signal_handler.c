#include "main.h"
#define UNUSEDVAR __attribute__((unused))
/**
 * handler - Handles SIGINT signal
 * @UNUSEDVAR: unused integer
 * Return: void
 */
void handler(int num UNUSEDVAR)
{
	write(STDOUT_FILENO, "\n($) ", 5);
}
