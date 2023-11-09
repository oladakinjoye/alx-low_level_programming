#include "lists.h"

/**
 * sum_dlistint - return the sum of all the data (n)
 * of a doubly linked list
 * @head: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_1;

	sum_1 = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum_1 += head->n;
			head = head->next;
		}
	}

	return (sum_1);
}
