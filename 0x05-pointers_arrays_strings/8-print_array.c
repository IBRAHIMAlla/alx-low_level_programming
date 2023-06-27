#include "main.h"
#include <stdio.h>
/**
 * print_array - that prints n elements of an array of integers
 * @a: this is the input array
 * @n: this is the length of the array
 *
 *
 */
void print_array(int *a, int n)
{
int f;
for (f = 0; f < n; f++)
{
printf("%d", a[f]);
if (f != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
