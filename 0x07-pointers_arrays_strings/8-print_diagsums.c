#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that returns nothing
 * @a: input
 * @size: input
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int add_1, add_2, y;

	add_1 = 0;
	add_2 = 0;
	for (y = 0; y < size; y++)
	{
		add_1 = add_1 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		add_2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", add_1, add_2);
}

