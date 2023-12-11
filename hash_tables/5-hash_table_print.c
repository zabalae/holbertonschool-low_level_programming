#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int x;
	char *y;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	y = "";

	for (x = 0; x < ht->size; x++)
	{
		temp = ht->array[x];

		while (temp != NULL)
		{
			printf("%s'%s': '%s'", y, temp->key, temp->value);
			y = ", ";
			temp = temp->next;
		}
	}

	printf("}\n");
}
