#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *node_new;

	node_new = malloc(sizeof(dlistint_t));
	if (node_new == NULL)
	return (NULL);

	node_new->n = n;
	node_new->next = NULL;
	node_new->prev = NULL;

	if (*head == NULL)
	{

		*head = node_new;
	}

	else
	{
		dlistint_t *existing = *head;

		while (existing->next != NULL)
		{
			existing = existing->next;
		}

		existing->next = new;

		node_new->prev = existing;
	}

	return (node_new);
}
