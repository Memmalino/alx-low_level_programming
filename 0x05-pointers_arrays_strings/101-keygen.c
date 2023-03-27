#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[80];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 80; i++)
	{
		pass[i] = rand() % 66;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((1883 - sum) - '0' < 66)
		{
			n = 1883 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	putchar('\n');
	return (0);
}
