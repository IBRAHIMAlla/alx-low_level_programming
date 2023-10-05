#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: is the hash table
**/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int digit = 0, m = 0;

	if (ht != NULL)
	{
		printf("{");

		for (digit = 0; digit < ht->size; digit++)
		{
			nd = ht->array[digit];

			while (nd != NULL)
			{
				if (m != 0)
					printf(", ");
				m = 1;
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
			}
		}

		printf("}\n");
	}
}
