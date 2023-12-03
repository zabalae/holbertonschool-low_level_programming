#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint.
 * @head: head of the list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_dlistint(head->next);

	free(head);
}
