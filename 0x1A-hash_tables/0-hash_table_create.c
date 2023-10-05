#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table, or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_table;
	hash_node_t **n_arr;
	unsigned long int m;

	if (size == 0)
		return (NULL);

	n_arr = malloc(sizeof(hash_node_t *) * size);
	if (!n_arr)
		return (NULL);

	for (m = 0; m < size; m++)
		n_arr[m] = NULL;

	n_table = malloc(sizeof(hash_table_t));
	if (!n_table)
		return (NULL);

	n_table->size = size;
	n_table->array = n_arr;

	return (n_table);
}
