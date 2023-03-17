#include <stdio.h>

/**
 * main - main func
 * Return: this project return 0 (success)
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
