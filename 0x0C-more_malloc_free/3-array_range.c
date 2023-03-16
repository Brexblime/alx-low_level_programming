#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value to include in the array
 * @max: maximum value to include in the array
 *
 * Return: pointer to the newly created array
 *	or NULL if min > max or if malloc fails
*/

int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);
	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	arr[i] = min++;

	return (arr);
}
