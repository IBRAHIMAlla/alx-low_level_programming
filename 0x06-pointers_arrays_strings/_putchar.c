#include <unistd.h>

/**
 * _putchar - check the code.
 * @c: the character to print
 * Return: on Success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
