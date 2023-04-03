#include "lists.h"

/**
 * print_listint_safe - Prints a linked list, safely.
 * @head: Pointer to head node
 *
 * Return: The number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *slow, *fast;

	slow = head;
	fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		node_count++;
		printf("[%p] %d\n", (void *)slow, slow->n);

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			break;
		}
	}

	if (slow == NULL || fast == NULL || fast->next == NULL)
	{
		while (head != NULL)
		{
			node_count++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	return (node_count);
}
