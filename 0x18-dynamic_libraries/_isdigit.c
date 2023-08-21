#include "main.h"

/**
 * _isdigit - it checks if an argument is a digit
 * @c: the argument
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
