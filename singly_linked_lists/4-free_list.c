#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * head: head of the list
 */

void free_list(list_t *head)
{
	list_t *t;

	while (!head)
	{
		t = head;
		free(head->str);
		head = head->next;
		free(t);
	}
}
