#include "main.h"

/**
 * flip_bits - funct that returns the number of bits
 * @n: one of the argument
 * @m: second argument
 * Return: number of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff != 0)
	{
	count += diff & 1;
	diff >>= 1;
	}
	return (count);
}
