#include "main.h"

/**
 * _puts -  that prints a string, followed by a new line, to stdout
 * @str: The string to print
 * Return: string and new line
 */
void _puts(char *str)
{
int e = 0;
while (str[e])
{
_putchar(str[e]);
e++;
}
_putchar('\n');
}
