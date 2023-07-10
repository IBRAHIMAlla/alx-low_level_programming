#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *u;
	int j, e = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	u = malloc(sizeof(char) * (j + 1));

	if (u == NULL)
		return (NULL);

	for (e = 0; str[e]; e++)
		u[e] = str[e];

	return (u);
}
