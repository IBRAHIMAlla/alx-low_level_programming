#include "main.h"

/**
 * _strncpy - function that copies a string.
 *
 * @dest: destination string
 * @src: source string
 * @n: number of string bytes to copy
 * Return: a pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	while (src[m] != '\0' && m < n)
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}

	return (dest);
}
