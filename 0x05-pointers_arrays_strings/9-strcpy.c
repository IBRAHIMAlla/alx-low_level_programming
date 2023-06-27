#include "main.h"
/**
 * *_strcpy - that copies the string
 * @dest: Destination value
 * @src: Source value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int v = -1;
do {
v++;
dest[v] = src[v];
} while (src[v] != '\0');
return (dest);
}
