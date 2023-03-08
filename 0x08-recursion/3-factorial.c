#include "main.h"

/**
 * factorial - eturns the factorial of a given number
 * @n: the given number
 * Return: 0 (Success) or -1 if n < 0
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
