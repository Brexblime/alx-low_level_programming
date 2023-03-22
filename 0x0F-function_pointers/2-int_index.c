#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer in an array.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function to be used to compare values.
 *
 * Return: Index of first element for which the cmp function doesn't return 0,
 *         or -1 if no element matches or if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
