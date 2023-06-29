#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int o, y, t;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		y = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (t = 0; t < 10; t++)
		{
			if (t < y)
				printf("%02x", *(b + o + t));
			else
				printf("  ");
			if (t % 2)
			{
				printf(" ");
			}
		}
		for (t = 0; t < y; t++)
		{
			int c = *(b + o + t);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
