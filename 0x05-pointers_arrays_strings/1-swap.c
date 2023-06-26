#include "main.h"
#include <stdio.h>

/**
 * swap_int - that swaps the values of two integers.
 * @a: The first integer
 * @b:The second integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
