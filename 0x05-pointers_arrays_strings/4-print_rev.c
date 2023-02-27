#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the string to print
*/

void print_rev(char *s)
{
	if (s && *s)
	{
	print_rev(s + 1);
	_putchar(*s);
	}
}
