#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int o;
	int j;

	o = 0;
	while (dest[o] != '\0')
	{
		o++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[o] = src[j];
	o++;
	j++;
	}
	dest[o] = '\0';
	return (dest);
}
