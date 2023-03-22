#include "main.h"

/**
 * print_times_table - times table starts with 0.
 * @n: time table number
 * Return: it will return void
 */

void print_times_table(int n)
{
	int i;
	int j;
	int times;

	if (n < 0 || n > 15)
	return;
	for (i = 0; i <= n; i++)
	{
	for (j = 0; j <= n; j++)
	{
	times = i * j;
	if (j == 0)
		_putchar('0');
	else if (times < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(times + '0');
	}
	else if (times < 100)
	{
		_putchar(' ');
		_putchar(times / 10 + '0');
		_putchar(times % 10 + '0');
	}
	else
	{
		_putchar(times / 100 + '0');
		_putchar((times / 10) % 10 + '0');
		_putchar(times % 10 + '0');
	}
	if (j != n)
	{
		_putchar(',');
		_putchar(' ');
	}
	}
	_putchar('\n');
	}
}
