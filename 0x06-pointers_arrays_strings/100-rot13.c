#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int t;
	int y;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (t = 0; s[t] != '\0'; t++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[t] == data1[y])
			{
				s[t] = datarot[y];
				break;
			}
		}
	}
	return (s);
}
