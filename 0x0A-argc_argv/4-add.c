#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * note (Print the result, followed by a new line
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits, print Error,
 * followed by a new line, and return 1
 * You can assume that numbers and the addition of all the numbers
 * can be stored in an int)
 *Return: 0 (Success) or 1 if one of the number cointains symbol
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{

		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
			printf("Error\n");
			return (1);
			}
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
