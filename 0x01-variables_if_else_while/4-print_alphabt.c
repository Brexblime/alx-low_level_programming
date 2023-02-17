#include <stdio.h>

/**
 * main - print alphabets in lowercase but avoid "q" and "e"
 * Return: 0 (Success)
*/

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
