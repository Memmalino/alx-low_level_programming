#include "main.h"

/**
 * _isalpha - alphabetic character checker
 * @c: Character to be checked
 * Return: it returns 1 for alphabetic character
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}

