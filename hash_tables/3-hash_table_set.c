#include "hash_tables.h"

hash_node_t *find_or_insert_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *tmp = *head;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(*tmp->value);
			*tmp->value = strdup(value);
			return (*head);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
	{
		return (NULL);
	}

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = NULL;

	if (*head != NULL)
	{
		tmp->prev = *head;

		(*head)->next = tmp;
	}
	else
	{
		tmp->prev = NULL;
		*head = tmp;
	}

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
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return 0;
	}

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (ht->array[index] == NULL)
		{
			return 0;
		}
		ht->array[index]->prev = NULL;
		ht->array[index]->next = NULL;
	}

	if (find_or_insert_node(&(ht->array[index]), key, value) == NULL)
	{
		return 0;
	}

	return 1;
}
