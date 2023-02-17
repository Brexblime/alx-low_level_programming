#include <stdio.h>

/**
 * main - combinations of single-digit (n) numbers followed by , and space
 * Return: 0 (Success)
*/

int main(void)
{
	int d;

	for (d = 48 ; d <=  57 ; d++)
	{
		putchar(d);
			if (d != 57)
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}
