#include "main.h"
/**
* print_triangle - Entry point
* Description: i prints diagonals
* @size: size of the triangle
* Return: empty
*/
void print_triangle(int size)
{
	int row, h, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (s = size - row; s >= 1; s--)
			{
				_putchar(' ');
			}
			for (h = 1; h <= row; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
