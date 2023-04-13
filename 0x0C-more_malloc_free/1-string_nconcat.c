#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Function that concatenate
 * @s1: The first argument
 * @s2: The second arguement
 * @n: The number of bytes from s2 to concatenate to s1
 * Return: pointer to the result string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len = 0, len2 = 0;

	while (s1 && s1[len])
		len++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		s = malloc(sizeof(char) * (len + n + 1));
	else
		s = malloc(sizeof(char) * (len + len2 + 1));
	if (!s)
		return (NULL);
	while (i < len)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len + n))
		s[i++] = s2[j++];
	while (n >= len2 && i < (len + len2))
		s[i++] = s2[i++];
	s[i] = '\0';
	return (s);
}

