#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * note (The program should print the result of the multiplication,
 *  followed by a new line. You can assume that the two numbers
 *  and result of the multiplication can be stored in an integer
 *  If the program does not receive two arguments,
 *  your program should print Error,followed by a new line, and return 1)
 * Return: 0 (Success) or 1 if program does not recieve two arguments
*/

int main(int argc, char *argv[])
{

	if (argc == 3)
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);
		int result = x * y;

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
