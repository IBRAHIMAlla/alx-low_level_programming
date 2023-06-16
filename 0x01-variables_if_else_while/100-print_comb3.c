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
for (t = '0'; t < '9'; t++)
{
for (h = t + 1; h <= '9'; h++)
{
if (h != t)
{
putchar(t);
putchar(h);
if (t == '8' && h == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
