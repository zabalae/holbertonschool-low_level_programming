#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: is the hash table it going to look into
 * @key: is the key it's looking for
 * Return: the value associated with the element,
 * or NULL is the key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int x;

	hash_node_t *temp;

	if (ht == NULL)
	{
		return (NULL);
	}

	if (key == NULL || *key == '\0')
	{
		return (NULL);
	}

	x = key_index((unsigned char *)key, ht->size);

	temp = ht->array[x];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
