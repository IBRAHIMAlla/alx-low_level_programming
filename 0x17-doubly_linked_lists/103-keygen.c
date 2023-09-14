#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Generates and prints passwords for the crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	unsigned int m = 0, t = 1;
	size_t L, g = 0;
	char *c = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char pass[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	L = strlen(argv[1]);
	pass[0] = c[(L ^ 59) & 63];
	while (m < L)
	{
		g += argv[1][m];
		m++;
	}
	pass[1] = c[(g ^ 79) & 63];
	while (m < L)
	{
		t *= argv[1][m];
		m++;
	}
	pass[2] = c[(t ^ 85) & 63];
	t = argv[1][0];
	while (m < L)
	{
		if ((char)t <= argv[1][m])
			t = argv[1][m];
		m++;
	}
	srand(t ^ 14);
	pass[3] = c[rand() & 63];
	for (t = 0, m = 0; m < L; m++)
		t += argv[1][m] * argv[1][m];
	pass[4] = c[(t ^ 239) & 63];
	for (t = 0, m = 0; (char)m < argv[1][0]; m++)
		t = rand();
	pass[5] = c[(t ^ 229) & 63];
	printf("%s\n", pass);
	return (0);
}
