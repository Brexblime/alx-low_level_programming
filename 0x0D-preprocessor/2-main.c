#include <stdio.h>

/**
 * main - print the name of the file it was compiled from, followed by new line
 * Return: 0 (Success)
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
