#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int u;
	int m;

	for (u = 0; u < 8; u++)
	{
		for (m = 0; m < 8; m++)
			_putchar(a[u][m]);
		_putchar('\n');
	}
}
