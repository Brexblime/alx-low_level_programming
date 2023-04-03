#include "lists.h"

/**
 * print_listint_safe - prints a linked list (safe version)
 * @head: pointer to the first node of the list
 * Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *temp;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		i++;
		temp = head;
		head = head->next;
		if (temp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (i);
}
