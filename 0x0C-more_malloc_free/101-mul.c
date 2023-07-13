#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int k = 0;

	while (s[k])
	{
		if (s[k] < '0' || s[k] > '9')
			return (0);
		k++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *m1, *m2;
	int l1, l2, l, k, c, d1, d2, *res, a = 0;

	m1 = argv[1], m2 = argv[2];
	if (argc != 3 || !is_digit(m1) || !is_digit(m2))
		errors();
	l1 = _strlen(m1);
	l2 = _strlen(m2);
	l = l1 + l2 + 1;
	res = malloc(sizeof(int) * l);
	if (!res)
		return (1);
	for (k = 0; k <= l1 + l2; k++)
		res[k] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = m1[l1] - '0';
		c = 0;
		for (l2 = _strlen(m2) - 1; l2 >= 0; l2--)
		{
			d2 = m2[l2] - '0';
			c += res[l1 + l2 + 1] + (d1 * d2);
			res[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			res[l1 + l2 + 1] += c;
	}
	for (k = 0; k < l - 1; k++)
	{
		if (res[k])
			a = 1;
		if (a)
			_putchar(res[k] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
