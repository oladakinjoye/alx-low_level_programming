#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list listint_t
 * at a certain index
 * @head: pointer to point the first element on the list
 * @index: index of the node to delete
 *
 * Return: returns 1 for (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *cur = *head;
	listint_t *previous = NULL;


	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cur);
		return (1);
	}

	while (cur != NULL && counter < index)
	{
		previous = cur;
		cur = cur->next;
		counter++;
	}

	if (counter == index && cur != NULL)
	{
		previous->next = cur->next;
		free(cur);
		return (1);
	}

	return (-1);
}
