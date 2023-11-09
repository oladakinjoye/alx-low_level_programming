#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t linked list.
 * @head: pointer to head of the list
 * @index: index of the node to search for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int sizer;
	dlistint_t *tmp_1;

	sizer = 0;
	if (head == NULL)
	return (NULL);

	tmp_1 = head;
	while (tmp_1)
	{
	if (index == sizer)
	return (tmp_1);
	sizer++;
	tmp_1 = tmp_1->next;
	}
	return (NULL);
}
