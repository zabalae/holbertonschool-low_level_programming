#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node of a
 * dlistint_t list
 * @head:
 * @n
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}

	new_node->prev = temp_node;

	temp_node->next = new_node;

	return (new_node);
}
