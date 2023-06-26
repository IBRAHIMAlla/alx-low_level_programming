#include "main.h"
#include <stdio.h>

/**
 * _putchar - check the code.
 * @c: the character to print
 * Return: Always 0.
 * on error, -1 is returned, and si set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
