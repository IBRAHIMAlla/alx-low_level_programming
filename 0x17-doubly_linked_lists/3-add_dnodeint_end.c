#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer.
 * @n: integer.
 * Return: address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_new, *am = *head;

	node_new = malloc(sizeof(dlistint_t));
	if (node_new == NULL)
		return (NULL);
	node_new->n = n;
	node_new->next = NULL;

	if (am)
	{
		for (; am->next; am = am->next)
		{
		}
		node_new->prev = am;
		am->next = node_new;

	}
	else
	{
		*head = node_new;
		node_new->prev = NULL;
	}

	return (node_new);
}
