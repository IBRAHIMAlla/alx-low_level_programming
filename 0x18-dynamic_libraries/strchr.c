#include "main.h"
#include <stdio.h>

int _putchar(char c);
/**
 * *_strchr - function that locates a character in a string.
 * @s: string to search from
 * @c: character to be searched
 *
 *Return: pointer to the first occurrence of a character, NULL if not found
 */
char *_strchr(char *s, char c)
{
	int m;

	while (1)
	{
		m = *s++;
		if (m == c)
			return (s - 1);
		if (m == 0)
		{
			return (NULL);
		}
	}
}
