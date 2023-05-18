#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: pointer to the head of the list
 * Return: the number of elements in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
