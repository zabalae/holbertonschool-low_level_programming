#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 * @h: pointer
 * Return: number of elements in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}

	return (x);
}
