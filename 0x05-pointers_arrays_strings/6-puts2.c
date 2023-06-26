#include "main.h"
/**
 * puts2 - that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: The string to print
 * Return: 0
 */
void puts2(char *str)
{
int l = 0;
while (str[l] != '\0')
{
if (l % 2 == 0)
{
_putchar(str[l]);
}
l++;
}
_putchar('\n');
}
