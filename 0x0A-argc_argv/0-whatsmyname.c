#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: argument counter and the length of string
 * @argv: argument vectot, array of character pointers listing all arguments
 * note (If you rename the program, it will print the new name,
 * without having to compile it again
 * You should not remove the path before the name of the program)
 * Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	while (argc == 0)
	{
		continue;
	}
	printf("%s\n", argv[0]);

	return (0);
}
