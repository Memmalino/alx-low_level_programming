#include <stdio.h>

/**
 * main - this is a func
 * Return: Always return zero
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}

