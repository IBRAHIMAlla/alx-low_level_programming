#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int k = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		m = malloc(sizeof(char) * (l1 + n + 1));
	else
		m = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!m)
		return (NULL);

	while (k < l1)
	{
		m[k] = s1[k];
		k++;
	}

	while (n < l2 && k < (l1 + n))
		m[k++] = s2[j++];

	while (n >= l2 && k < (l1 + l2))
		m[k++] = s2[j++];

	m[k] = '\0';

	return (m);
}
