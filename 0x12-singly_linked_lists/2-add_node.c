#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: points to the adress of the first node
 * @str: string to be added as the new node
 * Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{

	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
