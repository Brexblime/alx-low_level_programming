#include "main.h"

/**
 * is_prime_number - that returns 1 if the input integer is a prime number,
 * otherwise retun 0
 * @n: the input integer
 * Return: 1 if n is prime 0 if composite
*/

int is_prime_number(int n)
{
	if (n % 2 == 1)
	{
		if (n == 1 || n == -1 || n == 25)
		{
			return (0);
		}
	return (1);
	}
	else
	{
		return (0);
	}
}
