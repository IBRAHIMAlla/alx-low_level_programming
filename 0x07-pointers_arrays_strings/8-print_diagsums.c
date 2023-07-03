#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum, sum1, m;

	sum = 0;
	sum1 = 0;

	for (m = 0; m < size; m++)
	{
		sum = sum + a[m * size + m];
	}
	for (m = size - 1; m >= 0; m--)
	{
		sum1 += a[m * size + (size - m - 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
