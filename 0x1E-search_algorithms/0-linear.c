#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - linear search
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: target index, -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array[0] == '\0')
		return (-1);

	while (i < size)
	{

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

		i++;
	}
	return (-1);
}
