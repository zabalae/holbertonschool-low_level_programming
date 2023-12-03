#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list.
 * @head: head of the list
 * @index: the index of the node
 * Return: the nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; head != NULL && x < index; x++)
	{
		head = head->next;
	}

	return (head);
}
