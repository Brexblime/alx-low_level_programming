#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of listint_t linked list
 * @head: pointer to pointer to the first element of the list
 * @index: index of the node to delete
 * Return: 1 if successful, -1 if failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *prev;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	prev = *head;
	temp = (*head)->next;
	while (temp != NULL)
	{
		if (i == index)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
