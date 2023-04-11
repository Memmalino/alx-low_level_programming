#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - funct that copy to new memory space
 * @str: character
 * Return: 0 on succes
 */

char *_strdup(char *str)
{
	char *cpy;
	int i;
	int j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	cpy = malloc(sizeof(char) * (i + 1));
	if (cpy == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		cpy[j] = str[j];
	return (cpy);
}

