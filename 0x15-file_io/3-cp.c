#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buf(char *file);
void close_file(int l);

/**
 * create_buf - Allocates 1024 bytes for a buf.
 * @file: The name of the file buf is storing chars for.
 *
 * Return: A pointer to the newly-allocated buf.
 */
char *create_buf(char *file)
{
	char *u;

	u = malloc(sizeof(char) * 1024);

	if (u == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (u);
}

/**
 * close_file - Closes file descriptors.
 * @l: The file descriptor to be closed.
 */
void close_file(int l)
{
	int m;

	m = close(l);

	if (m == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", l);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int o, m, k, l;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buf(argv[2]);
	o = open(argv[1], O_RDONLY);
	k = read(o, buf, 1024);
	m = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (o == -1 || k == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		l = write(m, buf, k);
		if (m == -1 || l == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		k = read(o, buf, 1024);
		m = open(argv[2], O_WRONLY | O_APPEND);

	} while (k > 0);

	free(buf);
	close_file(o);
	close_file(m);

	return (0);
}
