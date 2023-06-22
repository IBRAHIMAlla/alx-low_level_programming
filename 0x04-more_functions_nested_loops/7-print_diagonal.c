#include "main.h"
/**
* print_diagonal -   draws a diagonal line on the terminal
* @n: The number of time to print diagonal lines
* Return: empty
*/
void print_diagonal(int n)
{
int v, m;
if (n <= 0)
_putchar('\n');
for (v = 0; v < n; v++)
{
for (m = 0; m < v; m++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
