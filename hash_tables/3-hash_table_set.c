#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: is the hash table to add or update the key
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (ht->array[index] == NULL)
			return (0);
		ht->array[index]->key = strdup(key);
		ht->array[index]->value = strdup(value);
		ht->array[index]->next = NULL;
	}
	else
	{
		tmp = ht->array[index];
		while (tmp->next != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		tmp->next = malloc(sizeof(hash_node_t));
		if (tmp->next == NULL)
			return (0);
		tmp->next->key = strdup(key);
		tmp->next->value = strdup(value);
		tmp->next->next = NULL;
	}
	return (1);
}
