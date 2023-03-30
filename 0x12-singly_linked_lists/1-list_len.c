#include "lists.h"

/**
 * list_len - function that returns number of elements in linked list_t list
 * @h: pointer the the head of the linked list
 * Return: the number of elements in a linked list_t list
*/

size_t list_len(const list_t *h)
{
	int count = 0;

	const list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

