#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given position in a
 *	doubly linked list
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded or -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (index > 0)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
		index--;
	}
	if (current == NULL)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
