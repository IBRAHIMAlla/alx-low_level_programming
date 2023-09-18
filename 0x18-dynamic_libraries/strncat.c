#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char  *src, int n)
{
	int t = 0, y = 0;

	while (dest[t] != '\0')
		t++;

	while (src[y] != '\0' && y < n)
	{
		dest[t] = src[y];
		t++;
		y++;
	}

	dest[t] = '\0';
	return (dest);
}
