#include "main.h"

/**
 * _abs - brings the absolute value of an integer
 * @c: The number to be computed.
 * Return: it will return absolute value of the number
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}

