#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 *	and returns the head node’s data (n).
 * @head: Double pointer to the head of the linked list.
 * Return: The head node's data (n). If the linked list is empty, return 0.
*/

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
