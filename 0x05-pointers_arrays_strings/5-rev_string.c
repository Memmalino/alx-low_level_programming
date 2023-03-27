#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int i;
	int ascend = 0;

	while (s[ascend] != '\0')
	ascend++;
	for (i = 0; i < ascend; i++)
	{
		ascend--;
		rev = s[i];
		s[i] = s[ascend];
		s[ascend] = rev;
	}
}
