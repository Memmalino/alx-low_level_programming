#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element
 * @array:  The array which the function parameter execute on
* @size: This shows the number of elements to print
 * @action: pointer to print
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;


	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
