#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int o;

	o = 0;
	while (n[o] != '\0')
	{
		if (n[o] >= 'a' && n[o] <= 'z')
			n[o] = n[o] - 32;
		o++;
	}
	return (n);
}
