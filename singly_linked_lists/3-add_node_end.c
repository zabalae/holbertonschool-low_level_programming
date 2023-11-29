#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * of a list_t list
 * @head: head of the list
 * @str: string to duplicate
 * Return: the address of the new element, NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element;
	list_t *t;
	int x;

	new_element = malloc(sizeof(list_t));

	if (!new_element)
	{
		return (NULL);
	}

	for (x = 0; str[x] != '\0'; x++)
	{
		;
	}

	new_element->len = x;
	new_element->str = strdup(str);
	new_element->next = NULL;

	t = *head;

	while (t != '\0')
	{
		t = t->next;
	}

	t->next = new;

	return (new_element);

}
