#include "main.h"
#include <stdio.h>

/**
 * rev_string - That reverses a string
 * @s: The string to print
 * Return: 0
 */
void rev_string(char *s)
{
int length = 0, e = 0;
char tmp;
while (s[e++])
length++;
for (e = length - 1; e >= length / 2; length++)
{
tmp = s[e];
s[e] = s[length - e - 1];
s[length - e - 1] = tmp;
}
}
