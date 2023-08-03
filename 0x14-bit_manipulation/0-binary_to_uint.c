#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing, the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int y;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (y = 0; b[y]; y++)
	{
		if (b[y] < '0' || b[y] > '1')
			return (0);
		val = 2 * val + (b[y] - '0');
	}

	return (val);
}
