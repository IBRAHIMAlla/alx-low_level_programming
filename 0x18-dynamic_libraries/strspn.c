#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int m, y, n, mk;

	n = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		mk = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[m] == accept[y])
			{
				n++;
				mk = 1;
			}
		}
		if (mk == 0)
			return (n);
	}
	return (0);
}
