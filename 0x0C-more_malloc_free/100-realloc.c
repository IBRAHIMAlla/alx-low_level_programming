#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *t;
	char *old_t;
	unsigned int k;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	t = malloc(new_size);
	if (!t)
		return (NULL);

	old_t = ptr;

	if (new_size < old_size)
	{
		for (k = 0; k < new_size; k++)
			t[k] = old_t[k];
	}

	if (new_size > old_size)
	{
		for (k = 0; k < old_size; k++)
			t[k] = old_t[k];
	}

	free(ptr);
	return (t);
}
