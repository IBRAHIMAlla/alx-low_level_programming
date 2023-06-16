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
int t, h, o;
for (t = '0'; t < '9'; t++)
{
for (h = t + 1; h <= '9'; h++)
{
for (o = h + 1; o <= '9'; o++)
{
if ((h != t) != o)
{
putchar(t);
putchar(h);
putchar(o);
if (t == '7' && h == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
