#include "main.h"
/**
* print_square - Print a square of size size
* @size: size of the square
* Return: empty
*/
void print_square(int size)
{
int v, m;
if (size <= 0)
_putchar('\n');
for (v = 0; v < size; v++)
{
for (m = 0; m < (size); m++)
{
_putchar('#');
}
_putchar('\n');
}
}
