#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer.
 * Return: number of nodes.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *inj = h;
	size_t digit = 0;

	while (inj)
	{
		printf("%i\n", inj->n);
		digit++;
		inj = inj->next;
	}

	return (digit);
}
