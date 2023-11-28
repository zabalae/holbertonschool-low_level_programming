#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning
 * of a list_t list
 * @head: head of the list
 * @str: string to duplicate
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int x;

	new = malloc(sizeof(list_t));

	for (x = 0; str[x] != '\0'; x++)
	{
		;
	}

	new->len = x;
	new->next = *head;
	*head = new;

	return (new);
}
