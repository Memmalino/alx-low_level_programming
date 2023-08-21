#include "main.h"

/**
 * _islower - it checks for lower case character
 * @c: The character to be checked
 * Return: 1 for lowercase or 0 for something else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
