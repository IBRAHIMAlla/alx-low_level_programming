#include "main.h"
/**
* print_most_numbers - prints the numbers, from 0 to 9
* Description: Prints the number excluding 2 and 4
* Return: The number since 0 up to 9
*/
void print_most_numbers(void)
{
int h;
for (h = 0; h <= 9; h++)
{
if (h == 2 || h == 4)
continue;
else
_putchar(h + '0');
}
_putchar('\n');
}
