#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head : points to the adress of the first node
 * @n: integer to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}


	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
