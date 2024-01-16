#include "search_algos.h"

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	size_t m, lt, rt;

	if (array == NULL)
		return (-1);

	for (lt = 0, rt = size - 1; rt >= lt;)
	{
		printf("Searching in array: ");
		for (m = lt; m < rt; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);

		m = lt + (rt - lt) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			rt = m - 1;
		else
			lt = m + 1;
	}

	return (-1);
}
