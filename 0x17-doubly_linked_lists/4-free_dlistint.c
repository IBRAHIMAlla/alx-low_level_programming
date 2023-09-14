#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node1;
	dlistint_t *node2;

	if (head)
	{
		node1 = head;
		node2 = head->next;
		for (; node2; node1 = node2, node2 = node2->next)
		{
			free(node1);
		}

		free(node1);
	}
}
