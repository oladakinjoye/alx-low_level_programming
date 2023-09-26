#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list safely.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */


size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *cur = head;

	while (cur)
	{
		printf("%d\n", cur->n);

		counter++;
		cur = cur->next;

		if (cur == head)
		{
			printf("-> [%d] points to the first node (loop detected)\n", cur->n);
			exit(98);
		}
	}

	return (counter);
}
