#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts new node at given position
 *	in doubly linked list
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: value to be stored in the new node
 * Return: address of the new node or NULL if it failed
 *	If it is not possible to add the new node at index
 *	do not add new node and return NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			return (NULL);
		}
		current = current->next;
	}

	if (current == NULL)
	{
		return (NULL);
	}
	if (current->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
