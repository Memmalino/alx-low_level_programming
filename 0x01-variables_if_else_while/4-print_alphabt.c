#include <stdio.h>

/**
 * main - main func
 * Return: this project return 0 (success)
 */

int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
		if (y != 'q' && y != 'e')
			putchar(y);
	putchar('\n');
	return (0);
}
