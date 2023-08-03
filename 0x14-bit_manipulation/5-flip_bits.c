#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first num
 * @m: second num
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, c = 0;
	unsigned long int s;
	unsigned long int exc = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		s = exc >> y;
		if (s & 1)
			c++;
	}

	return (c);
}
