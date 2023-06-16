#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: end program
*/
int main(void)
{
int t, h;
for (t = 0; t <= 98; t++)
{
for (h = t + 1; h <= 99; h++)
{
putchar((t / 10) + '0');
putchar((t % 10) + '0');
putchar(' ');
putchar((h / 10) + '0');
putchar((h % 10) + '0');
if (t == 98 && h == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
