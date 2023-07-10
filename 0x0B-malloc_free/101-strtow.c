#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int f, g, m;

	f = 0;
	m = 0;

	for (g = 0; s[g] != '\0'; g++)
	{
		if (s[g] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			m++;
		}
	}

	return (m);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matr, *t;
	int j, k = 0, l = 0, w, o = 0, s, e;

	while (*(str + l))
		l++;
	w = count_word(str);
	if (w == 0)
		return (NULL);

	matr = (char **) malloc(sizeof(char *) * (w + 1));
	if (matr == NULL)
		return (NULL);

	for (j = 0; j <= l; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (o)
			{
				e = j;
				t = (char *) malloc(sizeof(char) * (o + 1));
				if (t == NULL)
					return (NULL);
				while (s < e)
					*t++ = str[s++];
				*t = '\0';
				matr[k] = t - o;
				k++;
				o = 0;
			}
		}
		else if (o++ == 0)
			s = j;
	}

	matr[k] = NULL;

	return (matr);
}
