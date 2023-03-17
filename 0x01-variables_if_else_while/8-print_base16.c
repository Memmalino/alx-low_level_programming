#include <stdio.h>

/**
 * main - this func prints all base 16
 * Return: Aways 0
 */
int main(void)
{
	int num;
	char letters;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}

