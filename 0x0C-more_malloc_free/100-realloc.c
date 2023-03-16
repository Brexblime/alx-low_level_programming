#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated with malloc().
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return:If new_size > old_size, the added memory should not be initialized.
 *	If new_size == old_size, do not do anything and return ptr.
 *	If ptr is NULL, then the call is equivalent to malloc(new_size)
 *	for all values of old_size and new_size.
 *	If new_size is equal to zero, and ptr is not NULL, then the call
 *	is equivalent to free(ptr) and the function should return NULL
 *	without further modification.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
	return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	old_ptr = ptr;
	if (new_size > old_size)
	{
		memcpy(new_ptr, old_ptr, old_size);
	}
	else
	{
		memcpy(new_ptr, old_ptr, new_size);
	}
	free(ptr);

	return (new_ptr);
}
