#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc.
 * @nmemb: number of elements in the array.
 * @size: size of each element in bytes.
 * Return: Pointer to the allocated memory.
 *	NULL if malloc fails or if either nmemb or size is 0.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *temp_ptr;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
	return (NULL);
	}

	temp_ptr = ptr;
	for (i = 0; i < nmemb * size; i++)
	{
	temp_ptr[i] = 0;
	}

	return (ptr);
}
