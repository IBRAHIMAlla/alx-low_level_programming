#include "main.h"
/**
 * rev_string - That reverses a string
 * @s: The string to print
 * Return: 0
 */
void rev_string(char *s)
{
int len, e, h;
char tmp;
for (len = 0; s[len] != '\0'; len++)
e = 0;
h = len / 2;
while (h--)
{
tmp = s[len - e - 1];
s[len - e - 1] = s[e];
s[e] = tmp;
e++;
}
}
