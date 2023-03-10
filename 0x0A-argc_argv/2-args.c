#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: argument counter
 * @argv: argument vector
 * note (All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line)
 * Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i;

	(void) argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
