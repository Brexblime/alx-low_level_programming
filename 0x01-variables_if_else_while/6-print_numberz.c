#include <stdio.h>

/**
 * main - prints digits without using type char
 * Return: 0 (Success)
*/

int main(void)
{
	int d;

	for (d = 0 ; d <= 9 ; d++)
	{
		putchar(d + '0');
	}
	putchar('\n');
	return (0);
}
