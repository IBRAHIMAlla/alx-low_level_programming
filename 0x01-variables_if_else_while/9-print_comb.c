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
int t;
for (t = '0'; t <= '9'; t++)
{
putchar(t);
if (t != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
