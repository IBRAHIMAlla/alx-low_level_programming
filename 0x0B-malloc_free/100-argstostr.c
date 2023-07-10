#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int j, n, e = 0, L = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (n = 0; av[j][n]; n++)
			L++;
	}
	L += ac;

	s = malloc(sizeof(char) * L + 1);
	if (s == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (n = 0; av[j][n]; n++)
	{
		s[e] = av[j][n];
		e++;
	}
	if (s[e] == '\0')
	{
		s[e++] = '\n';
	}
	}
	return (s);
}
