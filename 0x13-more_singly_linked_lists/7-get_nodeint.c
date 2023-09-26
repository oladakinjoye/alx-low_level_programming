#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at
 * a certain index in a listint_t list
 * @head: first node in the listint_t list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *cur = head;

	if (head == NULL)
		return (NULL);

	while (cur != NULL)
	{
		if (counter == index)
			return (cur);

		cur = cur->next;
		counter++;
	}
	return (NULL);
}
