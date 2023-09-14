#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list.
 * @head: pointer.
 * Return: sum of all data in the list, 0 if the lost is empty.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *inj = head;
	int sum = 0;

	for (; inj != NULL; inj = inj->next)
	{
		sum += inj->n;
	}

	return (sum);
}
