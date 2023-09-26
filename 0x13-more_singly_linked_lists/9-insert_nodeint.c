#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a listint_t linked list,
 * at a position
 * @head: pointer points to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	unsigned int counter = 0;
	 listint_t *cur = *head;
	 listint_t *previous = NULL;

	if (head == NULL)
		return (NULL);


	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (cur != NULL && counter < idx)
	{
		previous = cur;
		cur = cur->next;
		counter++;
	}

	if (counter == idx)
	{
		previous->next = new_node;
		new_node->next = cur;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
