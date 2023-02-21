#include "main.h"

/**
 * main - print alphabets in lowercase using only _putchar with main.h header
*/


void print_alphabet(void)

{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
