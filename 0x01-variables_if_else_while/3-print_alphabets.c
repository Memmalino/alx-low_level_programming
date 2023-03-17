include <stdio.h>

/**
 * main - this ia a main fnc
 * Return: this returns 0
 */

int main(void)

{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	for (n = 'A'; n <= 'Z'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
