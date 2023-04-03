#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the first node in the list
 * @idx: index where the new node should be added
 * @n: integer to be added to the new node
 * Return: the address of the new node, or NULL if it failed
 * If it is not possible to add the new node at index idx
 * do not add the new node and return NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *temp;
	unsigned int i;

	if (!head)
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	temp = *head;

	for (i = 0; i < idx - 1 && temp; i++)
		temp = temp->next;

	if (!temp)
	{
		free(ptr);
		return (NULL);
	}

	ptr->next = temp->next;
	temp->next = ptr;

	return (ptr);
}
