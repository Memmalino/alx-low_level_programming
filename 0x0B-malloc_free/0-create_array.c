#include "main.h"
#include <stdlib.h>

/**
 * create_array - funct that create array of size
 * @size: size of array
 * @c: character to assign
 * Return: Pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

