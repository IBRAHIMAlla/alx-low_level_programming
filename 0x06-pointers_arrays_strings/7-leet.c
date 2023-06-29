#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int t, y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (t = 0; n[t] != '\0'; t++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[t] == s1[t])
			{
				n[t] = s2[y];
			}
		}
	}
	return (n);
}
