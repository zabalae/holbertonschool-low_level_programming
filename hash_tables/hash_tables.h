#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * KeyValue - Hash table
 * @key: The key
 * @value: Value
 * @next: pointer to the next node
 */

struct KeyValue {
	char *key;
	int value;
	struct KeyValue *next;
};

/**
 * struct - Hash table structure
 * @size: size of the array
 * @table: table
 */

typedef struct {
	unsigned long int size;
	struct KeyValue **table;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

#endif
