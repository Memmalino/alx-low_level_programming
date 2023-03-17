#include <stdio.h>

/**
 * main - this a main func
 * Return: it retuns zero
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			int tens1 = i / 10;
			int ones1 = i % 10;
			int tens2 = j / 10;
			int ones2 = j % 10;

			putchar('0' + tens1);
			putchar('0' + ones1);
			putchar(' ');
			putchar('0' + tens2);
			putchar('0' + ones2);
			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

