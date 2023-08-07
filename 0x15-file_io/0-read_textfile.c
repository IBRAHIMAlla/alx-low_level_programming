#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *u;
	ssize_t l;
	ssize_t m;
	ssize_t k;

	l = open(filename, O_RDONLY);
	if (l == -1)
		return (0);
	u = malloc(sizeof(char) * letters);
	k = read(l, u, letters);
	m = write(STDOUT_FILENO, u, k);

	free(u);
	close(l);
	return (m);
}
