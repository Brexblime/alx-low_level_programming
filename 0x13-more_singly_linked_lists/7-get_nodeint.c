#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of the linked list
 * @index: index of the node starting from 0
 * Return: the nth node of the listint_t linked list or NULL if the node does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
	if (count == index)
	{
		return (temp);
	}
	count++;
	temp = temp->next;
	}

	return (NULL);
}
