#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int ind, p, j, pr;

	if (array == NULL || size == 0)
		return (-1);

	p = (int)sqrt((double)size);
	j = 0;
	pr = ind = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", ind, array[ind]);

		if (array[ind] == value)
			return (ind);
		j++;
		pr = ind;
		ind = j * p;
	} while (ind < (int)size && array[ind] < value);

	printf("Value found between indexes [%d] and [%d]\n", pr, ind);

	for (; pr <= ind && pr < (int)size; pr++)
	{
		printf("Value checked array[%d] = [%d]\n", pr, array[pr]);
		if (array[pr] == value)
			return (pr);
	}

	return (-1);
}
