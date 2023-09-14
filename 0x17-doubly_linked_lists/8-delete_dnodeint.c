#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node1 = *head;
	dlistint_t *delete_node1 = *head;
	unsigned int i;
	unsigned int digit = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = delete_node1->next;
		free(delete_node1);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	i = index - 1;
	for (; node1 && digit != i; digit++)
	{
		node1 = node1->next;
	}

	if (digit == i && node1)
	{
		delete_node1 = node1->next;
		if (delete_node1->next)
		delete_node1->next->prev = node1;
		node1->next = delete_node1->next;
		free(delete_node1);
		return (1);
	}

	return (-1);
}
