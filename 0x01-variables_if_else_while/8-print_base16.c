#include <stdio.h>

/**
 * main - print all the number of base 16 in lowercase
 * Return: 0 (Success)
*/

int main(void)
{
	char d;
	char c;

	for (d = '0' ; d <= '9' ; d++)
	{
		putchar(d);
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
