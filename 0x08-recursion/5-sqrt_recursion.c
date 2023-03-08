#include "main.h"


/**
 * _sqrt_helper - calculate the natural square root of a number recursively
 *
 * @n: the number to calculate the square root of
 * @guess: the current guess for the square root
 *
 * Return: the square root of n, or -1 if n doesn't have natural square root
*/

int _sqrt_helper(int n, int guess)
{
	/* base case: n has no natural square root */
	if (n < 0 || guess * guess > n)
	return (-1);

	/* base case: guess is the square root */
	if (guess * guess == n)
	return (guess);

	/* recursive case: try the next guess */
	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - calculate  natural square root of number using recursion
 *
 * @n: the number to calculate the square root of
 *
 * Return: the square root of n, or -1 if n doesn't have a natural square root
*/

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}
