#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer we compute the absolute value of
 * Return: n (Success)
*/

int _abs(int n)
{

	if (n < 0)
	{
		n = -n;
		return (n);
	}
	return (n);
}
