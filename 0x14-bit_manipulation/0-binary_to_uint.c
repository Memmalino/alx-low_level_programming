#include "main.h"

/**
 * binary_to_uint - funct that convert binary to an unsigned int
 * @b: pointer to a character
 * Return: the converted num or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (b == NULL)
	{
	return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			decimal = decimal * 2 + (b[i] - '0');
		}
		else
		{
		return (0);
		}
	}

	return (decimal);
}
