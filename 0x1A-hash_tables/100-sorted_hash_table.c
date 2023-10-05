#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: the size of the new sorted hash table
 * Return: NULL or pointer to the new hash table
**/

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h;
	unsigned long int m;

	h = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	h->size = size;
	h->array = malloc(sizeof(shash_node_t *) * size);
	if (h->array == NULL)
		return (NULL);
	for (m = 0; m < size; m++)
		ht->array[m] = NULL;
	h->shead = NULL;
	h->stail = NULL;

	return (h);
}

/**
 * shash_table_set - adds an element to a sorted hash table
 * @ht: a pointer to the sorted hash table
 * @key: the key to add
 * @value: the value associated with the key
 * Return: 0 or 1
**/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *nw, *pmt;
	char *v;
	unsigned long int d;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	v = strdup(value);
	if (v == NULL)
		return (0);

	d = key_index((const unsigned char *)key, ht->size);
	mpt = ht->shead;
	while (mpt)
	{
		if (strcmp(mpt->key, key) == 0)
		{
			free(mpt->value);
			mpt->value = v;
			return (1);
		}
		mpt = mpt->snext;
	}

	nw = malloc(sizeof(shash_node_t));
	if (nw == NULL)
	{
		free(v);
		return (0);
	}
	nw->key = strdup(key);
	if (nw->key == NULL)
	{
		free(v);
		free(nw);
		return (0);
	}
	nw->value = v;
	nw->next = ht->array[d];
	ht->array[d] = nw;

	if (ht->shead == NULL)
	{
		nw->sprev = NULL;
		nw->snext = NULL;
		ht->shead = nw;
		ht->stail = nw;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		nw->sprev = NULL;
		nw->snext = ht->shead;
		ht->shead->sprev = nw;
		ht->shead = nw;
	}
	else
	{
		mpt = ht->shead;
		while (mpt->snext != NULL && strcmp(mpt->snext->key, key) < 0)
			mpt = mpt->snext;
		nw->sprev = mpt;
		nw->snext = mpt->snext;
		if (mpt->snext == NULL)
			ht->stail = nw;
		else
			tmp->snext->sprev = new;
		mpt->snext = nw;
	}

	return (1);
}

/**
 * shash_table_get - retrieves the value associated with a key
 * @ht: a pointer to the sorted hash table
 * @key: the key to get the value
 * Return: NULL or the value associated with key in ht
**/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *nd;
	unsigned long int d;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	d = key_index((const unsigned char *)key, ht->size);
	if (d >= ht->size)
		return (NULL);

	nd = ht->shead;
	while (nd != NULL && strcmp(node->key, key) != 0)
		nd = nd->snext;

	return ((nd == NULL) ? NULL : nd->value);
}

/**
 * shash_table_print - prints a sorted hash table in order
 * @ht: a pointer to the sorted hash table
**/

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
		return;

	nd = ht->shead;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->snext;
		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse order
 * @ht: a pointer to the sorted hash table to print
**/

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
		return;

	nd = ht->stail;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->sprev;
		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: a pointer to the sorted hash table
**/

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *hd = ht;
	shash_node_t *nd, *mpt;

	if (ht == NULL)
		return;

	nd = ht->shead;
	while (nd)
	{
		mpt = nd->snext;
		free(nd->key);
		free(nd->value);
		free(nd);
		nd = mpt;
	}

	free(hd->array);
	free(hd);
}
