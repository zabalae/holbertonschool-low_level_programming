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

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}

	index = key_index((const unsigned char *) key, ht->size);

	struct KeyValue *newPair;
	newPair = (struct KeyValue *)malloc(sizeof(struct KeyValue));

	if (newPair == NULL)
	{
		return (0);
	}

	newPair->key = strdup(key);
	newPair->value = (value != NULL) ? strdup(value) : strdup("");
	newPair->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht-array[index] = newPair;
	}
	else
	{
		newPair->next = ht->array[index];
		ht->array[index] = newPair;
	}

	return (1);
}
