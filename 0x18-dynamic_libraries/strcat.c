#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int t = 0;

	int y = 0;

	while (dest[t] != '\0')
	{
		t++;
	}
	while (src[y] != '\0')
	{
		dest[t] = src[y];
		t++;
		y++;
	}

	dest[t] = '\0';
	return (dest);
}
