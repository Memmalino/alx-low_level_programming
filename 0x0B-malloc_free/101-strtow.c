#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - index marking the end of line
 * @str: The string to be searched
 * Return: the last index of the initial
 */

int word_len(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * count_words -  funct  that count  the  numbers  of  word
 * @str: the string that contains the word
 * Return: The numbers of words in string
 */

int count_words(char *str)
{
	int num = 0, words = 0, len = 0;

	for (num = 0; num < len; num++)
	{
		if (*(str + num) != ' ')
		{
			words++;
			num += word_len(str + num);
		}
	}
	return (words);
}

/**
 * strtow - funct that spit a string
 * @str: The string argument
 * Return: NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;
		letters = word_len(str + index);
		strings[w] = malloc(sizeof(char) * (letters + 1));
		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];
		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}

