#include "search_algos.h"
#include <math.h>
/**
 * jump_search - jump search algorithm
 * @array: pointer to the head of an array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: found index, -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int jump_square = (int) sqrt(size);
	int l = 0, r = 0;

	while (array)
	{
		if (r >= (int) size || array[r] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", l, r);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", r, array[r]);
		l = r;
		r += jump_square;
	}
	for (; l <= r && l < (int) size; l++)
	{
		printf("Value checked array[%d] = [%d]\n", l, array[l]);
		if (array[l] == value)
			return (l);
	}
	return (-1);
}
