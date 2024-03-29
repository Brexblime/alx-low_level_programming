#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: pointer to the head of the linked list
 * Return: the number of nodes in the list
*/

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
