#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: is the hash table we want to look into
 * @key: the key we are looking for
 * Return: value associated with the element, or NULL
**/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *d;
	unsigned long int in;

	if (key == NULL || ht == NULL)
		return (NULL);

	in = key_index((const unsigned char *)key, ht->size);
	d = ht->array[in];

	for (; d != NULL; d = d->next)
	{
		if (strcmp(d->key, key) == 0)
			return (d->value);
	}

	return (NULL);
}
