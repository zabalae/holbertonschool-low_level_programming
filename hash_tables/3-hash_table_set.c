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
	unsigned long int index;
	hash_node_t *tmp;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return (0);
	if (key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
			{
				return (0);
			}
			free(ht->array[index]->value);
			ht->array[index]->value = new_value;
			return (1);
		}
		index = (index + 1) % ht->size;
	}
	ht->array[index] = make_hash_node(key, value);
	if (ht->array[index] == NULL)
	{
		return (0);
	}
	return (1);
}
