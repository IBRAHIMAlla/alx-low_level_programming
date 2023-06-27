#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  that generates random valid passwords for
 * for the program 101-crackme.
 * Return: Always 0.
 */
int main(void)
{
char password[84];
int i = 0, s = 0, h1, h2;
srand(time(0));
while (s < 2772)
{
password[i] = 33 + rand() % 94;
s += password [i++];
}
password[i] = '\0';
if (s != 2772)
{
h1 = (s - 2772) / 2;
h2 = (s - 2772) / 2;
if ((s - 2772) % 2 != 0)
h1++;
for (i = 0; password[i]; i++)
{
if (password[i] >= (33 + h2))
{
password[i] -= h2;
break;
}
}
}
printf("%s", password);
return (0);
}
