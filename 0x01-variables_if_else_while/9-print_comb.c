#include <stdio.h>

/**
 * main - This main func prints combination of digits
 * Return: This return zero
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(',');
		}
		++i;
	}
	putchar('\n');
	return (0);
}

