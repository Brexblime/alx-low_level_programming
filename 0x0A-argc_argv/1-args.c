#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 *@argc: argument counter or number of command line arguments
 *@argv: argument vector or array of character pointers listing all arguments
 * note (The program should print a number, followed by a new line)
 * Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
		return (0);
}

