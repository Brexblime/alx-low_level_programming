#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
*/

void print_number(int n)
{
	unsigned int mul, div, counter;

	if (n < 0)
	{
	_putchar(45);
	mul = n * -1;
	}
	else
	{
		mul = n;
	}
	div = mul;
	counter = 1;
	while (div > 9)
	{
		div /= 10;
		counter *= 10;
	}
	for (; counter >= 1; counter /= 10)
	{
		_putchar(((mul / counter) % 10) + 48);
	}
}
