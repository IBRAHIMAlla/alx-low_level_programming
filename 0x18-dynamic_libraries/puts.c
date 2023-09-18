#include "main.h"

int _putchar(char c);
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @s: string pointer to print
 */
void _puts(char *s)
{
	int m;

	for (m = 0; s[m] != '\0'; m++)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
