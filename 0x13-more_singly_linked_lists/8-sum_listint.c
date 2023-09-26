#include "lists.h"

/**
 * sum_listint - calculates the sum of all
 * the data in a listint_t linked list
 * @head: first node in the listint_t list
 *
 * Return: returns sum of all the data
 */

int sum_listint(listint_t *head)
{
	listint_t *cur = head;
	int sum = 0;

	while (cur != NULL)
	{
		sum += cur->n;
		cur = cur->next;
	}

	return (sum);
}
