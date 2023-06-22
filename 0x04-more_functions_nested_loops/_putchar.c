#include <unistd.h>
#include "main.h"
/**
* _putchar - prints the charcter c to stdout
* @c: the charcter to print
* followed by a new line.
* Return: 1
* on error, -1 is returned, and errno is set appropriattely.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
