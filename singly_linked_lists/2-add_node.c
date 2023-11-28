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
	list_t *new_element;
	int x;

	new = malloc(sizeof(list_t));

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
	new_element->next = *head;
	*head = new_element;

	return (new_element);
}
