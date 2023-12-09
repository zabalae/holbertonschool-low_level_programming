#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x;
	hash_table_t *newTable = (hash_table_t *)malloc(size * sizeof(hash_table_t));

	if (newTable == NULL)
	{
		return (NULL);
	}

	newTable->size = size;
	newTable->table = (struct KeyValue **)malloc(size * sizeof(struct KeyValue *));

	if (newTable->table == NULL)
	{
		free(newTable);
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		newTable->table[x] = NULL;
	}

	return (newTable);
}
