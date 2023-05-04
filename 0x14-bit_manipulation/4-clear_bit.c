#include "main.h"

/**
 * clear_bit - funct that sets the value of a bit to 0
 * @n: pointer to an int
 * @index: index starting from
 * Return: 1 if it worked or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	*n &= ~(1ul << index);
	return (1);
}
