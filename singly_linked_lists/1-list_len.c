#include "lists.h"

/**
 * list_len - function that returns the number of elements in a 
 * linked list_t list
 * @h: list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}

	return (x);
}
