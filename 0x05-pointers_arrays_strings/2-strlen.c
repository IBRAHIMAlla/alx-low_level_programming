#include "main.h"

/**
 * _strlen - that swaps the values of two integers.
 * @s:The string to get the length of
 * Return: The length of @s
 */
int _strlen(char *s)
{
int length = 0;
	while (s[length])
	length++;
	return (length);
}
