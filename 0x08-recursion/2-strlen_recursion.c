#include "main.h"
/**
 * _strlen_recursion - fucntion that returns lenght of the string
 * @s: the argument to be passed
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}

