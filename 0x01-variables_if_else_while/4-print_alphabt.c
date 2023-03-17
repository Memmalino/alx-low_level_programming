#include <stdio.h>

/**
 * main - this is main
 * Return: returns 0
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		if (n != 'q' && n != 'e')
			putchar(n);
	putchar('\n');
	return (0);
}
