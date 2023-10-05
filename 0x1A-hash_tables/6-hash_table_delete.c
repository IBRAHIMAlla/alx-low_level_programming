#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: is the hash table
**/

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hd = ht;
	hash_node_t *nd, *pmt;
	unsigned long int m;

	for (m = 0; m < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			nd = ht->array[m];
			while (nd != NULL)
			{
				pmt = nd->next;
				free(nd->key);
				free(nd->value);
				free(nd);
				nd = pmt;
			}
		}
	}
	free(hd->array);
	free(hd);
}
