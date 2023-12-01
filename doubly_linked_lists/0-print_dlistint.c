#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a
 * dlistint_t list
 * @h: pointer
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int x;

	h->prev = NULL;

	while (h != NULL)
	{
		printf("%i", h);
		h = h->next;
		x++;
	}

	return (x);
}
