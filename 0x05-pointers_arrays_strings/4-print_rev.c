#include "main.h"
/**
 * print_rev - that prints a string, in reverse
 * @s: The string to print
 * Return: 0
 */
void print_rev(char *s)
{
int st = 0;
while (s[st])
st++;
while (st--)
_putchar(s[st]);
_putchar('\n');
}
