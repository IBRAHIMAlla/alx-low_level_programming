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
char c, e, q;
e = 'e';
q = 'q';
for (c = 'a'; c <= 'z'; c++)
{
if (c != e && c != q)
putchar(c);
}
putchar('\n');
return (0);
}
