#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 * @h: head of the list
 * @idx: index of the list where the new node should be added
 * @n: value of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp = *h;
	unsigned int x;

	if (h == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (x = 0; x < idx - 1 && temp != NULL; x++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
	{
		return (NULL);
	}

	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	
	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);

}
