#include "lists.h"

/**
 * free_listint2 - to free a listint_t list
 * @head: pointer to the listint_t list to be freed
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *cur = *head;
	listint_t *next;

	while (cur != NULL)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}

	*head = NULL;
}
