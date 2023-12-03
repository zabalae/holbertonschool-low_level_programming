#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at
 * index index of a dlistint_t linked list
 * @head: head of the list
 * @index: is the index of the node that should be deleted
 * Return: 1 if it succeeded -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	while (index > 0 && temp != NULL)
	{
		temp = temp->next;
		index--;
	}

	if (temp == NULL)
		return (-1);

	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	else
		*head = temp->next;

	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);

	return (1);
}
