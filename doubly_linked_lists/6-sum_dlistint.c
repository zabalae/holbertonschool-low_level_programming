#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the
 * data (n) of a dlistint linked list.
 * @head: head of the list
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
	{
		sum += head->n;
	}

	return (sum);
}
