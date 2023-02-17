#include <stdio.h>

/**
 * main - print digits from 0 to 9
 * Return: 0 (Success)
*/

int main(void)
{
	char d;

	for (d = '0' ; d <= '9' ; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
