#include "main.h"

/**
 * get_bit - funct that returns the value of a bit
 * @n: the number to work on
 * @index: the index starting from 0
 * Return: value of bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}

	mask = 1UL << index;

	return ((n & mask) != 0);
}
