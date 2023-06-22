#include "main.h"
/**
* more_numbers - prints 10 times the number  since 0 up to 14
* Return: 10 time of The number since 0 up to 14
*/
void more_numbers(void)
{
int t, e;
for (t = 0; t < 10; t++)
{
for (e = 0; e <= 14; e++)
{
if (e > 9)
{
_putchar(e / 10 + '0');
}
_putchar(e % 10 + '0');
}
_putchar('\n');
}
}
