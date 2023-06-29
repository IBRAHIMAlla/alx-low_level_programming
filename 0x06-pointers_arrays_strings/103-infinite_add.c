#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int t = 0;
	int u = 0;
	char temp;

	while (*(n + t) != '\0')
	{
		t++;
	}
	t--;

	for (u = 0; u < t; u++, t--)
	{
		temp = *(n + u);
		*(n + u) = *(n + t);
		*(n + t) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, t = 0, u = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + t) != '\0')
		t++;
	while (*(n2 + u) != '\0')
		u++;
	t--;
	u--;
	if (u >= size_r || t >= size_r)
		return (0);
	while (u >= 0 || t >= 0 || overflow == 1)
	{
		if (t < 0)
			val1 = 0;
		else
			val1 = *(n1 + t) - '0';
		if (u < 0)
			val2 = 0;
		else
			val2 = *(n2 + u) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		u--;
		t--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);

}
