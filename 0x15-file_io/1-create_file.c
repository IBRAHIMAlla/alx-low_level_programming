#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to a string to write.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int l, m, k = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (k = 0; text_content[k];)
			k++;
	}

	l = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	m = write(l, text_content, k);

	if (l == -1 || m == -1)
		return (-1);

	close(l);

	return (1);
}
