#include "lists.h"

/**
 * free_listint2 - to free a listint_t list
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *cur;

	if (head == NULL)
		return;

	while (*head)
	{
		cur = (*head)->next;
		free(*head);
		*head = cur;
	}

	*head = NULL;
}
