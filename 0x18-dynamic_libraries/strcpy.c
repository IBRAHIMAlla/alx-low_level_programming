#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int t = 0;
	int k = 0;

	while (*(src + t) != '\0')
	{
		t++;
	}
	for ( ; k < t ; k++)
	{
		dest[k] = src[k];
	}
	dest[t] = '\0';
	return (dest);
}
