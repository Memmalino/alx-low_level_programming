#include <stdio.h>

/**
 * main - main funct
 * Return: zero always
 */

int main(void)
{
	int i, num = 50;
	long m1 = 1, m2 = 2, nterm;

	printf("%ld, %ld, ", m1, m2);

	for (i = 3; i <= num; i++)
	{
	nterm = m1 + m2;
	m1 = m2;
	m2= nterm;
	printf("%ld", nterm);
	if (i < num)
	{
	printf(", ");
	}
	}
	printf("\n");
	return (0);
}
