#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int m = 0, b = 0, k = 0, le = 0, j = 0, cont = 0;


	while (s[le] != '\0')
		le++;

	while (m < le && k == 0)
	{
		if (s[m] == '-')
			++b;

		if (s[m] >= '0' && s[m] <= '9')
		{
			cont = s[m] - '0';
			if (b % 2)
				cont = -cont;
			k = k * 10 + cont;
			j = 1;
			if (s[m + 1] < '0' || s[m + 1] > '9')
				break;
			j = 0;
		}
		m++;
	}

	if (j == 0)
		return (0);

	return (k);
}
