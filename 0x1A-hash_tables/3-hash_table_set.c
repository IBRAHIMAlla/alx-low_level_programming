#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 * Return: 1 if its succeeded 0 otherwise
**/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long d, size;
	hash_node_t *n_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	size = ht->size;
	d = key_index((const unsigned char *)key, size);

	if (ht->array[d] != NULL && strcmp(ht->array[d]->key, key) == 0)
	{
		ht->array[n]->value = strdup(value);
		return (1);
	}

	n_node = malloc(sizeof(hash_node_t));

	if (n_node == NULL)
		return (0);

	n_node->key = strdup(key);
	n_node->value = strdup(value);
	n_node->next = ht->array[d];
	ht->array[d] = n_node;

	return (1);
}
