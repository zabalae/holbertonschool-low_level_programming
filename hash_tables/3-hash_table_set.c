#include "hash_tables.h"

/**
 * add_h - add node
 * @head: head of the list
 * @key: key
 * @value: value to store
 * Return: *head
 */

hash_node_t *add_h(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *temp;

	temp = *head;

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (*head);
		}

		temp = temp->next;
	}

	temp = malloc(sizeof(hash_node_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->key = strdup(key);

	temp->value = strdup(value);

	temp->next = NULL;

	*head = temp;

	return (*head);
}

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: is the hash table to add or update the key
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int x;

	if (ht == NULL)
	{
		return (0);
	}

	if (key == NULL || *key == '\0')
	{
		return (0);
	}

	x = key_index((unsigned char *)key, ht->size);

	if (add_h(&(ht->array[x]), key, value) == NULL)
	{
		return (0);
	}

	return (1);
}
