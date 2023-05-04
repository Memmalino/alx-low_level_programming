#include "main.h"

/**
 * set_bit - funct that sets the value of a bit to 1
 * @n: pointer to an int
 * @index: index
 * Return: 1 if it worked or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	*n |= (1ul << index);
	return (1);
}
