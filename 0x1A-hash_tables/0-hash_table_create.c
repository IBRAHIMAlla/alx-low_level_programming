#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
**/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ha_table;

	if (!size)
		return (NULL);

	ha_table = calloc(1, sizeof(hash_table_t));
	if (!ha_table)
		return (NULL);
	ha_table->size = size;
	ha_table->array = calloc(size, sizeof(hash_node_t *));
	if (!ha_table->array)
	{
		free(ha_table);
		return (NULL);
	}

	return (ha_table);
}
