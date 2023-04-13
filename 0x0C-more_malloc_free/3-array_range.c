#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: the minimum value argument
 * @max: the maximum value
 * Return: pointer to the newly created array;
 */

int *array_range(int min, int max)
{
	int *out;
	int i;

	if (min > max)
		return (NULL);
	out = malloc(sizeof(*out) * ((max - min) + 1));
	if (out == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		out[i] = min;
	return (out);
}

