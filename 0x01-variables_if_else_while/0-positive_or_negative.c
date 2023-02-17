#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - positive or negative
* Return: 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("n is %d\n", n);

	if (n < 0)
	{
	printf("is negative\n");
	}
	else if (n > 0)
	{
	printf("is positive\n");
	}
	else
	{
	printf("is zero\n");
	}
	return (0);
}
