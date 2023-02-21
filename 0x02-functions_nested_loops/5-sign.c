#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number we are printing the sign for
 * Return: 1 (if n > 0) , 0 (if n = 0)  -1 (if n < 0)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
		else if (n < 0)
		{
			_putchar(45);
			return (-1);
		}
	else
	{
		_putchar(48);
		return (0);
	}
}
