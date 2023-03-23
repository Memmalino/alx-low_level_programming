#include <stdio.h>

/**
 * main - this is main funct
 * Return: always returns 0
 */

int main(void)
{
	int m = 0;
	long n = 1, o = 2, sum = o;

	while (o + n < 4000000)
	{
	o += n;
	if (o % 2 == 0)
	sum += o;
	n = o - n;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}
