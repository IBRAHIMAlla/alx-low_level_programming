#include "main.h"
/**
* print_line -  Draws a straight line in the terminal
* @n:the number of lines
* Return: empty
*/
void print_line(int n)
{
int v;
if (n <= 0)
_putchar('\n');
else
for (v = 0; v < n; v++)
_putchar(95);
_putchar('\n');
}
